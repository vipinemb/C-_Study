#include "getmaxComp.hpp"

using namespace std;

void Complex::setValues(double tempReal, double tempImg) {
	real = tempReal;
	img = tempImg;
}

void printValues(Complex ComplexNumber) {
	cout << "Real: " << ComplexNumber.real << endl;
	cout << "Img: " << ComplexNumber.img << endl;
}
