//Program to check if a string is palindrome or not.
#include<iostream.h>
#include<conio.h>            //for clrscr ( ) 
int main(){
	//clrscr( );
	char string[80] , c ;
	int len ;
	
		+	cout << "Enter a string ( max. 79 characters ) \n" ;
	cin.getline(string,80) ;
	   //loop to find the length of the string.
	   for (int len = 0 ; string [len] !='\0' ; ++len);
	   int i , j , flag = 1 ;
	   for(i=0,j = len - 1 ; i < len /2 ; ++i, --j){
	   	if ( string[i] != string[j])
	   	{
	   		flag = 0;
	   		break ;
	   		}
	   	}          //loop over 
	   	if (flag)
	   	cout << "It is palindrome \n";
	   	else
	   	cout << "It is not a palindrome \n";
	   	
	return 0;
	}
	
	
	