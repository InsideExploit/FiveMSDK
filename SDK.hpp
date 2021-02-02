#pragma once
#include <Windows.h>
#include <string>

class ConHost
{
private:
	using PrintClass = void(*)(std::string, std::string);
public:
	void Print(const std::string& channel, const std::string& message);
	bool IsConsoleOpen();
};
