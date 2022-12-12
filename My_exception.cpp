#include "My_exception.h"

My_exception::My_exception(const char* d) : std::domain_error(d) { }
