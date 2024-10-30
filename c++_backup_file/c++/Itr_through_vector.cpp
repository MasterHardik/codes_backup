#include <iostream>
#include <vector>

int main()

    std::vector<int> vect;
    for (int count=0; count < 6; ++count)
        vect.push_back(count);

    std::vector<int>::const_iterator it; // declare a read-only iterator
    it = vect.cbegin(); // assign it to the start of the vector
    while (it != vect.cend()) // while it hasn't reach the end
        {
        std::cout << *it << ' '; // print the value of the element it points to
        ++it; // and iterate to the next element
        }

    std::cout << '\n';
}



// #include<iostream>
// #include<vector>

// using namesapce std;

// int main(){
// 	vector<in> vect;
// 	for(int i=0;i<8;i++)	{
// 	vect.push_back(i);
// 	}

// 	//declaring a read only iterator
// 	vector<int>::const_iterator it;
// 	it = vect.cbegin();    //assign it to start of the vector

// 	while(it!= vect.cend()){
// 	std::cout<<*it<<' ';//print the value of the element it points to 
// 	++it;
// 	}
// cout<<'\n';
// 	return 0;
// }