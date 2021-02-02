#include <Windows.h>
#include "SDK.hpp"

inline const char* const GetStringFromBoolean(bool value)
{
    return value ? "true" : "false";
}

VOID Main()
{
    ConHost console;
    console.Print("sdk", "loaded with success\n");
    console.Print("sdk", GetStringFromBoolean(console.IsConsoleOpen()));
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Main();
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

