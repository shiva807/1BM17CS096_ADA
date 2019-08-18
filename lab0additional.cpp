#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int size, int key){
	for(int i= 0; i<size; i++){
		if(arr[i]==key) return 1;
	}
	return -1;
}

int main()
{
	int t,key,arrsize;
	fstream f ;
	f.open("testcases_lab0.txt"); // file with test cases
	if(!f){
		cout<<"Something unexpected has occurred";
		return -1;
	}
	f>>t;
	for(int i=0; i<t; i++){
		f>>arrsize;
		f>>key;
		int arr[arrsize];
		for(int j = 0; j<arrsize;j++)
			f>>arr[j];
		cout<<linearSearch(arr,arrsize,key)<<endl;
	}
	return 0;
}
