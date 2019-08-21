#include<bits/stdc++.h>
using namespace std;


int selectionsort(int a[], int n, int k)
{
int i, j, min, temp;
for(i=0; i<k; i++)
{
min=i;
for(j=i+1; j<n; j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}

return a[k-1];
}

int main()
{

int n, k, i, ans;
fstream f;
f.open("testcases_lab2.txt");
f>>n;
int a[n];

for(i=0; i<n; i++)
f>>a[i];

f>>k;
ans=selectionsort(a, n, k);
cout<<"The kth smallest element is: "<<ans<<endl;
}


