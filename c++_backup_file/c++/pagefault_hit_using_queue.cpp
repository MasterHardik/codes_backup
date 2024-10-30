#include<bits/stdc++.h>

using namespace std;

int getPagesFaults(int pages[],int n,int frames){
	unordered_set <int> set;
	queue <int> indexes;
	int countPageFaults = 0;
	for(int i=0;i<n;i++){
		if(set.size() < frames){
			if(set.find(pages[i])==set.end()){
				set.insert(pages[i]);
				countPageFaults++;
				indexes.push(pages[i]);
			}
		}
		else {
			if(set.find(pages[i])== set.end()){
				int val = indexes.front();
				indexes.pop();
				set.erase(val);
				set.insert(pages[i]);
				indexes.push(pages[i]);
				countPageFaults++;
			}
		}
	}
	return countPageFaults;
}

int main(){	
	int pages[] = {4,1,2,4,5};
	int n  = sizeof(pages)/sizeof(pages[0]);
	int frames = 4;

	cout<<"page Faults : "<<getPagesFaults(pages,n,frames);
	return 0;
}


/*

If we try to address a virtual address that is not in the RAM, we have what is called a page fault (also known as a page miss). If it is in real RAM, we have a page hit. If it is a hit, we return the copy in real RAM, whereas if it is a miss we swap a currently unused page.

*/