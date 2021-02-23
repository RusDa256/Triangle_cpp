#include "Trngl.h"
#include <math.h>
#include <iostream>

#define PI 3.141592653589793

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
// +
Triangle::Triangle(int Xa, int Ya, int Xb, int Yb, int Xc, int Yc) {
	this->Xa = Xa; this->Ya = Ya;
	this->Xb = Xb; this->Yb = Yb;
	this->Xc = Xc; this->Yc = Yc;

	AB = sqrt((Xb - Xa) * (Xb - Xa) + (Yb - Ya) * (Yb - Ya));
	BC = sqrt((Xb - Xc) * (Xb - Xc) + (Yb - Yc) * (Yb - Yc));
	AC = sqrt((Xc - Xa) * (Xc - Xa) + (Yc - Ya) * (Yc - Ya));

	alfa = asin(GetSquare() * 2 / AB / AC) * 180 / PI;
	beta = asin(GetSquare() * 2 / AB / BC) * 180 / PI;
	gamma = asin(GetSquare() * 2 / BC / AC) * 180 / PI;


}

// +
Triangle::Triangle(int _AB, int _AC, int _BC, int _Xa = -1, int _Ya = -1) {
	AB = fmax(fmax(_AB, _AC), _BC);                          // AB - the longest side
	AC = _AC + _AB + _BC - AB - fmin(fmin(_AB, _AC), _BC);   // AC - average value
	BC = _AC + _AB + _BC - AB - AC;                          // BC- the smallest side
	alfa = acos(static_cast<double>(AC * AC + AB * AB - BC * BC) / (2 * AC * AB)) / PI * 180;  // the cosine theorem
	beta = acos(static_cast<double>(BC * BC + AB * AB - AC * AC) / (2 * BC * AB)) / PI * 180;
	gamma = 180 - (alfa + beta);

	if (_AB < 130)
	{
		Xa = 200; Ya = 200;
	}
	else if (_AB < 300)
	{
		Xa = 130; Ya = 130;
	}
	else
	{
		Xa = 50; Ya = 50;
	}
	Xb = Xa + AB; Yb = Ya;
	Xc = Xa + AC * cos(alfa / 180 * PI); Yc = Ya + AC * sin(alfa / 180 * PI);
}

Triangle::Triangle(int _AB, float _alfa, float _beta) {
	AB = _AB;
	alfa = _alfa;
	beta = _beta;
	gamma = 180 - beta - alfa;
	AC = (AB * sin(beta * PI / 180)) / sin(gamma * PI / 180);
	BC = (AB * sin(alfa * PI / 180)) / sin(gamma * PI / 180);

	if (_AB < 130)
	{
		Xa = 200; Ya = 200;
	}
	else if (_AB < 300)
	{
		Xa = 130; Ya = 130;
	}
	else
	{
		Xa = 50; Ya = 50;
	}
	Xb = AB + Xa; Yb = Ya;
	Xc = cos(alfa * PI / 180) * AC + Xa;
	Yc = sin(alfa * PI / 180) * AC + Ya;
}

Triangle::Triangle(int _AB, int _AC, float alfa)
{
	this->AB = _AB;
	this->AC = _AC;
	BC = sqrt(AB * AB + AC * AC - 2 * AB * AC * cos(alfa * PI / 180.0));

	this->alfa = alfa;
	beta = acos((float)(AB * AB + BC * BC - AC * AC) / (2 * AB * BC)) * 180.0 / PI;
	gamma = acos((float)(AC * AC + BC * BC - AB * AB) / (2 * AC * BC)) * 180.0 / PI;

	if (_AB < 130)
	{
		Xa = 200; Ya = 200;
	}
	else if (_AB < 300)
	{
		Xa = 130; Ya = 130;
	}
	else
	{
		Xa = 50; Ya = 50;
	}
	Xb = AB + Xa; Yb = Ya;
	Xc = cos(alfa * PI / 180) * AC + Xa;
	Yc = sin(alfa * PI / 180) * AC + Ya;
}

