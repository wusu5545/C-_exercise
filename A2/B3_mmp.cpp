#include<iostream>
#include<vector>

using namespace std;

int main(){
	int s1,s2,s3;
	cin>>s1>>s2>>s3;
	vector<vector<double>> m1(10,vector<double>(10));
	vector<vector<double>> m2(10,vector<double>(10));
	vector<vector<double>> m3(10,vector<double>(10));
	//double arr[10][10];
	for(int i=0;i!=s1;++i)
		for (int j=0;j!=s2;++j){
			cin>> m1[i][j];
		}
	for(int i=0;i!=s2;++i)
		for(int j=0;j!=s3;++j){
			cin>> m2[i][j];
		}
	for (int i=0;i!=s1;++i)
		for(int j=0;j!=s3;++j)
			for (int k=0;k!=s2;++k){
				m3[i][j]+=m1[i][k]*m2[k][j];
			}
	for (int i=0;i!=s1;++i){
		for (int j=0;j!=s3-1;++j){
			cout<<m3[i][j]<<' ';
		}
		cout<<m3[i][s3-1]<<endl;
	}
	return 0;
}
