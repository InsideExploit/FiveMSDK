#pragma once
#include <Windows.h>
#include <string>
#include "boost/optional.hpp"

class ConHost
{
private:
	using PrintClass = void(*)(std::string, std::string);
public:
	void Print(const std::string& channel, const std::string& message);
	bool IsConsoleOpen();
};