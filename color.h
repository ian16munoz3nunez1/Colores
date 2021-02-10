#ifndef COLOR_H
#define COLOR_H

#include <iostream>
#include <conio.h>
#include "gotoxy.h"
#include "cursor.h"
#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80

using namespace std;

void menuTexto();
void menuFondo();
void mover();
int x = 0, y = 0, tecla;
int textox, textoy, fondox, fondoy;

int main()
{   
    char res;
      
    menuTexto();
    menuFondo();

    switch(textox)
    {
        case 0:
            switch(textoy)
            {
                case 0:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 00");
                                break;

                                case 1:
                                    system("color 10");
                                break;

                                case 2:
                                    system("color 20");
                                break;

                                case 3:
                                    system("color 30");
                                break;

                                case 4:
                                    system("color 40");
                                break;

                                case 5:
                                    system("color 50");
                                break;

                                case 6:
                                    system("color 60");
                                break;

                                case 7:
                                    system("color 70");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 80");
                                break;

                                case 1:
                                    system("color 90");
                                break;

                                case 2:
                                    system("color A0");
                                break;

                                case 3:
                                    system("color B0");
                                break;

                                case 4:
                                    system("color C0");
                                break;

                                case 5:
                                    system("color D0");
                                break;

                                case 6:
                                    system("color E0");
                                break;

                                case 7:
                                    system("color F0");
                                break;
                            }
                        break;
                    }
                break;

                case 1:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 01");
                                break;

                                case 1:
                                    system("color 11");
                                break;

                                case 2:
                                    system("color 21");
                                break;

                                case 3:
                                    system("color 31");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 41");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 51");
                                break;

                                case 6:
                                    system("color 61");
                                break;

                                case 7:
                                    system("color 71");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 81");
                                break;

                                case 1:
                                    system("color 91");
                                break;

                                case 2:
                                    system("color A1");
                                break;

                                case 3:
                                    system("color B1");
                                break;

                                case 4:
                                    system("color C1");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color D1");
                                break;

                                case 6:
                                    system("color E1");
                                break;

                                case 7:
                                    system("color F1");
                                break;
                            }
                        break;
                    }
                break;

                case 2:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 02");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 12");
                                break;

                                case 2:
                                    system("color 22");
                                break;

                                case 3:
                                    system("color 32");
                                break;

                                case 4:
                                    system("color 42");
                                break;
                                case 5:
                                    system("color 52");
                                break;

                                case 6:
                                    system("color 62");
                                break;

                                case 7:
                                    system("color 72");
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 82");
                                break;

                                case 1:
                                    system("color 92");
                                break;

                                case 2:
                                    system("color A2");
                                break;

                                case 3:
                                    system("color B2");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color C2");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color D2");
                                break;

                                case 6:
                                    system("color E2");
                                break;

                                case 7:
                                    system("color F2");
                                break;
                            }
                        break;
                    }
                break;
                
                case 3:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 03");
                                break;

                                case 1:
                                    system("color 13");
                                break;

                                case 2:
                                    system("color 23");
                                break;

                                case 3:
                                    system("color 33");
                                break;

                                case 4:
                                    system("color 43");
                                break;

                                case 5:
                                    system("color 53");
                                break;

                                case 6:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 63");
                                break;

                                case 7:
                                    system("color 73");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 83");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color altamente no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 93");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color A3");
                                break;

                                case 3:
                                    system("color B3");
                                break;

                                case 4:
                                    system("color C3");
                                break;

                                case 5:
                                    system("color D3");
                                break;

                                case 6:
                                    system("color E3");
                                break;

                                case 7:
                                    system("color F3");
                                break;
                            }
                        break;
                    }
                break;
                
                case 4:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 04");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 14");
                                break;

                                case 2:
                                    system("color 24");
                                break;

                                case 3:
                                    system("color 34");
                                break;

                                case 4:
                                    system("color 44");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 54");
                                break;

                                case 6:
                                    system("color 64");
                                break;

                                case 7:
                                    system("color 74");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 84");
                                break;

                                case 1:
                                    system("color 94");
                                break;

                                case 2:
                                    system("color A4");
                                break;

                                case 3:
                                    system("color B4");
                                break;

                                case 4:
                                    system("color C4");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color D4");
                                break;

                                case 6:
                                    system("color E4");
                                break;

                                case 7:
                                    system("color F4");
                                break;
                            }
                        break;
                    }
                break;
                
                case 5:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 05");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 15");
                                break;

                                case 2:
                                    system("color 25");
                                break;

                                case 3:
                                    system("color 35");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 45");
                                break;

                                case 5:
                                    system("color 55");
                                break;

                                case 6:
                                    system("color 65");
                                break;

                                case 7:
                                    system("color 75");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 85");
                                break;

                                case 1:
                                    system("color 95");
                                break;

                                case 2:
                                    system("color A5");
                                break;

                                case 3:
                                    system("color B5");
                                break;

                                case 4:
                                    system("color C5");
                                break;

                                case 5:
                                    system("color D5");
                                break;

                                case 6:
                                    system("color E5");
                                break;

                                case 7:
                                    system("color F5");
                                break;
                            }
                        break;
                    }
                break;
                
                case 6:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 06");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 16");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 26");
                                break;

                                case 3:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 36");
                                break;

                                case 4:
                                    system("color 46");
                                break;

                                case 5:
                                    system("color 56");
                                break;

                                case 6:
                                    system("color 66");
                                break;

                                case 7:
                                    system("color 76");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 86");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 96");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color A6");
                                break;

                                case 3:
                                    system("color B6");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color C6");
                                break;

                                case 5:
                                    system("color D6");
                                break;

                                case 6:
                                    system("color E6");
                                break;

                                case 7:
                                    system("color F6");
                                break;
                            }
                        break;
                    }
                break;
                
                case 7:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 07");
                                break;

                                case 1:
                                    system("color 17");
                                break;

                                case 2:
                                    system("color 27");
                                break;

                                case 3:
                                    system("color 37");
                                break;

                                case 4:
                                    system("color 47");
                                break;

                                case 5:
                                    system("color 57");
                                break;

                                case 6:
                                    system("color 67");
                                break;

                                case 7:
                                    system("color 77");
                                break;
                            }
                        break;

                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 87");
                                break;

                                case 1:
                                    system("color 97");
                                break;

                                case 2:
                                    system("color A7");
                                break;

                                case 3:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color B7");
                                break;

                                case 4:
                                    system("color C7");
                                break;

                                case 5:
                                    system("color D7");
                                break;

                                case 6:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color E7");
                                break;

                                case 7:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color F7");
                                break;
                            }
                        break;
                    }
                break;
            }
        break;

        case 14:
            switch(textoy)
            {
                case 0:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 08");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 18");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 28");
                                break;

                                case 3:
                                    system("color 38");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 48");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 58");
                                break;

                                case 6:
                                    system("color 68");
                                break;

                                case 7:
                                    system("color 78");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 88");
                                break;

                                case 1:
                                    system("color 98");
                                break;

                                case 2:
                                    system("color A8");
                                break;

                                case 3:
                                    system("color B8");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color C8");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color D8");
                                break;

                                case 6:
                                    system("color E8");
                                break;

                                case 7:
                                    system("color F8");
                                break;
                            }
                        break;
                    }
                break;

                case 1:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 09");
                                break;

                                case 1:
                                    system("color 19");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 29");
                                break;

                                case 3:
                                    gotoxy(0, 15);
                                    cout << "Color altamente no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 39");
                                break;

                                case 4:
                                    system("color 49");
                                break;

                                case 5:
                                    system("color 59");
                                break;

                                case 6:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 69");
                                break;

                                case 7:
                                    system("color 79");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 89");
                                break;

                                case 1:
                                    system("color 99");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color A9");
                                break;

                                case 3:
                                    system("color B9");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color C9");
                                break;

                                case 5:
                                    system("color D9");
                                break;

                                case 6:
                                    system("color E9");
                                break;

                                case 7:
                                    system("color F9");
                                break;
                            }
                        break;
                    }
                break;

                case 2:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0A");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 1A");
                                break;

                                case 2:
                                    system("color 2A");
                                break;

                                case 3:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 3A");
                                break;

                                case 4:
                                    system("color 4A");
                                break;

                                case 5:
                                    system("color 5A");
                                break;

                                case 6:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 6A");
                                break;

                                case 7:
                                    system("color 7A");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 8A");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 9A");
                                break;

                                case 2:
                                    system("color AA");
                                break;

                                case 3:
                                    system("color BA");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color CA");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color DA");
                                break;

                                case 6:
                                    system("color EA");
                                break;

                                case 7:
                                    system("color FA");
                                break;
                            }
                        break;
                    }
                break;
                
                case 3:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0B");
                                break;

                                case 1:
                                    system("color 1B");
                                break;

                                case 2:
                                    system("color 2B");
                                break;

                                case 3:
                                    system("color 3B");
                                break;

                                case 4:
                                    system("color 4B");
                                break;

                                case 5:
                                    system("color 5B");
                                break;

                                case 6:
                                    system("color 6B");
                                break;

                                case 7:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 7B");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 8B");
                                break;

                                case 1:
                                    system("color 9B");
                                break;

                                case 2:
                                    system("color AB");
                                break;

                                case 3:
                                    system("color BB");
                                break;

                                case 4:
                                    system("color CB");
                                break;

                                case 5:
                                    system("color DB");
                                break;

                                case 6:
                                    system("color EB");
                                break;

                                case 7:
                                    system("color FB");
                                break;
                            }
                        break;
                    }
                break;
                
                case 4:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0C");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 1C");
                                break;

                                case 2:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 2C");
                                break;

                                case 3:
                                    system("color 3C");
                                break;

                                case 4:
                                    system("color 4C");
                                break;

                                case 5:
                                    system("color 5C");
                                break;

                                case 6:
                                    system("color 6C");
                                break;

                                case 7:
                                    system("color 7C");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 8C");
                                break;

                                case 1:
                                    system("color 9C");
                                break;

                                case 2:
                                    system("color AC");
                                break;

                                case 3:
                                    system("color BC");
                                break;

                                case 4:
                                    system("color CC");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color DC");
                                break;

                                case 6:
                                    system("color EC");
                                break;

                                case 7:
                                    system("color FC");
                                break;
                            }
                        break;
                    }
                break;
                
                case 5:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0D");
                                break;

                                case 1:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 1D");
                                break;

                                case 2:
                                    system("color 2D");
                                break;

                                case 3:
                                    system("color 3D");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 4D");
                                break;

                                case 5:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 5D");
                                break;

                                case 6:
                                    system("color 6D");
                                break;

                                case 7:
                                    system("color 7D");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 8D");
                                break;

                                case 1:
                                    system("color 9D");
                                break;

                                case 2:
                                    system("color AD");
                                break;

                                case 3:
                                    system("color BD");
                                break;

                                case 4:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color CD");
                                break;

                                case 5:
                                    system("color DD");
                                break;

                                case 6:
                                    system("color ED");
                                break;

                                case 7:
                                    system("color FD");
                                break;
                            }
                        break;
                    }
                break;
                
                case 6:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0E");
                                break;

                                case 1:
                                    system("color 1E");
                                break;

                                case 2:
                                    system("color 2E");
                                break;

                                case 3:
                                    system("color 3E");
                                break;

                                case 4:
                                    system("color 4E");
                                break;

                                case 5:
                                    system("color 5E");
                                break;

                                case 6:
                                    system("color 6E");
                                break;

                                case 7:
                                    gotoxy(0, 15);
                                    cout << "Color no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color 7E");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 8E");
                                break;

                                case 1:
                                    system("color 9E");
                                break;

                                case 2:
                                    system("color AE");
                                break;

                                case 3:
                                    system("color BE");
                                break;

                                case 4:
                                    system("color CE");
                                break;

                                case 5:
                                    system("color DE");
                                break;

                                case 6:
                                    system("color EE");
                                break;

                                case 7:
                                    gotoxy(0, 15);
                                    cout << "Color altamente no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color FE");
                                break;
                            }
                        break;
                    }
                break;
                
                case 7:
                    switch(fondox)
                    {
                        case 0:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 0F");
                                break;

                                case 1:
                                    system("color 1F");
                                break;

                                case 2:
                                    system("color 2F");
                                break;

                                case 3:
                                    system("color 3F");
                                break;

                                case 4:
                                    system("color 4F");
                                break;

                                case 5:
                                    system("color 5F");
                                break;

                                case 6:
                                    system("color 6F");
                                break;

                                case 7:
                                    system("color 7F");
                                break;
                            }
                        break;
                        case 14:
                            switch(fondoy)
                            {
                                case 0:
                                    system("color 8F");
                                break;

                                case 1:
                                    system("color 9F");
                                break;

                                case 2:
                                    system("color AF");
                                break;

                                case 3:
                                    system("color BF");
                                break;

                                case 4:
                                    system("color CF");
                                break;

                                case 5:
                                    system("color DF");
                                break;

                                case 6:
                                    gotoxy(0, 15);
                                    cout << "Color altamente no recomendado..\nSegur@ que quieres elegirlo?\nS/N\n>";
                                    fflush(stdin); cin >> res;
                                    if(res == 'S' || res == 's')
                                        system("color EF");
                                break;

                                case 7:
                                    system("color FF");
                                break;
                            }
                        break;
                    }
                break;
            }
        break;
    }

    return 0;
}

