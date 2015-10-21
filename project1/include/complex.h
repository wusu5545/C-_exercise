#ifndef COMPLEX_H
#define COMPLEX_H

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class Complex
{
    public:
	double r;
	double i;
	
	friend double abs(Complex);
	friend double arg(Complex);
	friend Complex conj(Complex);
	friend double real(Complex);
	friend double imag(Complex);
	friend double norm(Complex);
	friend Complex polar(double,double);
	
	friend Complex exp(Complex);
	friend Complex log(Complex);
	friend Complex pow(double,Complex);
	friend Complex pow(Complex,double);
	friend Complex root(Complex,double);
	friend Complex pow(Complex,Complex);
	friend Complex sqrt(Complex);
	
	friend Complex sin(Complex);
	friend Complex cos(Complex);
	friend Complex sinh(Complex);
	friend Complex cosh(Complex);
	
 	friend Complex operator -(Complex);
	friend bool operator ==(Complex,Complex);
	friend bool operator !=(Complex,Complex);
	
	void operator +=(Complex);
	void operator -=(Complex);
	void operator *=(Complex);
	void operator /=(Complex);
	void operator /=(double);
	
	friend ostream& operator <<(ostream&,Complex&);
	friend istream& operator >>(istream&,Complex&);
	
    Complex(double,double);
    Complex(double);
    Complex();
    
    friend Complex operator+ (Complex,Complex);
    friend Complex operator- (Complex,Complex);
    friend Complex operator* (Complex,Complex);
    friend Complex operator/ (Complex,Complex);
    friend Complex operator/ (Complex,double);
    void operator= (Complex);
    void operator= (double);
    
    friend Complex operator "" _i(long double);
    friend Complex operator "" _i(unsigned long long);
    
    Complex conj();
    double real();
    double imag();
    double abs();
    double arg();
    double norm();
    void print();
};

//Constructor with two arguments
Complex::Complex(double _r,double _i)
{
  r = _r;
  i = _i;
}

//Constructor with one arguments
Complex::Complex(double _r)
{
  r = _r;
  i = 0.0;
}

//default constructor
Complex::Complex()
{
  r = 0.0;
  i = 0.0;
}

Complex operator "" _i(long double _i)
{
  return Complex(0,_i);
}
Complex operator "" _i(unsigned long long _i)
{
  return Complex(0,_i);
}

/*Operator overloading
* Normally, we can use operators like +,-,* etc only for primitive
* data types in C++, like int , char float double etc.
* However, C++ allows us to extend thes operators to work on our
* classed by by overloading them. The following function overloads
* the '+' operator so that we can use a simple command like c = a + b
* to add two objects of type Complex.
*/
Complex operator+ (Complex a,Complex b)
{
  return Complex(a.r + b.r, a.i + b.i);
}

//Overloaded '-' operator
Complex operator- (Complex a,Complex b)
{
  return Complex(a.r - b.r, a.i - b.i);
}

//Overloaded '*' operator
Complex operator* (Complex a,Complex b)
{
  return Complex((a.r * b.r) - (a.i * b.i), (a.r * b.i) + (a.i * b.r));
}

//To be completed in next class
Complex operator/ (Complex a,Complex b)
{
  Complex c = b.conj();
  double n = b.abs();
  return (a * c) / (n * n);
}

Complex operator/ (Complex a,double b)
{
  return Complex(a.r/b,a.i/b);
}

//Assigns new values to the contents
void Complex::operator= (double _r)
{
  r = _r;
  i = 0.0;
}

void Complex::operator= (Complex rhs)
{
  r = rhs.r;
  i = rhs.i;
}

Complex operator -(Complex rhs)
{
  return Complex(-rhs.r,-rhs.i);
}

bool operator ==(Complex a,Complex b)
{
  if ((a.r == b.r)&&(a.i == b.i))
    return true;
  else
    return false;
}

bool operator !=(Complex a,Complex b)
{
  if (a == b)
    return false;
  else
    return true;
}

void Complex::operator+= (Complex rhs)
{
  (*this) = (*this) + rhs;
}

