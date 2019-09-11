#include<iostream>
#include<queue>
using namespace std;

queue<int>q;

#define n 4

void bfs(int k, int a[n][n], int visited[n])
{
 cout<<k+1<<" ";
 visited[k]=1;
 q.push(k);
 
 while(!q.empty())
 {
  int w=q.front();
  q.pop();

  for(int i=0; i<n; i++)
  {
    if(a[w][i] && !visited[i])
    {
      q.push(i);
      visited[i]=1;
      cout<<i+1<<" ";
    }
  }
 }
}

int main()
{
 /*int n;
 cout<<"Enter number of vertices: ";
 cin>>n;
*/
 int a[n][n], k;
 cout<<"Enter the adjacency matrix: ";
 for(int i=0; i<n; i++)
  for(int j=0; j<n; j++)
    cin>>a[i][j];

 int visited[n];
 for(int i=0; i<n; i++)
  visited[i]=0;

 cout<<"Enter the source vertex: ";
 cin>>k; 
 bfs(k-1, a, visited);
 
}



