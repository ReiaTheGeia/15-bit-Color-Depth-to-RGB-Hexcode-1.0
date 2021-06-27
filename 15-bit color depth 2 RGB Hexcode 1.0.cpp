// 15-bit color depth 2 RGB Hexcode 1.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "header.h"
using namespace std;
// Separator

int fifR;
int fifG;
int fifB;
int hexR;
int hexG;
int hexB;

int convert(int a)
{
    float q0 = 100*a/31;
    int q = q0;
    q = q * 255 / 100;
    return q;
}

int main()
{
    SendMessage(::GetConsoleWindow(), WM_SYSKEYDOWN, VK_RETURN, 0x20000000);
    splashscreen();
    clearscreen();
    while (true)
    {
        for (int i = 2; i >= 0; i--)
        {
            cout << "\nEnter in the 5 bit integer value for the ";
            if (i == 2)
            {
                cout << "Red color channel: ";
                cin >> fifR;
                while (fifR > 31 || fifR < 0)
                {
                    cout << "\nThat is not a valid value! Please enter a valid value: ";
                    cin >> fifR;
                }
                hexR = convert(fifR);
                
            }
            if (i == 1)
            {
                cout << "Green color channel : ";
                cin >> fifG;
                while (fifG > 31 || fifG < 0)
                {
                    cout << "\nThat is not a valid value! Please enter a valid value: ";
                    cin >> fifG;
                }
                hexG = convert(fifG);
                
            }
            if (i == 0)
            {
                cout << "Blue color channel : ";
                cin >> fifB;
                while (fifB > 31 || fifB < 0)
                {
                    cout << "\nThat is not a valid value! Please enter a valid value: ";
                    cin >> fifB;
                }
                hexB = convert(fifB);

            }
        }
        cout << "The Hexcode for (" << fifR << ", " << fifG << ", " << fifB << ")  is #";
        printf("%02x", hexR);
        printf("%02x", hexG);
        printf("%02x\n", hexB);
        cout << "Press ENTER to continue, press any other key to exit.\n";
        int character = _getch();
        if (character != 13)
        {
            break;
        }
    }
    SendMessage(GetConsoleWindow(), WM_QUIT, 0, 0);
    return 0;
}