#include<bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int n, int key)
{
int lb=0, ub=n-1, mid, f=0, up;
while(lb<=ub)
{
mid=(lb+ub)/2;
if(a[mid]==key)
{
f=1;
up=mid;
break;
}
else if(a[mid]<key)
{
lb=mid+1;
}
else
{
ub=mid-1;
}
}

if(f==1)
return up;
else
return f;
}

int print(int *up, int a[], int k, int n)
{
int  c=1;
for(int i=*up-1; i>=0; i--)
{
if(a[i]==k)
c++;
} 
for(int i=*up+1; i<n; i++)
{
if(a[i]==k)
{
c++;
*up=i;
}
}
return c;
}


int main()
{
int a[10], n, key, x, i, lb, ub, c;
fstream f;
f.open("testcases_lab1.txt");
f>>n;

for(i=0; i<n; i++)
f>>a[i];

f>>key;
x=binarysearch(a, n, key);
if(x==0)
{
ub=-1; lb=-1; c=0;
}
else
{ 
c=print(&x,a,key, n);
ub=x;
lb=ub-c+1;
}
cout<<lb<<" "<<ub<<" "<<c<<endl;
}
