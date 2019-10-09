#include<bits/stdc++.h>
using namespace std;

void lcs(char *X, char *Y, int m, int n)
{
	int L[m+1][n+1];
	int i, j;
	
	for(i=0; i<=m; i++)
	{
		for(j=0; j<=n; j++)
		{
			if(i==0 || j==0)
			 L[i][j]=0;
			else if(X[i-1]==Y[j-1])
			 L[i][j]=L[i-1][j-1]+1;
			else
			 L[i][j]=max(L[i-1][j], L[i][j-1]);
		}
	}

cout<<"Length of LCS "<<L[m][n]<<endl;

int index=L[m][n];
char lcs[index+1];
lcs[index]='\0';

i=m, j=n;
while(i>0 && j>0)
{
 	if(X[i-1]==Y[j-1])
 	{
 		lcs[index-1]=X[i-1];
 		i--;
 		j--;
 		index--;
 	}
 	else if(L[i-1][j] > L[i][j-1])
 	 	i--;
 	 else
 	 	j--;
 }
 
 cout<<"Longest common subsequence is: ";
 for(i=0; i<=L[m][n]; i++)
     cout<<lcs[i];
 cout<<endl;
 }
 
 int main()
 {
 	char *x, *y;  string s1, s2;
 	int m, n;
 	cout<<"Enter first string : ";
 	cin>>s1;
 	cout<<"Enter second string : ";
 	cin>>s2;
 	x=new char[s1.length()];
 	strcpy(x, s1.c_str());
 	
 	y=new char[s1.length()];
 	strcpy(y, s2.c_str());
 	
 	lcs(x, y, s1.length(), s2.length());
 }
