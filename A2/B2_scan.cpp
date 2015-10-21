#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void print(vector<double> ivec){
	cout<<ivec[0]<<endl;
	for (vector<double>::size_type ix=1;ix!=10;++ix){
		ivec[ix]=ivec[ix]+ivec[ix-1];
		cout<<ivec[ix]<<endl;
	}
}

int main(){
	vector<double>ivec;
	double arr[10];
	for (int i=0;i!=10;++i){
		cin>>arr[i];
		ivec.push_back(arr[i]);
	}
	for (vector<double>::iterator iter=ivec.begin();iter!=ivec.end();iter++){
		cout << *iter << endl;
	}
	print(ivec);
	return 0;
}
