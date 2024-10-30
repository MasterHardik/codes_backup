#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void show_help()
{
	cout<<"Usage :-"<<endl;
	cout<<"$ ./task add 2 hello world    # Add a new item with priority 2 and text \"hello world\" to the list"<<endl;
	cout<<"$ ./task ls                   # Show incomplete priority list items sorted by priority in ascending order"<<endl;
	cout<<"$ ./task del INDEX            # Delete the incomplete item with the given index"<<endl;
	cout<<"$ ./task done INDEX           # Mark the incomplete item with the given index as complete"<<endl;
	cout<<"$ ./task help                 # Show usage"<<endl;
	cout<<"$ ./task report               # Statistics"<<endl;
}	


string removeNumbers(string str)
{
    int current = 0;
    int len=str.length();
    for(int i = 0; i< len; i++){
        if(!isdigit(str[i])){
            str[current] = str[i];
            current++;
        }
    }

    return str.substr(1,current-1);
}

void sort_tasks(const char *filename)
{
	map <int, string> tasks;
	
	fstream file;
	file.open(filename,fstream::in);
	string tp;
	while(getline(file,tp)) {
		if((tp.length())==0)
			continue;
		else{
				int tmp=stoi(tp);
				string r = removeNumbers(tp);
				tasks[tmp]=r;
			}
	}
	file.close();
	file.open(filename,std::ofstream::out | std::ofstream::trunc);			
	for( map<int,string>::iterator ii=tasks.begin(); ii!=tasks.end(); ++ii)  
	{  
	   		
   			file<<ii->first<<" "<<ii->second<<endl;  	   			
	} 
	file.close();
}

string delete_line(const char *file_name, char *ar)
{
	string str;
    ifstream is(file_name);
    ofstream ofs;
    ofs.open("temp.txt", ofstream::out);
  	int n;
    sscanf(ar,"%d",&n);
		char c;
		int line_no = 1;
		while (is.get(c))
		{
		    if (c == '\n')
		    line_no++;
	 
		    if (line_no != n)
		        ofs << c;
		        
		    if(line_no == n)
		    	str.push_back(c);
		}
  
    ofs.close();
    is.close();

    remove(file_name);
    rename("temp.txt", file_name);
    
    return str;
}

int count_line()
{
	int count=0;
	string line;
	
	ifstream file("task.txt");
	while(getline(file,line)){
		if((line.length())==0)
			continue;
		else
			count++;
	}
	file.close();
	
	return count;
}

int count_line_completed()
{
	int count=0;
	string line;
	
	ifstream file("completed.txt");
	while(getline(file,line)){
		if((line.length())==0)
			continue;
		else
			count++;
	}
	file.close();
	
	return count;
}

void task_done(char *num)
{
	string comp=delete_line("task.txt",num);
	
	ofstream ofile("completed.txt", ios::out | ios::app);
	
	if (!ofile.is_open()) {
        cout << "problem";
    }
    else{
    	ofile<<comp<<endl;
    }
    
    ofile.close();
    sort_tasks("task.txt");
    sort_tasks("completed.txt");
	
}	

void report()
{
	map <int, string> pnd;
	
	fstream file;
	file.open("task.txt",fstream::in);
	string tp;
	while(getline(file,tp)) {
			if((tp.length())==0)
				continue;
			else{
				int tmp=stoi(tp);
				string r = removeNumbers(tp);
				pnd[tmp]=r;
			}
	}
	file.close();	
	cout<<"Pending : "<<count_line()<<"\n";		
	int count=1;
	for( map<int,string>::iterator ii=pnd.begin(); ii!=pnd.end(); ++ii)  
	{  
	   		cout<<count<<". "<<ii->second<<" ["<<ii->first<<"]\n";
   			count++;
	} 
	
	map <int, string> cmp;
	
	file.open("completed.txt",fstream::in);
	string tpk;
	while(getline(file,tpk)) {
			if((tpk.length())==0)
				continue;
			else{
				int tmp=stoi(tpk);
				string r = removeNumbers(tpk);
				cmp[tmp]=r;
			}
	}
	file.close();	
	cout<<"\n";
	cout<<"Completed : "<<count_line_completed()<<"\n";		
	count=1;
	for( map<int,string>::iterator ii=cmp.begin(); ii!=cmp.end(); ++ii)  
	{  
	   		cout<<count<<". "<<ii->second<<"\n";
   			count++;
	} 
	
		
}

int main(int argc, char* argv[])
{

	fstream tsk;
	if(argc == 1 || argv[1] == string("help")) {
		show_help();
	}
	
	if(argc >= 2)
	{	
		if(argv[1]== string("add"))
		{
			if(argv[2]==NULL || argv[3]==NULL)
			{
				cout<<"Error: Missing tasks string. Nothing added!";
			} 
			else {
				tsk.open("task.txt",fstream::app);
		
				if(!tsk)
				{
					cout<<"Error creating file";
					return 0;
				}
				tsk<<argv[2]<<" "<<argv[3]<<endl;
				cout<<"Added task: \""<<argv[3]<<"\" with priority "<<argv[2]<<endl;
				tsk.close();
				sort_tasks("task.txt");
			}
		}
		
		if(argv[1] == string("ls")) {
			tsk.open("task.txt",fstream::in);
			map<int, string> all_tasks;
			
			string tp;
			
			if(tsk.peek() == std::ifstream::traits_type::eof()){
				cout<<"There are no pending tasks!"<<endl;
			} else {
			
				while(getline(tsk,tp)) {
					if((tp.length())==0)
						continue;
					else{
			
						int tmp=stoi(tp);
						string r = removeNumbers(tp);
						all_tasks[tmp]=r;
					}
				}
				
				int count=1;
				for( map<int,string>::iterator ii=all_tasks.begin(); ii!=all_tasks.end(); ++ii)  
	   			{  
	   		
		   			cout <<count<<". "<<ii->second<<" ["<<ii->first<<"]"<< endl;  
		   			count++;
	   			}  
	   		}
	   		tsk.close();
		}
		
		if(argv[1]==string("del")) {
			if(argv[2]==NULL){
				cout<<"Error: Missing NUMBER for deleting tasks.";
			} 
			else{
				int ar;
				sscanf(argv[2],"%d",&ar);
				if(ar > count_line() || ar==0){
					cout<<"Error: task with index #"<<ar<<" does not exist. Nothing deleted."<<endl;
				} else {
				delete_line("task.txt",argv[2]);
				cout<<"Deleted task "<<"#"<<ar<<endl;
				//sort_tasks("task.txt");
				}
			}
		}
		
		if(argv[1]==string("done")) {
		
			if(argv[2]==NULL){
				cout<<"Error: Missing NUMBER for marking tasks as done.";
			}
			else if(stoi(argv[2])>count_line() || stoi(argv[2])==0) {
				cout<<"Error: no incomplete item with index #"<<stoi(argv[2])<<" exists.";
			}
			else{
				task_done(argv[2]);
				cout<<"Marked item as done."<<endl;
				//sort_tasks("task.txt");
				//sort_tasks("completed.txt");
			}
		}
		
		if(argv[1]==string("report")) {
			report();
		}
			 
			
	}
		
		
    
    return 0;
}
/*
int main(){
	show_help();
	removeNumbers();
}
*/