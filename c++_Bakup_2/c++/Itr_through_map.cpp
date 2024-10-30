#include<iostream>
#include<map>
#include<string>

int main(int argc, char const *argv[])
{
	std::map<int, std::string> mp;
	mp.insert(std::make_pair(4, "apple"));
	mp.insert(std::make_pair(2, "orange"));
	mp.insert(std::make_pair(1, "banana"));
	mp.insert(std::make_pair(3, "grapes"));
	mp.insert(std::make_pair(6, "mango"));
	mp.insert(std::make_pair(5, "peach"));

	auto it{ mp.cbegin() };
	while(it!= mp.cend()){
		std::cout<<it -> first <<"="<<it->second<<' ';
		++it;
	}
	std::cout<<'\n';

	return 0;
}