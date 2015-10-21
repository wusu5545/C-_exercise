#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

int main(){
	char text1[100];
	char text2[100];
	int len1=0,len2=0;
	cin>>text1;
	cout<<text1<<endl;
	while(text1[len1]!='\0'){
		len1++;
	}
	cout<<len1<<endl;
	cin>> text2;
	cout<<text2<<endl;
	while(text2[len2]!='\0'){
		len2++;
	}
	cout<<len2<<endl;
	if (len1>len2)
		cout<< "word1 wins"<<endl;
	else if(len1<len2)
		cout<<"word2 wins"<<endl;
	else if (len1=len2){
		for (int i=0;i!=len1;++i){
			if(text1[i]>text2[i]){
				cout<<"equal,word1 wins"<<endl;
				return 0;
			}
			if(text1[i]<text2[i]){
				cout<<"equal,word2 wins"<<endl;
				return 0;
			}
		}
		cout<<"tie"<<endl;
	}
	return 0;
}
