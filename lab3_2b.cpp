#include<bits/stdc++.h>
using namespace std;
//selection sort
int selectionsort(int a[], int n)
{
int c=0;
int i, j, min, temp;
for(i=0; i<n-1; i++)
{
min=i; 
for(j=i+1; j<n; j++)
{
if(a[j]<a[min])
{
min=j;
}
c++;
}

temp=a[min];
a[min]=a[i];
a[i]=temp;
}
return c;
}

//bubble sort
int bubblesort(int a[], int n)
{
int cnt=0, i, j, temp;
for(i=0; i<n-1; i++)
{
for(j=0; j<n-i-1; j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=a[j];
cnt++;
}
}
}
return cnt;
}

//merge sort
int combine(int a[], int low, int mid, int high)
{
int cnt=0;
int c[(high+1)], i=low, j=mid+1, k=low;
while(i<=mid && j<=high)
{
if(a[i]<a[j])
c[k++]=a[i++];
else
c[k++]=a[j++];

cnt++;
}

if(i>mid)
while(j<=high)
c[k++]=a[j++];

if(j>high)
while(i<=mid)
c[k++]=a[i++];

for(i=low; i<=high; i++)
a[i]=c[i];

return cnt;
}

int mergesort(int a[], int low, int high)
{
int mid, x=0;
if(low<high)
{
mid=(low+high)/2;
mergesort(a, low, mid);
mergesort(a, mid+1, high);
x=combine(a, low, mid, high);
}
return x;
}


int main()
{
int t, n, i, x, y, z;
cout<<"Enter testcases: ";
cin>>t;
while(t--)
{
cout<<"Enter n: ";
cin>>n;
int a[n], b[n], c[n];
cout<<"Enter elements: "<<endl;
for(i=0; i<n; i++)
{
cin>>a[i];
b[i]=a[i];
c[i]=a[i];
}

x=selectionsort(a, n);
cout<<"Selection sort: "<<x<<endl;
y=bubblesort(b, n);
cout<<"Bubble sort: "<<y<<endl;
z=mergesort(c, 0, n-1);
cout<<"Merge sort: "<<z<<endl;
}
}
