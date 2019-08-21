#include<bits/stdc++.h>
using namespace std;


void bubblesort(int a[], int n, int k)
{
int i, j, temp;
cout<<"The "<<k<<" largest elements are : ";
for(i=0; i<k; i++)
{
for(j=0; j<n-i-1; j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}

cout<<a[n-i-1]<<" ";
}
cout<<endl;
}


int main()
{

int n, k, i, ans;
fstream f;
f.open("testcases_lab2b.txt");
f>>n;
int a[n];

for(i=0; i<n; i++)
f>>a[i];

f>>k;
bubblesort(a, n, k);
}


