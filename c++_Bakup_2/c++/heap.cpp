#include<iostream>

using namespace std;

int a=10;			    // stored in stack 
int *p = new int ();    // allocate memory in heap and which happens dynamically

*p =10;   
delete(p);
p = new int[4];     //storing array 

delete[]p;
p=NULL;

return 0;



/*
 *Concept of heap and dynamic memory allocaion
 *Stack size is fixed and heap size isn't fixed i.e. dynamic.
 *heap is a free store and uses new keyword to allocate and delete to deallocate memry in heap.
 *heap is global as it can be accessed from any where.
 *"delelte" operator is used to deallocate memory in heap is imp since we mannually allocated memeory so manually deallocating required
 *when we deleted so the data is deleted but still the *p points to past place hence it is called "Dangling pointers"
 *so as a solution to dangling
  - we have two options
  ->either assign it some else value or
  ->delete pointer from stact only.
  delallocation is much important as to avoid memeory leaks.
 */