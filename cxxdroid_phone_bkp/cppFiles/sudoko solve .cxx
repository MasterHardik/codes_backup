
/*GEEKSFORGEEKS
Sudoku | Backtracking-7
Given a partially filled 9×9 2D array ‘grid[9][9]’, the goal is to assign digits (from 1 to 9) to the empty cells so that every row, column, and subgrid of size 3×3 contains exactly one instance of the digits from 1 to 9. 




Example: 

Input:
grid = { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} }
Output:
          3 1 6 5 7 8 4 9 2
          5 2 9 1 3 4 7 6 8
          4 8 7 6 2 9 5 3 1
          2 6 3 4 1 5 9 8 7
          9 7 4 8 6 3 1 2 5
          8 5 1 7 9 2 6 4 3
          1 3 8 9 4 7 2 5 6
          6 9 2 3 5 1 8 7 4
          7 4 5 2 8 6 3 1 9
Explanation: Each row, column and 3*3 box of 
the output matrix contains unique numbers.

Input:    
grid = { { 3, 1, 6, 5, 7, 8, 4, 9, 2 },
         { 5, 2, 9, 1, 3, 4, 7, 6, 8 },
         { 4, 8, 7, 6, 2, 9, 5, 3, 1 },
         { 2, 6, 3, 0, 1, 5, 9, 8, 7 },
         { 9, 7, 4, 8, 6, 0, 1, 2, 5 },
         { 8, 5, 1, 7, 9, 2, 6, 4, 3 },
         { 1, 3, 8, 0, 4, 7, 2, 0, 6 },
         { 6, 9, 2, 3, 5, 1, 8, 7, 4 },
         { 7, 4, 5, 0, 8, 6, 3, 1, 0 } };
Output:
           3 1 6 5 7 8 4 9 2 
           5 2 9 1 3 4 7 6 8 
           4 8 7 6 2 9 5 3 1 
           2 6 3 4 1 5 9 8 7 
           9 7 4 8 6 3 1 2 5 
           8 5 1 7 9 2 6 4 3 
           1 3 8 9 4 7 2 5 6 
           6 9 2 3 5 1 8 7 4 
           7 4 5 2 8 6 3 1 9 
Explanation: Each row, column and 3*3 box of 
the output matrix contains unique numbers.
Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.
 
Method 1: Simple.
Approach: The naive approach is to generate all possible configurations of numbers from 1 to 9 to fill the empty cells. Try every configuration one by one until the correct configuration is found, i.e. for every unassigned position fill the position with a number from 1 to 9. After filling all the unassigned position check if the matrix is safe or not. If safe print else recurs for other cases.

Algorithm: 



Create a function that checks if the given matrix is valid sudoku or not. Keep Hashmap for the row, column and boxes. If any number has a frequency greater than 1 in the hashMap return false else return true;
Create a recursive function that takes a grid and the current row and column index.
Check some base cases. If the index is at the end of the matrix, i.e. i=N-1 and j=N then check if the grid is safe or not, if safe print the grid and return true else return false. The other base case is when the value of column is N, i.e j = N, then move to next row, i.e. i++ and j = 0.
if the current index is not assigned then fill the element from 1 to 9 and recur for all 9 cases with the index of next element, i.e. i, j+1. if the recursive call returns true then break the loop and return true.
if the current index is assigned then call the recursive function with index of next element, i.e. i, j+1
*/
#include <iostream>
 

using namespace std;
 
// N is the size of the 2D matrix   N*N
#define N 9
 
/* A utility function to print grid */

void print(int arr[N][N])
{

    for (int i = 0; i < N; i++) 

    {

        for (int j = 0; j < N; j++)

            cout << arr[i][j] << " ";

        cout << endl;

    }
}
 
// Checks whether it will be 
// legal to assign num to the
// given row, col

bool isSafe(int grid[N][N], int row, 

                       int col, int num)
{

     

    // Check if we find the same num 

    // in the similar row , we

    // return false

    for (int x = 0; x <= 8; x++)

        if (grid[row][x] == num)

            return false;
 

    // Check if we find the same num in 

    // the similar column , we

    // return false

    for (int x = 0; x <= 8; x++)

        if (grid[x][col] == num)

            return false;
 

    // Check if we find the same num in 

    // the particular 3*3 matrix,

    // we return false

    int startRow = row - row % 3, 

            startCol = col - col % 3;

   

    for (int i = 0; i < 3; i++)

        for (int j = 0; j < 3; j++)

            if (grid[i + startRow][j + 

                            startCol] == num)

                return false;
 

    return true;
}
 
