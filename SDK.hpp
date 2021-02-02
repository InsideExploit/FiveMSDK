#pragma once
#include <Windows.h>
#include <string>

class ConHost
{
private:
	using PrintClass = void(*)(class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&, class std::basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const&);
public:
	void Print(const std::string& channel, const std::string& message);
	bool IsConsoleOpen();
};