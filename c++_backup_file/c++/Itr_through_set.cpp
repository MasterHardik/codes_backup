#include<iostream>
#include<set>


int main(int argc, char const *argv[])
{
	std::set<int> myset;
	myset.insert(7);
	myset.insert(2);
	myset.insert(-6);
	myset.insert(8);
	myset.insert(1);
	myset.insert(-4);
	std::set<int>::const_iterator it;
	it = myset.cbegin();

	while(it != myset.cend()){
		std::cout<<*it<<" ";
		++it;
	}

	std::cout<<'\n';
	return 0;
}