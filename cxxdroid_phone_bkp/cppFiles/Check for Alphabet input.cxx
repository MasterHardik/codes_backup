/*#include<iostream>
using namespace std;
int main(){
	int Alpha;
	cout<<"Enter a input to check or Alphabet or not : "<<endl;
	cin>>Alpha;
	if(Alpha=='A'||Alpha=='B'||Alpha=='C'||Alpha=='D'||Alpha=='E'||Alpha=='F'||Alpha=='G'||Alpha=='H'||Alpha=='I'||Alpha=='J'||Alpha=='K'||Alpha=='L'||Alpha=='M'||Alpha=='N'||Alpha=='O'||Alpha=='P'||Alpha=='Q'||Alpha=='R'||Alpha=='S'||Alpha=='T'||Alpha=='U'||Alpha=='V'||Alpha=='W'||Alpha=='X'||Alpha=='Y'||Alpha=='Z'||Alpha=='a'||Alpha=='b'||Alpha=='c'||Alpha=='d'||Alpha=='e'||Alpha=='f'||Alpha=='g'||Alpha=='h'||Alpha=='i'||Alpha=='j'||Alpha=='k'||Alpha=='l'||Alpha=='m'||Alpha=='n'||Alpha=='o'||Alpha=='p'||Alpha=='q'||Alpha=='r'||Alpha=='s'||Alpha=='t'||Alpha=='u'||Alpha=='v'||Alpha=='w'||Alpha=='x'||Alpha=='y'||Alpha=='z'){
		cout<<"The input is an Alphabet."<<endl;
		}
	else{
		cout<<"The Entered input is not an Alphabet"<<endl;
		}	return 0;
	}
	
	*/
/*

#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);

    return 0;
}	
*/



/*
//TYPE 3 
#include<stdio.h>
int main(){
	int i;
	char Alpha ;
	printf("Enter a input to check for Alphabet or not ? %c",Alpha);
	scanf("%c",&Alpha);       //if i dont write & sign before Alpha then segment fault error will appear 
	if((Alpha>=65||Alpha<=90)&&(Alpha>=97||Alpha<=122)){
		printf("\nThe Entered input %c is an Alphabet. ",Alpha);
		} 
	else {
		printf("%c is not an Alphabet.",Alpha);
		}
	return 0;
	}
*/

//Q. This is a Program to test whether input is a alphabet or not ?
#include <iostream>
using namespace std;
int main()
{
	int i;
	char Alpha;
	char A[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	cout << "Enter a input to test for an Alphabet or not : "<<endl;
	cin >> Alpha;
	for (i = 0; i < 52; i++)
	{
		if (Alpha == A[i])
		{
			cout << "Yes its an Alphabet" << endl;
			break;
		}
	
	if (i == 52)
	{
		cout << "The input is not an Alphabet : " << endl;
	}
	}
	return 0;
}	