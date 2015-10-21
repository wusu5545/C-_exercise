#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
	//int d = 3.1415;
	//float Float = 3.14F;
	//char _;
	//char 1_or_2 = '1';
	auto d=2.;
	float a,b,c;
	a = b+c*2.;
	cout << typeid(a).name() << endl;

	return 0;
}
