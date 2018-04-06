#include "stdafx.h"
#include<iostream>
#include"calCube.h"
using namespace std;

calCube::calCube() {};
calCube::~calCube() {};

calCube::calCube(double length, double width, double height) {
	setLength(length);
	setWidth(width);
	setHeight(height);
}

void calCube::setLength(double length) {
	if (length >= 0)
		length1 = length;
	if (length < 0) {
		cout << "The number is < 0" << endl;
		length1 = 0;
	}
}

double calCube::getLength() {
	return length1;
}

void calCube::setWidth(double width) {
	if (width >= 0)
		width1 = width;
	if (width < 0) {
		cout << "The number is < 0" << endl;
		width1 = 0;
	}
}

double calCube::getWidth() {
	return width1;
}

void calCube::setHeight(double height) {
	if (height >= 0)
		height1 = height;
	if (height < 0) {
		cout << "The number is < 0" << endl;
		height1 = 0;
	}
}

double calCube::getHeight() {
	return height1;
}

double calCube::getCube() {
	return length1 * width1 * height1;
}

void calCube::displayMessage() {
	cout << "The volume is " << getCube() << endl;
}