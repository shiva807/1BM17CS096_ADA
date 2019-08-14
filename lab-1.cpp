#include<bits/stdc++.h>
using namespace std;

int bssqrt(int x)
{
int mid, y,  res;
int start=1, end=x;
while(start<=end)
{
mid=(start+end)/2;
y=mid*mid;

if(y==x)
{
return mid;
}

 if(x>y)
{
start=mid+1;
res=mid;
}
else
end=mid-1;
}
return res;
}

int main()
{
int ans,  x, t;
fstream fin;
fin.open("testcases2.txt");
fin>>t;
while(t--)
{
fin>>x;
ans=bssqrt(x);
cout<<"Square root of "<<x<<" ="<<ans<<endl;
}
}
