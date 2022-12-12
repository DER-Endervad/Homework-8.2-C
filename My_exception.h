#pragma once
#include <iostream>
#include <stdexcept>
class My_exception : public std::domain_error
{
public:
	My_exception(const char* d);
};

