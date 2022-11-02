#include<bits/stdc++.h>
using namespace std;

char maxoc(string &s){
	char ans;
	int fr[26]={0}; 
	int max=-1;
	
	int l=s.length();
	
	for(int i=0;i<l;i++){
		fr[s[i]-'a']++; 
	
	}
	
	
	for(int i=0;i<26;i++){
//		cout<<fr[i]<<endl;	
 
 if(max<fr[i]){ //max= -1  and initial base fr[i]=2
   max=fr[i];
   //print case
   ans=(char)i+'a';
  
 }
// cout<<"maximum values from the fr"<<" "<<max<<endl;

	}
	
	
	
	return ans;
}



int main(){
	string s;
	cout<<"enter the string "<<endl;
	cin>>s;
	cout<<"max char occur"<<"  "<<"==>"<<maxoc(s)<<endl;
	
	
	return 0;
}