/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */

bool solveSuduko(int grid[N][N], int row, int col)
{

    // Check if we have reached the 8th 

    // row and 9th column (0

    // indexed matrix) , we are 

    // returning true to avoid

    // further backtracking

    if (row == N - 1 && col == N)

        return true;
 

    // Check if column value  becomes 9 , 

    // we move to next row and

    //  column start from 0

    if (col == N) {

        row++;

        col = 0;

    }

   

    // Check if the current position of 

    // the grid already contains

    // value >0, we iterate for next column

    if (grid[row][col] > 0)

        return solveSuduko(grid, row, col + 1);
 

    for (int num = 1; num <= N; num++) 

    {

         

        // Check if it is safe to place 

        // the num (1-9)  in the

        // given row ,col  ->we 

        // move to next column

        if (isSafe(grid, row, col, num)) 

        {

             

           /* Assigning the num in 

              the current (row,col)

              position of the grid

              and assuming our assigned 

              num in the position

              is correct     */

            grid[row][col] = num;

           

            //  Checking for next possibility with next

            //  column

            if (solveSuduko(grid, row, col + 1))

                return true;

        }

       

        // Removing the assigned num , 

        // since our assumption

        // was wrong , and we go for 

        // next assumption with

        // diff num value

        grid[row][col] = 0;

    }

    return false;
}
 
// Driver Code

int main()
{

    // 0 means unassigned cells

    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },

                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },

                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },

                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },

                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },

                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },

                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },

                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },

                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };
 

    if (solveSuduko(grid, 0, 0))

        print(grid);

    else

        cout << "no solution  exists " << endl;
 

    return 0;

    // This is code is contributed by Pradeep Mondal P
}
/*Output
3 1 6 5 7 8 4 9 2 
5 2 9 1 3 4 7 6 8 
4 8 7 6 2 9 5 3 1 
2 6 3 4 1 5 9 8 7 
9 7 4 8 6 3 1 2 5 
8 5 1 7 9 2 6 4 3 
1 3 8 9 4 7 2 5 6 
6 9 2 3 5 1 8 7 4 
7 4 5 2 8 6 3 1 9
 Complexity Analysis:  

Time complexity: O(9^(n*n)). 
For every unassigned index there are 9 possible options so the time complexity is O(9^(n*n)).
Space Complexity: O(n*n). 
To store the output array a matrix is needed.
Method 2: Backtracking. 
Approach: 
Like all other Backtracking problems, Sudoku can be solved by one by one assigning numbers to empty cells. Before assigning a number, check whether it is safe to assign. Check that the same number is not present in the current row, current column and current 3X3 subgrid. After checking for safety, assign the number, and recursively check whether this assignment leads to a solution or not. If the assignment doesn’t lead to a solution, then try the next number for the current empty cell. And if none of the number (1 to 9) leads to a solution, return false and print no solution exists.


Algorithm: 

Create a function that checks after assigning the current index the grid becomes unsafe or not. Keep Hashmap for a row, column and boxes. If any number has a frequency greater than 1 in the hashMap return false else return true; hashMap can be avoided by using loops.
Create a recursive function that takes a grid.
Check for any unassigned location. If present then assign a number from 1 to 9, check if assigning the number to current index makes the grid unsafe or not, if safe then recursively call the function for all safe cases from 0 to 9. if any recursive call returns true, end the loop and return true. If no recursive call returns true then return false.
If there is no unassigned location then return true.
// A Backtracking program in
// C++ to solve Sudoku problem
#include <bits/stdc++.h>

using namespace std;
 
// UNASSIGNED is used for empty
// cells in sudoku grid
#define UNASSIGNED 0
 
// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9
 
// This function finds an entry in grid
// that is still unassigned

bool FindUnassignedLocation(int grid[N][N],

                            int& row, int& col);
 
// Checks whether it will be legal
// to assign num to the given row, col

bool isSafe(int grid[N][N], int row,

            int col, int num);
 
   Takes a partially filled-in grid and attempts 
to assign values to all unassigned locations in 
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */

