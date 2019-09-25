//solving n-queens problem using backtracking


#include<iostream>
using namespace std;

int x[4];

bool place(int k, int i)
{
  int j;
  for(j=1; j<k; j++)
  {
    if(x[j]==i  || abs(x[j]-i)==abs(j-k))
       return false;
  }
return true;
}


void nqueens(int k, int n)
{
  for(int i=1; i<=n; i++)
  {
   if(place(k,i))
   {
    x[k]=i;
    if(k==n)
    {
     for(int m=1; m<=n; m++)
       cout<<x[m];
       cout<<endl;
    }
    else
      nqueens(k+1, n);
   }
  }
}
 
int main()
{
int n;
cout<<"Enter number of queens: ";
cin>>n;
cout<<"The possible solutions are: "<<endl;
nqueens(1,n);
}




