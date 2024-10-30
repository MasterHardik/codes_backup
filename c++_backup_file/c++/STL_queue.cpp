#include<iostream>
#include<queue>
using namespace std;

void display(queue<int>QUEUE){
	queue<int> q = QUEUE;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
}

int main(int argc, char const *argv[])
{
	queue<int> q;
	q.push(1);  
	q.push(2);	
	q.push(3);	
	q.push(4);	
	q.push(5);

// 	q.front();	// =1
// 	q.pop();	// del
// 	q.size();	// =4
// 	q.empty();	// false
// //	q.rear();	// =5
// 	q.pop();	// del
// 	q.front();	// =3
// 	q.size();	//=3
	display(q);
	cout<<"size :"<<q.size()<<endl;
	return 0;
}