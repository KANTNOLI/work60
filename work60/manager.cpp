#include "manager.h"

void Manager::sorting(Bus* buss, int size) {

	for (int j = 0; j < size - 1; j++)
	{
		for (int i = 0; i < size - 1 - j; i++)
		{
			int first = buss[i].get_price() / buss[i].get_count();
			int second = buss[i + 1].get_price() / buss[i + 1].get_count();

			if (first > second)
			{
				Bus t = buss[i];
				buss[i] = buss[i + 1];
				buss[i + 1] = t;
			}
		}
	}
}

string Manager::input_min_price_count(Bus* buss) {
	return  buss[0].input_info() + " and " + buss[1].input_info();
}