bool SolveSudoku(int grid[N][N])
{

    int row, col;
 

    // If there is no unassigned location,

    // we are done

    if (!FindUnassignedLocation(grid, row, col))

        // success!

        return true;
 

    // Consider digits 1 to 9

    for (int num = 1; num <= 9; num++) 

    {

         

        // Check if looks promising

        if (isSafe(grid, row, col, num)) 

        {

             

            // Make tentative assignment

            grid[row][col] = num;
 

            // Return, if success

            if (SolveSudoku(grid))

                return true;
 

            // Failure, unmake & try again

            grid[row][col] = UNASSIGNED;

        }

    }

    

    // This triggers backtracking

    return false;
}
 
/* Searches the grid to find an entry that is 
still unassigned. If found, the reference 
parameters row, col will be set the location 
that is unassigned, and true is returned. 
If no unassigned entries remain, false is returned. */

bool FindUnassignedLocation(int grid[N][N],

                            int& row, int& col)
{

    for (row = 0; row < N; row++)

        for (col = 0; col < N; col++)

            if (grid[row][col] == UNASSIGNED)

                return true;

    return false;
}
 
/* Returns a boolean which indicates whether 
an assigned entry in the specified row matches
the given number. */

bool UsedInRow(int grid[N][N], int row, int num)
{

    for (int col = 0; col < N; col++)

        if (grid[row][col] == num)

            return true;

    return false;
}
 
/* Returns a boolean which indicates whether 
an assigned entry in the specified column
matches the given number. */

bool UsedInCol(int grid[N][N], int col, int num)
{

    for (int row = 0; row < N; row++)

        if (grid[row][col] == num)

            return true;

    return false;
}
 
/* Returns a boolean which indicates whether 
an assigned entry within the specified 3x3 box 
matches the given number. */

bool UsedInBox(int grid[N][N], int boxStartRow,

               int boxStartCol, int num)
{

    for (int row = 0; row < 3; row++)

        for (int col = 0; col < 3; col++)

            if (grid[row + boxStartRow]

                    [col + boxStartCol] ==

                                       num)

                return true;

    return false;
}
 
/* Returns a boolean which indicates whether 
it will be legal to assign num to the given 
row, col location. */

bool isSafe(int grid[N][N], int row,

            int col, int num)
{

    /* Check if 'num' is not already placed in 

    current row, current column 

    and current 3x3 box */

    return !UsedInRow(grid, row, num)

           && !UsedInCol(grid, col, num)

           && !UsedInBox(grid, row - row % 3,

                         col - col % 3, num)

           && grid[row][col] == UNASSIGNED;
}
 
/* A utility function to print grid */

void printGrid(int grid[N][N])
{

    for (int row = 0; row < N; row++) 

    {

        for (int col = 0; col < N; col++)

            cout << grid[row][col] << " ";

        cout << endl;

    }
}
 
// Driver Code

int main()
{

    // 0 means unassigned cells

    int grid[N][N] = { { 3, 0, 6, 5, 0, 8, 4, 0, 0 },

                       { 5, 2, 0, 0, 0, 0, 0, 0, 0 },

                       { 0, 8, 7, 0, 0, 0, 0, 3, 1 },

                       { 0, 0, 3, 0, 1, 0, 0, 8, 0 },

                       { 9, 0, 0, 8, 6, 3, 0, 0, 5 },

                       { 0, 5, 0, 0, 9, 0, 6, 0, 0 },

                       { 1, 3, 0, 0, 0, 0, 2, 5, 0 },

                       { 0, 0, 0, 0, 0, 0, 0, 7, 4 },

                       { 0, 0, 5, 2, 0, 6, 3, 0, 0 } };

    if (SolveSudoku(grid) == true)

        printGrid(grid);

    else

        cout << "No solution exists";
 

    return 0;
}
 
/*
// This is code is contributed by rathbhupendra
Output
3 1 6 5 7 8 4 9 2 
5 2 9 1 3 4 7 6 8 
4 8 7 6 2 9 5 3 1 
2 6 3 4 1 5 9 8 7 
9 7 4 8 6 3 1 2 5 
8 5 1 7 9 2 6 4 3 
1 3 8 9 4 7 2 5 6 
6 9 2 3 5 1 8 7 4 
7 4 5 2 8 6 3 1 9*/
