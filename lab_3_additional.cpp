#include<bits/stdc++.h>
using namespace std;

int median(int a[], int n)
{
if(n%2==0)
 return (a[n/2]+a[n/2 -1])/2;
else
 return a[n/2];
}

int medianAns(int a[], int b[], int n)
{
if(n<=0)
 return -1;
else if(n==1)
 return (a[0]+b[0])/2;
else if(n==2)
 return (max(a[0],b[0])+min(a[1],b[1]))/2;


int m1=median(a, n);
int m2=median(b, n);

if(m1==m2)
 return m1;

if(m1<m2)
{
 if(n%2==0)
   return medianAns(a+(n/2)-1, b, n-(n/2)+1);
 else
   return medianAns(a+(n/2), b, n-(n/2));
}

if(n%2==0)
 return medianAns(b+(n/2)-1, a, n-(n/2)+1);
else
 return medianAns(b+(n/2), a, n-(n/2));
}




int main()
{
int n, i;
cout<<"Enter size: ";
cin>>n;
cout<<"\nEnter elements of array A:"<<endl;
int a[n];
for(i=0; i<n; i++)
cin>>a[i];

cout<<"\nEnter elements of array B:"<<endl;
int b[n];
for(i=0; i<n; i++)
cin>>b[i];

cout<<"Median is: "<< medianAns(a, b, n)<<endl;
}


