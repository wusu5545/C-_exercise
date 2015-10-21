#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

void print(vector<double>::const_iterator beg,vector<double>::const_iterator end){
	double sum=0;
	while(beg!=end){
		sum+=pow(*beg,2);
		beg++;
	}
	sum=sqrt(sum);
	cout<<sum<<endl;
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
	print(ivec.begin(),ivec.end());
	return 0;
}
