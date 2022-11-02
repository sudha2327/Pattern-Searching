#include<iostream>
using namespace std;
int repl(int arr[],int n){
	int res=0;
	for(int i=0;i<n-1;i++){
		res=res^(i+1)^arr[i];
	}
	res=res^arr[n-1];
	return res;
}

int main(){
	
	int n;
	cout<<"arr size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"array elem :"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"replica num is ==>"<<repl(arr,n)<<endl;
	
	
	return 0;
}