Triangle::Triangle(const Triangle& tmp) {
	this->Xa = tmp.Xa; this->Ya = tmp.Ya;
	this->Xb = tmp.Xb; this->Yb = tmp.Yb;
	this->Xc = tmp.Xc; this->Yc = tmp.Yc;

	AB = tmp.AB;
	BC = tmp.BC;
	AC = tmp.AC;

	alfa = tmp.alfa;
	beta = tmp.beta;
	gamma = tmp.gamma;
}

Triangle::~Triangle() {

}

Triangle& Triangle::operator= (const Triangle& tmp) {
	this->Xa = tmp.Xa; this->Ya = tmp.Ya;
	this->Xb = tmp.Xb; this->Yb = tmp.Yb;
	this->Xc = tmp.Xc; this->Yc = tmp.Yc;

	AB = tmp.AB;
	BC = tmp.BC;
	AC = tmp.AC;

	alfa = tmp.alfa;
	beta = tmp.beta;
	gamma = tmp.gamma;
	return *this;
}


double Triangle::GetXa() {
	return Xa;
}
double Triangle::GetYa() {
	return Ya;
}

double Triangle::GetXb() {
	return Xb;
}
double Triangle::GetYb() {
	return Yb;
}

double Triangle::GetXc() {
	return Xc;
}
double Triangle::GetYc() {
	return Yc;
}

double Triangle::GetAlfa() {
	return alfa;
}
double Triangle::GetBeta() {
	return beta;
}
double Triangle::GetGamma() {
	return gamma;
}

double Triangle::GetAB() {
	return AB;
}
double Triangle::GetBC() {
	return BC;
}
double Triangle::GetAC() {
	return AC;
}

double Triangle::GetPerimeter() {
	return AB + BC + AC;
}

double Triangle::GetSquare() {
	double pp = GetPerimeter() / 2;
	return sqrt(pp * (pp - AB) * (pp - AC) * (pp - BC));
}

void Triangle::Shift(int x, int y) {
	Xa += x; Xb += x; Xc += x;
	Ya += y; Yb += y; Yc += y;
}

void Triangle::ShiftA(int x, int y) {
	Xa += x;
	Ya += y;
}

void Triangle::ShiftB(int x, int y) {
	Xb += x;
	Yb += y;
}

void Triangle::ShiftC(int x, int y) {
	Xc += x;
	Yc += y;
}

void Triangle::Draw(Pen^ penAB, Pen^ penAC, Pen^ penBC, Graphics^ graphics)
{
	graphics->DrawLine(penAB, (int)Xa, (int)Ya, (int)Xb, (int)Yb);
	graphics->DrawLine(penAC, (int)Xb, (int)Yb, (int)Xc, (int)Yc);
	graphics->DrawLine(penBC, (int)Xc, (int)Yc, (int)Xa, (int)Ya);
}

void Triangle::turn(float a)
{
	double vectorX, vectorY;
	double vectorX2, vectorY2;

	this->X = (this->Xa + this->Xb + this->Xc) / 3;
	this->Y = (this->Ya + this->Yb + this->Yc) / 3;

	vectorX = Xa - X;
	vectorY = Ya - Y;

	vectorX2 = vectorX * cos(a * PI / 180) - vectorY * sin(a * PI / 180);
	vectorY2 = vectorX * sin(a * PI / 180) + vectorY * cos(a * PI / 180);

	Xa = X + vectorX2; 
	Ya = Y + vectorY2;

	vectorX = Xb - X; 
	vectorY = Yb - Y;

	vectorX2 = vectorX * cos(a * PI / 180) - vectorY * sin(a * PI / 180);
	vectorY2 = vectorX * sin(a * PI / 180) + vectorY * cos(a * PI / 180);

	Xb = X + vectorX2; 
	Yb = Y + vectorY2;

	vectorX = Xc - X; 
	vectorY = Yc - Y;

	vectorX2 = vectorX * cos(a * PI / 180) - vectorY * sin(a * PI / 180);
	vectorY2 = vectorX * sin(a * PI / 180) + vectorY * cos(a * PI / 180);

	Xc = X + vectorX2; 
	Yc = Y + vectorY2;
}