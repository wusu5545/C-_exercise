#include <iostream>

using namespace std;

int main(){
	int first_number,second_number;
	cin >> first_number >> second_number;
	if (first_number>second_number){
		int temp;
		temp=first_number;
		first_number=second_number;
		second_number=temp;
	}
	long sum=0;
	for (unsigned i = first_number ; i != second_number; ++i){
		sum=sum+i;
	}
	sum=sum+second_number;
	cout << sum << endl;
	return 0;
}
