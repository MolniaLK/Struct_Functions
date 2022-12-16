#pragma once
#ifndef HEAD_H
#define HEAD_H
#
#include <string>
#include <iostream>

using namespace std;

class Coffee {
public:
	string Continent;
	string Country;
	string Vid;
	string Visota;
	float i;
	float Quantity;
	void In_info();
	void Out_info();
	void Set_quantity();
	void Get_quantity();
	void Coffee_data();

	Coffee() {
		Quantity = 0;
		cout << "The quantity of coffee at the start = " << Quantity << endl;
	}
	~Coffee() {
		cout << "The distractor" << endl;
	}
};
#endif
