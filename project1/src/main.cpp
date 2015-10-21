#include<iostream>
#include <cmath>
#include "complex.h"
using namespace std;

int main()
{
  Complex a,b;
  
  a = -2_i;
  b = root(a,2);
  a = pow(b,2);
  cout <<a<<b<<endl;
  return 0 ;
}