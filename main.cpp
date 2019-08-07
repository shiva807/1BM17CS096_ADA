#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	int i, a, n, max=0;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter the integers:"<<endl;
	for(i=0; i<n; i++)
	{
		cin>>a;
		if(a>max)
			max=a;
	}
	cout<<"Max is:"<<max<<endl;
}
