#include<iostream>
#include<list>
using namespace std;

int adj[10][10], m, indegree[10], j;
void topological()
{
	for(int i=1; i<=m; i++)
	{
		indegree[i]=0;
		for(int j=0; j<m; j++)
		{
		indegree[i]=indegree[i]+adj[j][i];
		}
	}
	
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=m; j++)
		{
			if(indegree[j]==0)
			{
				cout<<j<<" ";
				indegree[j]=-1;
				for(int k=1; k<=m; k++)
				{
					if(adj[j][k]==1)
					  indegree[k]=indegree[k]-1;
			        }
			        
			 }
		}
	}
}

int main()
{
int j, i, s;
cout<<"enter the number of nodes\n";
cin>>m;
cout<<"Enter the adjacency matrix\n";
for(i=1; i<=m; i++)
    for(j=1; j<=m; j++)
           cin>>adj[i][j];
topological();
cout<<endl;
}

				
	

