#include<bits/stdc++.h>
using namespace std;

int binsearch(int a[], int lb, int ub, int k)
{
int mid;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(k==a[mid])
return mid;
else if(k<a[mid])
ub=mid-1;
else if(k>a[mid])
lb=mid+1;
}
return -1;
}




int main()
{
int t, n, i, k, p, x;
cout<<"Enter testcases:";
cin>>t;
while(t--)
{
cout<<"Enter n:";
cin>>n;
int a[n];
cout<<"Enter array elements: "<<endl;
for(i=0; i<n; i++)
cin>>a[i];
cout<<"Enter key element: ";
cin>>k;

for(i=0; i<n-1; i++)
{
if(a[i]>a[i+1])
p=i;
}

if(k==a[p])
x=p;
else if(k>=a[0] && k<a[p])
x=binsearch(a, 0, p-1, k);
else if(k<=a[n-1] && k<a[p])
x=binsearch(a, p+1, n-1, k);
else if(k>a[p])
x=-1;

if(x<0)
cout<<"Not found"<<endl;
else
cout<<"Found at index " <<x<<endl;
}
}
