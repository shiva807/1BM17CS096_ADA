//7b. Knapsack problem
#include<bits/stdc++.h>
using namespace std;

void DPknapsack(int *w1, int *v1, int w, int n)
{
	int i, j;   int table[n][w+1];
	for(i=0; i<n; i++)
		table[i][0]=0;
	for(j=1; j<=w; j++)
		table[0][j]=0;
		
	for(i=0;  i<n; i++)
	{
		for(j=0; j<=w; j++)
		{
			if(j-w1[i]>=0)
			  table[i][j]=max(table[i-1][j], v1[i]+table[i-1][ j-w1[i]]);
			else
			  table[i][j]=table[i-1][j];
	         }
	 }  
		
	for(i=0; i<n; i++)
	   for(j=0; j<=w; j++)
	       cout<<table[i][j]<<" ";	
	   cout<<endl;
}

int main()
{
int w, n, i;
cout<<"Enter number of items : ";
cin>>n;
cout<<"Enter capacity of knapsack: ";
cin>>w;

int *weight, *value;
cout<<"Enter the weights of items:"<<endl;
weight=new int[n];
for(i=0; i<n; i++)
cin>>weight[i];

cout<<"Enter the values of items:"<<endl;
value=new int[n];
for(i=0; i<n; i++)
cin>>value[i];

DPknapsack(weight, value, w, n);
}
