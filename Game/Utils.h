#ifndef _UTILS_H_
#define _UTILS_H_

#include <Windows.h>

#include <signal.h>
#include <string.h>
#include <stdio.h>
#include <stdarg.h>
#include <time.h>
#include <stdlib.h>
#include <vector>
#include <string>

std::vector<std::string> split(std::string line, std::string delimeter = "\t");


LPCWSTR ToLPCWSTR(std::string st);

class Utils
{
};

#endif

