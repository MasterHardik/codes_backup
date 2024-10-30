#include<iostream>

using namespace std;

// void printDiag(int arr[][],int n){
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cout<<arr[i][j];
// 		}
// 	}
// }

// int main(int argc, char const *argv[])
// {
// 	int n;
// 	cin>>n;
// 	int a[n];
// 	for(int i=0;i<n;i++){
// 		for(int j=0;j<n;j++){
// 			cin>>a[i][j];
// 		}
// 	}

// 	// printDiag(a,n);
// 	return 0;
// }

#include <iostream>
#define SIZE 5
using namespace std;
 
int main()
{
  int matrix[SIZE][SIZE];

  //Take input into Matrix
  cout << "Enter elements into the matrix: \n";
  for(int i=0; i<SIZE ; i++){
    for(int j=0; j<SIZE; j++){
      cin >> matrix[i][j];
    }
  }
    
  //Output the diagonal elements
  cout << "Diagonal Elements: \n";
  for(int i=0; i<SIZE; i++){
    for(int j=0; j<SIZE; j++){
      if(i==j || i+j==SIZE-1)
        cout << matrix[i][j] << "\t";
      else
        cout << " " << "\t";
    }
    cout << "\n";
  }
 
  return 0;
}