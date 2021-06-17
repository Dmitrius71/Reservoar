#pragma once
#include <iostream>


class Reservuar
{
	char* name;
	int h;
	int d;
	int m;

public:
	Reservuar() { name = new char[100]; }
	Reservuar(int h, int d, int m) :h{ h }, d{ d }, m{m} { name = new char[100]; }

	Reservuar S(Reservuar& obj)
	{
		Reservuar s;
		s = obj.d * obj.h * obj.m;
	}
	Reservuar V() {}
	Reservuar S() {}
	Reservuar S() {}
	~Reservuar() { delete[] name; }


};