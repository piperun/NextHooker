#pragma once

// pipe.h
// 7/19/2018 Artikash

#include <Windows.h>

void CreateNewPipe();
DWORD WINAPI TextReceiver(LPVOID lpThreadParam);

// EOF