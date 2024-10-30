#include<iostream>

int main(int argc, char const *argv[])
{
	push(0);ready[0] = 0;
	int j=0;
	while(!isEmpty()){
		int row = pop();
		explore[j] = row;
		for(int col = 0;col<4;col++){
			if((adjMatrix[row][col] ==1 && (ready[col] ==1))){
				ready[col] = 0;
				push(col);
			}
		}
		j++;
	}
	return 0;
}