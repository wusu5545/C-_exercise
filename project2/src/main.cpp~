#include <iostream>
#include <random>
#include <vector>
#include <cmath>
#include <fstream>
#include "complex.h"

using namespace std;



class montecarlo
{
  public:
      int Number_of_point;
      int Count_inCircle = 0;
      vector<Complex> simple_point;
      vector<double> pi_Approx;
      vector<bool> inCircle;
      void Pi_Estamtion(int);
};

void montecarlo::Pi_Estamtion(int Number_of_point){
      default_random_engine generator;
      uniform_real_distribution<double> distribution(0,1);// generates number in the range 0..1
      
      ofstream SaveFile("plot/Pi_Approx.txt");
      for (int i=0;i!=Number_of_point;++i){
	  simple_point.push_back(Complex(distribution(generator),distribution(generator)));
	  if (abs(simple_point[i])<=1){
	    Count_inCircle++;
	    inCircle.push_back(1);
	  }else
	    inCircle.push_back(0);
	  pi_Approx.push_back(4.0*Count_inCircle/double(i+1));
	  SaveFile<<simple_point[i]<<' '<<pi_Approx[i]<<' '<<inCircle[i]<<' '<<Count_inCircle<<' '<<i+1<<endl;
	  if (abs(pi_Approx[i]-3.141592653589793238462)<0.00001)
	    break;
      }
      SaveFile.close();
}

int main()
{
  montecarlo pi;
  pi.Pi_Estamtion(50000);
  return 0 ;
}