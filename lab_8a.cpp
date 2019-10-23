#include<iostream>

using namespace std;

bool isMaxHeap(int a[], int n)
{
int i, f=0;
for(i=1; i<=n/2; i++)
{
 if(a[i] >= max(a[2*(i)], a[2*(i)+1]))
 {
  f=1;
  continue;
 }
 else
 {
   f=0;
   break;
 }
}

if(f==1)
 return true;
else 
 return false;
}

int main()
{
int n, i;
cout<<"Enter the size of array: ";
cin>>n;
int a[n+1];
cout<<"Enter the elements: "<<endl;
for(i=1; i<=n; i++)
 cin>>a[i];
 
bool x=isMaxHeap(a, n);
if(x)
 cout<<"Given array is a Max Heap"<<endl;
else
 cout<<"Given array is not a Max Heap"<<endl;
 
}


//Alternate approach
/* bool isHeap(int a[], int n)
   {
    int i;
    for(i=0; i<=n/2; i++)
    {
      if(2*i+1 < n && a[2*i+1] > a[i])
         return false;
      if(2*i+2 < n && a[2*i+2] > a[i])
         return false;
    }
    return true;
   }
