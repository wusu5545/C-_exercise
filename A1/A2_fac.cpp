#include <iostream>

using namespace std;

int main(){
	int d;
	cin >> d;
	long mul=1;
	double muld=1;
	if (d>=21){
		for (int i=1;i<=d;++i)
			muld=muld*i;
	}
	else{
		for (int i=1;i<=d;++i){
			mul=mul*i;
		}
	}
	if (d<0)
		cout << '?' << endl;
	else if (d>=21)
		cout << muld << endl;
	else
		cout << mul << endl;
	return 0;
}
