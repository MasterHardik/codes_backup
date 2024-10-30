#include<iostream>
#include<list>
using namespace std;

int  main(int argc, char const *argv[])
{
	std::list<int> li;
	for(int i=0;i<6;++i){
		li.push_back(i);
	}
	std::list<int>::const_iterator it;
	it = li.cbegin();
	while(it != li.cend()){
		cout<<*it<<" ";
		++it;
	}
	return 0;
}