#pragma once
#include "main.h"

class Bus {
private:
	string name;
	string number;
	int price;
	int count;
public:


	Bus();
	Bus(string n, string num, int p, int c);
	~Bus();


	string get_name();
	void set_name(string n);
	string get_number();
	void set_number(string n);
	int get_price();
	void set_price(int p);
	int get_count();
	void set_count(int c);

	string input_info();

};