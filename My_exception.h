#pragma once
#include <iostream>
#include <stdexcept>
class My_exception // : public std::domain_error не работает наследование
{
public:
	My_exception();
	void exception(int error);
};

