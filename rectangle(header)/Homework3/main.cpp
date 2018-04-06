#include "stdafx.h"
#include"calArea.h"
using namespace std;

int main() {
	double length;
	double width;
	cout << "Enter the side length of your rectangle: ";
	cin >> length;

	
	cout << "Enter the side width of your rectangle: ";
	cin >> width;

	calArea calArea(length, width);

	
	calArea.displayMessage();

}