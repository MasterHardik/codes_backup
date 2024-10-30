//#Program to accept sales of each day of the month and print the totsal sales and average sales of the month.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	clrscr();
	const int size =3;
	float sales[size],avg=0,total =0;
	for (int i=0 ;i<size;i++)           //Loop to accept sales.
	{
		cout<<"Enter sales made on day "<<i+1<<" : "<<endl;
		cin>>sales[i];
		total +=sales[i];
		}      //Loop over 
	avg=total/size;
	cout<<"/n Total sales = "<< total <<"\n"<<endl;
	cout<<"Average sales = "<< avg << "\n"<<endl;
	return 0;
}
										
									
												
															
																		
																					
																								
																											
																														
																																	
																																				
																																							
																																										
																																													
																																																
																																																			
																																																						
																																																									
																																																												
																																																															
																																																																		
																																																																					
																																																																								
																																																																											
																																																																														
																																																																																	
																																																																																				
																																																																																										