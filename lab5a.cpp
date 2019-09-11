#include<iostream>
using namespace std;
#define sqn 2
#define n 4

bool usedinRow(int grid[n][n], int row, int num)
{
 for(int col=0; col<n; col++)
  if(grid[row][col]==num)
   return true;

 return false;
}


bool usedinCol(int grid[n][n], int col, int num)
{
 for(int row=0; row<n; row++)
  if(grid[row][col]==num)
   return true;

 return false;
}


bool usedinBox(int grid[n][n], int boxStartRow, int boxStartCol, int num)
{
 for(int row=0; row<sqn; row++)
 {
  for(int col=0; col<sqn; col++)
  {
   if(grid[row+boxStartRow][col+boxStartCol] == num)
    return true;
  }
 }
 return false;
}


bool isSafe(int grid[n][n], int row, int col, int num)
{
 return !usedinRow(grid, row, num) && !usedinCol(grid, col, num) && !usedinBox(grid, row-row%sqn, col-col%sqn, num);
}



bool findUnassignedLocation(int grid[n][n], int &row, int &col)
{
 for(row=0; row<n; row++)
  for(col=0; col<n; col++)
    if(grid[row][col]==0)
     return true;
return false;
}


bool solveSudoku(int grid[n][n])
{
 int row, col;
 if(!findUnassignedLocation(grid, row, col))
  return true;

 for(int num=1; num<=n; num++)
 {
  if(isSafe(grid, row, col, num))
  {
   grid[row][col]=num;
   if(solveSudoku(grid))
     return true;

   grid[row][col]=0;
  }
 }
 return false;
}


int main()
{
int grid[n][n];
cout<<"Enter the Sudoku:"<<endl;

for(int i=0; i<n; i++)
 for(int j=0; j<n; j++)
  cin>>grid[i][j];

bool x=solveSudoku(grid);
if(x==true)
{
cout<<"The solution exists: "<<endl;
 for(int i=0; i<n; i++)
 {
  for(int j=0; j<n; j++)
   cout<<grid[i][j]<<" ";
 cout<<endl;
 }

}
else
 cout<<"No solution"<<endl;
}


