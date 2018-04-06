#pragma once

#include<iostream>
using namespace std;

class calArea {

public:
	calArea(double,double);
	void setLength(double);
	double getLength();
	void setWidth(double);
	double getWidth();
	double getRecArea();
	void displayMessage();
private:
	double length1;
	double width1;
};