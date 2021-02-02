#include "SDK.hpp"

void ConHost::Print(const std::string& channel, const std::string& message)
{
	auto SendPrintMessage = (PrintClass)((DWORD64)GetModuleHandleA("conhost-v2.dll") + 0x1B330);
	SendPrintMessage(channel, message);
}

bool ConHost::IsConsoleOpen()
{
	bool g_consoleFlag = *(bool*)((DWORD64)GetModuleHandleA("conhost-v2.dll") + 0x59FE8);
	return g_consoleFlag;
}