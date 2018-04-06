#pragma once
#include<iostream>
using namespace std;

class calCube {

public:
	calCube();
	~calCube();
	explicit calCube(double, double,double);
	void setLength(double);
	double getLength();
	void setWidth(double);
	double getWidth();
	void setHeight(double);
	double getHeight();
	double getCube();
	void displayMessage();
private:
	double length1;
	double width1;
	double height1;
};