void menuTexto()
{
    system("cls");
    ocultarCursor();
    
    gotoxy(1, 0); cout << "Negro";
    gotoxy(1, 1); cout << "Azul";
    gotoxy(1, 2); cout << "Verde";
    gotoxy(1, 3); cout << "Aguamarina";
    gotoxy(1, 4); cout << "Rojo";
    gotoxy(1, 5); cout << "Purpura";
    gotoxy(1, 6); cout << "Amarillo";
    gotoxy(1, 7); cout << "Blanco";
    
    gotoxy(15, 0); cout << "Gris";
    gotoxy(15, 1); cout << "Azul claro";
    gotoxy(15, 2); cout << "Verde claro";
    gotoxy(15, 3); cout << "Aguamarina claro";
    gotoxy(15, 4); cout << "Rojo claro";
    gotoxy(15, 5); cout << "Purpura claro";
    gotoxy(15, 6); cout << "Amarillo claro";
    gotoxy(15, 7); cout << "Blanco brillante";

    gotoxy(0, 10); cout << "Elige el color de texto";

    do
    {
        mover();
    }while(tecla != 13);

    textox = x;
    textoy = y;

    mostrarCursor();
}

void menuFondo()
{
    system("cls");
    ocultarCursor();
    
    gotoxy(1, 0); cout << "Negro";
    gotoxy(1, 1); cout << "Azul";
    gotoxy(1, 2); cout << "Verde";
    gotoxy(1, 3); cout << "Aguamarina";
    gotoxy(1, 4); cout << "Rojo";
    gotoxy(1, 5); cout << "Purpura";
    gotoxy(1, 6); cout << "Amarillo";
    gotoxy(1, 7); cout << "Blanco";
    
    gotoxy(15, 0); cout << "Gris";
    gotoxy(15, 1); cout << "Azul claro";
    gotoxy(15, 2); cout << "Verde claro";
    gotoxy(15, 3); cout << "Aguamarina claro";
    gotoxy(15, 4); cout << "Rojo claro";
    gotoxy(15, 5); cout << "Purpura claro";
    gotoxy(15, 6); cout << "Amarillo claro";
    gotoxy(15, 7); cout << "Blanco brillante";

    gotoxy(0, 10); cout << "Elige el color de fondo";

    do
    {
        mover();
    }while(tecla != 13);

    fondox = x;
    fondoy = y;

    mostrarCursor();
}

void mover()
{
    tecla = getch();
    gotoxy(x, y); cout << ' ';
    switch(tecla)
    {
        case ARRIBA:
            if(y > 0) y--;
            else cout << '\a';
        break;

        case IZQUIERDA:
            if(x == 14) x = 0;
            else cout << '\a';
        break;

        case DERECHA:
            if(x == 0) x = 14;
            else cout << '\a';
        break;

        case ABAJO:
            if(y < 7 ) y++;
            else cout << '\a';
        break;
    }
    gotoxy(x, y); cout << '>';
}

#endif//COLOR_H