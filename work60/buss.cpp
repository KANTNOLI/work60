#include "buss.h"
#include "main.h"

Bus::Bus() {
	name = "Volvo";
	number = "6789SD7";
	price = 45000;
	count = 47;
}

Bus::Bus(string n, string num, int p, int c) {
	name = n;
	number = num;
	price = p;
	count = c;
}

Bus::~Bus() {
}

string Bus::get_name() {
	return name;
}

void Bus::set_name(string n) {
	name = n;
}


string Bus::get_number() {
	return number;
}

void Bus::set_number(string n) {
	name = n;
}

int Bus::get_price() {
	return price;
}

void Bus::set_price(int p) {
	name = p;
}

int Bus::get_count() {
	return count;
}

void Bus::set_count(int c) {
	count = c;
}

string Bus::input_info() {
	return "name: " + name + ", number: " + number + ", price: " + to_string(price) + ", count:" + to_string(price);
}