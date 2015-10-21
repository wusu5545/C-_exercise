#include<iostream>
#include<vector>

using namespace std;

int main(){
    int s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<double> m1(100);
    vector<double> m2(100);
    vector<double> m3(100);
    //double arr[10][10];
    for(int i=0;i!=s1;++i)
        for (int j=0;j!=s2;++j){
            cin>> m1[i*s2+j];
        }
    for(int i=0;i!=s2;++i)
        for(int j=0;j!=s3;++j){
            cin>> m2[i*s3+j];
        }
    for (int i=0;i!=s1;++i)
        for(int j=0;j!=s3;++j)
            for (int k=0;k!=s2;++k){
                m3[i*s3+j]+=m1[i*s2+k]*m2[k*s3+j];
            }
    for (int i=0;i!=s1;++i){
        for (int j=0;j!=s3-1;++j){
            cout<<m3[i*s3+j]<<' ';
        }
        cout<<m3[i*s3+s3-1]<<endl;
    }
    return 0;
}
