#include <iostream>

using namespace std;

int main(){
	int first,second;
	cout << "Gimme a limit:";
	cin >> first;
	cout << "Gimme another:";
	cin >> second;
	if (first>second){
		for (unsigned i=first; i != second; i--)
			cout << i << ' ';
	}
	else{
		for (unsigned i=first; i != second; i++)
			cout << i << ' ';
	}
	cout << second;
	return 0;
}
