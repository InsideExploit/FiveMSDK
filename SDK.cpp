#include "SDK.hpp"

void ConHost::Print(const std::string& channel, const std::string& message)
{
	auto SendPrintMessage = (PrintClass)((DWORD64)GetModuleHandleA("conhost-v2.dll") + 0x1B330); // Pattern:  48 8B C4 55 41 54 41 55 41 56 41 57 48 8D 68 ? 48 81 EC ? ? ? ? 48 C7 44 24 ? ? ? ? ? 48 89 58 ? 48 89 70 ? 48 89 78 ? 48 8B F2
	SendPrintMessage(channel, message);
}

bool ConHost::IsConsoleOpen()
{
	bool g_consoleFlag = *(bool*)((DWORD64)GetModuleHandleA("conhost-v2.dll") + 0x59FE8); // Pattern: 80 3D ? ? ? ? ? 48 8B C2 48 8B 52 ?
	return g_consoleFlag;
}
