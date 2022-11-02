#include<iostream>
#include<cmath>
using namespace std;

int occ(string &a,string &b){
	int l1=a.size();
	int l2=b.length();
	int ans=0;
	int j=0;
	for(int i=0;i<l1;i++){
		
		for(j=0;j<l2;j++){
			
			 if(a[i+j]!=b[j]){
			 	break;
			 }	
			 cout<<"iteration method"<<endl;
			 
		}
		if(j==l2){
			ans++;
		}
	}
	return ans;
	
}


int main(){
string a,b;
cout<<"first name"<<endl;
cin>>a;
cout<<"second one"<<endl;
cin>>b;
cout<<"final occurences"<<endl;
cout<<endl;
int v=occ(a,b);
cout<<v<<endl;
	
	
	return 0;
}
