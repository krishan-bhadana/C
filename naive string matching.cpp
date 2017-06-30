#include<iostream>
#include<string>
using namespace std;
int main(){
	int n,m,s,flag=0;
	string text,pattern;
	cout<<"enter the string\n";
	cin>>text;
	cout<<"\nenter pattern\n";
	cin>>pattern;
	n=text.length();
	m=pattern.length();
	for(s=0;s<=n-m;s++){
		for(int i=0;i<m;i++){
			if(pattern[i]==text[s+i])
			flag++;
		}
		if(flag==m)
		cout<<"\nthe pattern occurs with shift:"<<s;
		flag=0;
	}
}
