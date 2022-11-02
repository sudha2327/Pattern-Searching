#include<iostream>
#include<string>
using namespace std;

int ctst(string &s1,string &s2){
	int a=0;
	
	for(int i=0;i<s1.length();i++){
		string b;
		for(int j=i;j<s1.length();j++){
			b+=s1[j];
			if(s2.find(b)!=string::npos){
				a++;
			}
		}
	}
	
	return a;
}




int main(){
	string  s1,s2;
	cout<<"enter the full string :"<<endl;
	cin>>s1;
	cout<<"enter the substr for findin"<<endl;
	cin>>s2;
	cout<<ctst(s1,s2)<<endl;
	
	return 0;
}
