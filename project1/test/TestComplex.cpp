#include <iostream>
#include <string>
#include "complex.h"

using namespace std;

class TestComplex
{
  public:
    Complex a,b;
    char operation;
    string result;
  
  void input();
  string compare();
  Complex compute();
};

void TestComplex::input()
{
  string tmp;
  char t;
  cin >>tmp;
  if (tmp == "")
    return exit(0);
  if (tmp[1]>='a'&&tmp[1]<='z'){
    switch(tmp[1]){
      case 'a':operation = '+';break;
      case 's':operation = '-';break;
      case 'm':operation = '*';break;
      case 'd':operation = '/';break;
    }
  }
  else operation = tmp[1];
  cin >> a >> b;
  cin >> tmp;
  result = tmp;
  if (tmp[1]!='F'&&tmp[1]!='T'){
    cin >> tmp;
    result += ' ' + tmp;
  }
}

string TestComplex::compare()
{
  if (a == b)
    return "(T)";
  else return "(F)";
}

Complex TestComplex::compute()
{
  switch(operation){
    case '+':return a + b;break;
    case '-':return a - b;break;
    case '*':return a * b;break;
    case '/':return a / b;break;
  }
}

int main()
{
  TestComplex test;
  while (!cin.eof()){
    test.input();
    if (test.operation == '=')
      cout<< test.compare()<<endl;
    else {
      Complex out;
      out = test.compute();
      cout<<out<<endl;
    }
  }
  return 0;
}