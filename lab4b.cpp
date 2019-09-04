#include<bits/stdc++.h>
using namespace std;

#define m 3
#define n 5
void DFS(int a[][n], int row, int col, bool visited[][n]);
int isSafe(int a[][n], int row, int col, bool visited[][n]);
int countislands(int a[][n])
{
	bool visited[m][n];  int i, j;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			visited[i][j]=false;
			
	int count=0;
	for(i=0; i<m; i++)
	{
		for(j=0;j<n; j++)
		{
			if(a[i][j]==1 && visited[i][j]==false)
			{
				count++;
				DFS(a, i, j, visited);
			}
		}
	}
	return count;
}

void DFS(int a[][n], int row, int col, bool visited[][n])
{
	static int rowNbr[]={-1, -1, -1, 0, 0, 1, 1, 1};
	static int colNbr[]={-1, 0, 1, -1, 1, -1, 0, 1};
	
	visited[row][col]=true;
	
	for(int k=0; k<8; k++)
	{
		if(isSafe(a, row+rowNbr[k], col+colNbr[k], visited))
			DFS(a, row+rowNbr[k], col+colNbr[k], visited);
	}
	
}

int isSafe(int a[][n], int row, int col, bool visited[][n])
{
	return (row>=0) && (row<m) && (col>=0) && (col<n) && (a[row][col] && !visited[row][col]);
}

int main(int argc, char **argv)
{
	int  i, j;
	cout<<"Enter matrix:"<<endl;
	int a[m][n];
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			cin>>a[i][j];
	int ans=countislands(a);
	cout<<"Count of islands is: "<<ans<<endl;
}


