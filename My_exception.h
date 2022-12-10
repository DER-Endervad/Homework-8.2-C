#pragma once
#include <iostream>
#include <stdexcept>
class My_exception : public std::domain_error 
{
public:
	My_exception(domain_error d);
	/*void exception(int n);*/
};

