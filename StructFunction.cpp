#include <iostream>
#include "Head.h"
using namespace std;

	void Coffee::In_info()
	{
		cout << "Данные о кофе" << endl;
		cout << "Введите Континент:" << endl;
		cin >> Continent;
		cout << "Введите страну произростания" << endl;
		cin >> Country;
		cout << "Введите вид кофейного дерева " << endl;
		cin >> Vid;
		cout << "Укажите высоту произростания" << endl;
		cin >> Visota;
	}
	void Coffee::Out_info()
	{
		cout << "Выводим данные о вашем кофе" << endl;
		cout << Continent << endl;
		cout << Country << endl;
		cout << Vid << endl;
		cout << Visota << endl;
	}
	void Coffee::Set_quantity() 
	{
		cout << "Set the quantity of coffee = " << endl;
		cin >> Quantity;
	}
	void Coffee::Get_quantity() {
		cout << "The quantity of your coffee =" << Quantity << endl;
		}
	void Coffee::Coffee_data() {
		for (i = 1; i<= Quantity; ++i) {
			cout << " Введите данные о кофе номер " << i  << " :" << endl;
			Coffee::In_info();
			cout << " Данные о кофе под номером " << i  << " :" << endl;
			Coffee::Out_info();
		}
	}