void Complex::operator-= (Complex rhs)
{
  (*this) = (*this) - rhs;
}

void Complex::operator*= (Complex rhs)
{
   (*this) = (*this) * rhs;
}

void Complex::operator/= (Complex rhs)
{
  (*this) = (*this) / rhs;
}

void Complex::operator/= (double rhs)
{
  (*this) = (*this) / rhs;
}

//returns the conjugate of the complex number for which it is called
Complex Complex::conj()
{
  return Complex(r, -i);
}

Complex conj(Complex rhs)
{
  return Complex(rhs.r,-rhs.i);
}

//returns the argle of the complex number in the half-open interval(-pi to pi] for which it is called
double Complex::arg()
{
  return atan2(i,r);
}

double arg(Complex rhs)
{
  return rhs.arg();
}

//returns the real part of the complex number for which it is called
double Complex::real()
{
  return (r);
}

double real(Complex rhs)
{
  return (rhs.r);
}

//returns the imaginary part of the complex number for which it is called
double Complex::imag()
{
  return (i);
}

double imag(Complex rhs)
{
  return rhs.i;
}

//returns the norm of the complex number for which it is called
double Complex::norm()
{
  return r*r + i*i;
}

double norm(Complex rhs)
{
  return rhs.norm();
}

//returns the absolute value of the comlex number for which it is called
double Complex::abs()
{
  return sqrt(r*r + i*i );
}
double abs(Complex rhs)
{
  return rhs.abs();
}

//returns a comlex. The arguments represent a pair of polar coordimates where r 
//is the magnitude and t is the angle(measured in radians)
Complex polar(double r,double t)
{
  return Complex(r*cos(t),r*sin(t));
}

//Compute base-e exponential of z, that is e (Euler's number, 2.7182818) raised to the z power.
Complex exp(Complex rhs)
{
    return Complex(exp(rhs.r)*cos(rhs.i),exp(rhs.r)*sin(rhs.i));
}

//Computes complex natural (base e) logarithm of a complex value z with a branch cut along the negative real axis
Complex log(Complex rhs)
{
  return Complex(log(rhs.abs()),rhs.arg());
}

//Computes complex x raised to a complex power y with a branch cut along the negative real axis for the first argument.
Complex pow(double a,Complex b)
{
  return exp(b * Complex(log(a),0.0));
}

Complex pow(Complex a,double b)
{
  return exp(Complex(b,0) * log(a));
}

Complex pow(Complex a,Complex b)
{
  return exp(b*log(a));
}

//Computes the square root of the complex number z with a branch cut along the negative real axis.
Complex sqrt(Complex rhs)
{
  return pow(rhs,0.5);
}

Complex root(Complex a,double b)
{
  return pow(a,1/b);
}

//Trigonometric and Hyperbolic Functions
Complex sinh(Complex rhs)
{
  return (exp(rhs)-exp(-rhs))/2;
}

Complex cosh(Complex rhs)
{
  return (exp(rhs)+exp(-rhs))/2;
}

Complex sin(Complex rhs)
{
  return sinh(Complex(0,1)*rhs)/Complex(0,1);
}

Complex cos(Complex rhs)
{
  return cosh(Complex(0,1)*rhs);
}

//prints the complex number
void Complex::print()
{
  if ((i == 0)||(i<0.000000000000001))
    i = 0;
  if ((r == 0)||(r<0.000000000000001))
    r = 0;
  cout << "(" << r << " " << i << ")";
}

//The following functions provide insertion and extraction capabilities for complex numbers.
ostream& operator <<(ostream& os,Complex& c)
{
  if ((c.r == 0)||(abs(c.r)<0.000000000000001))
    c.r = 0;
  if ((c.i == 0)||(abs(c.i)<0.000000000000001))
    c.i = 0;
  os << "("<<c.r<<" "<<c.i<<")";
  return os;
}

istream& operator >>(istream& is,Complex& c)
{
  char t;
  is >>t>>c.r>>c.i>>t;
  return is;
}

#endif