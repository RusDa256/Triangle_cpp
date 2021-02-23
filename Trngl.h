#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;

class Triangle
{
	double Xa, Ya; // coordinates p. À
	double Xb, Yb; // coordinates p. Â
	double Xc, Yc; // coordinates p. Ñ
	double X;
	double Y;
	double AB, AC, BC; // the lengths of the sides
	float alfa; // angle at the vertex A
	float beta; // angle at the vertex B
	float gamma; // angle at the vertex C
public:
	Triangle(int Xa, int Ya, int Xb, int Yb, int Xc, int Yc);
	Triangle(int AB, int AC, int BC, int Xa, int Ya); 
	Triangle(int AB, int AC, float alfa);
	Triangle(int AB, float alfa, float beta); 
	~Triangle();
	Triangle(const Triangle& tmp);
	Triangle& operator= (const Triangle& tmp);

	double GetXa();
	double GetYa();

	double GetXb();
	double GetYb();

	double GetXc();
	double GetYc();

	double GetAB();
	double GetAC();
	double GetBC();

	double GetAlfa();
	double GetBeta();
	double GetGamma();

	double GetPerimeter();

	double GetSquare();
	void Shift(int x, int y);

	void Triangle::ShiftA(int x, int y);
	void Triangle::ShiftB(int x, int y);
	void Triangle::ShiftC(int x, int y);
	void Triangle::Draw(Pen^ penAB, Pen^ penBC, Pen^ penAC, Graphics^ graphics);
	void Triangle::turn(float a);
};