#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

int main(){
	vector<string> text;
	string word;
	cin>> word;
	for (string::iterator iter=word.begin();iter!=word.end();iter++){
		if ((*iter<='9')&&(*iter>='0')||((*iter<='z')&&(*iter>='a'))||((*iter<='Z')&&(*iter>='A'))){
			cout<<*iter;
		}
	}
	return 0;
}
