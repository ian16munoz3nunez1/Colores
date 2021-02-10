#ifndef CURSOR_H
#define CURSOR_H

#include <stdio.h>
#include <windows.h>

void ocultarCursor() {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 1;
    cci.bVisible = FALSE;
    SetConsoleCursorInfo(hCon, &cci);
}

void mostrarCursor() {
    HANDLE hCon;
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    CONSOLE_CURSOR_INFO cci;
    cci.dwSize = 100;
    cci.bVisible = TRUE;
    SetConsoleCursorInfo(hCon, &cci);
}

#endif//CURSOR_H