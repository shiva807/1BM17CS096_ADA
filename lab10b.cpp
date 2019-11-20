#include<iostream>
#include<cmath>
using namespace std;

void floyds(int **cost, int n)
{
int k, i, j; //int **a;

//a=new int*[n];
//for(i=0; i<n; i++)
// a[i]=new int[n];

for(k=0; k<n; k++)
{
 for(i=0; i<n; i++)
 {
  for(j=0; j<n; j++)
  {
   cost[i][j]=min(cost[i][j], cost[i][k]+cost[k][j]);
  }
 }
}

cout<<"All pairs shortest path matrix is: \n";
for(i=0; i<n; i++)
{
 for(j=0; j<n; j++)
   cout<<cost[i][j]<<" ";
 cout<<endl;
}
  

}


int main()
{
int **cost, n, i, j;

cout<<"Enter the number of vertices: ";
cin>>n;

cost=new int*[n];
for(i=0; i<n; i++)
 cost[i]=new int[n];
 
cout<<"Enter the cost matrix: \n";
for(i=0; i<n; i++)
 for(j=0; j<n; j++)
  cin>>cost[i][j];


floyds(cost, n);
}
