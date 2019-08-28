#include<bits/stdc++.h>
using namespace std;

void combine(int a[], int low, int mid, int high)
{
int c[2*(high+1)], i=low, j=mid+1, k=low;
while(i<=mid && j<=high)
{
if(a[i]<a[j])
c[k++]=a[i++];
else
c[k++]=a[j++];
}

if(i>mid)
while(j<=high)
c[k++]=a[j++];

if(j>high)
while(i<=mid)
c[k++]=a[i++];

for(i=low; i<=high; i++)
a[i]=c[i];
}

void split(int a[], int low, int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
split(a, low, mid);
split(a, mid+1, high);
combine(a, low, mid, high);
}
}

int main()
{
int t, n, i;
cout<<"Enter testcases: ";
cin>>t;
while(t--)
{
cout<<"Enter n: ";
cin>>n;
int a[n];
cout<<"Enter elements: "<<endl;
for(i=0; i<n; i++)
cin>>a[i];

split(a, 0, n-1);
cout<<"Sorted array:"<<endl;
for(i=0; i<n; i++)
cout<<a[i]<<endl;
}
}
