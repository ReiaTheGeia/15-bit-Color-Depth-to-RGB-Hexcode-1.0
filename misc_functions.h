#include "libraries.h"
using namespace std;
void clearscreen()
{
    for (int i = 0; i <= 5; i++)
        cout << "\n";
    for (int i = 0; i <= 30; i++)
        cout << " ~";
    for (int i = 0; i < 5; i++)
        cout << "\n";
}

void splashscreen()
{
    cout << R"(
                  __        __         _                                       _           
                  \ \      / /   ___  | |   ___    ___    _ __ ___     ___    | |_    ___  
                   \ \ /\ / /   / _ \ | |  / __|  / _ \  | '_ ` _ \   / _ \   | __|  / _ \ 
                    \ V  V /   |  __/ | | | (__  | (_) | | | | | | | |  __/   | |_  | (_) |
                     \_/\_/     \___| |_|  \___|  \___/  |_| |_| |_|  \___|    \__|  \___/ 


)";
    cout << R"(                                                                                                                      
    88  8888888888             88888888ba   88                 ,ad8888ba,                88                           
  ,d88  88                     88      "8b  ""    ,d          d8"'    `"8b               88                           
888888  88  ____               88      ,8P        88         d8'                         88                           
    88  88a8PPPP8b,            88aaaaaa8P'  88  MM88MMM      88              ,adPPYba,   88   ,adPPYba,   8b,dPPYba,  
    88  PP"     `8b  aaaaaaaa  88""""""8b,  88    88         88             a8"     "8a  88  a8"     "8a  88P'   "Y8  
    88           d8  """"""""  88      `8b  88    88         Y8,            8b       d8  88  8b       d8  88          
    88  Y8a     a8P            88      a8P  88    88,         Y8a.    .a8P  "8a,   ,a8"  88  "8a,   ,a8"  88          
    88   "Y88888P"             88888888P"   88    "Y888        `"Y8888Y"'    `"YbbdP"'   88   `"YbbdP"'   88          
)";
    cout << R"(
                                                    _           
                                                   | |_    ___  
                                                   | __|  / _ \ 
                                                   | |_  | (_) |
                                                    \__|  \___/ 
)";
    cout << R"(                                                                                    
          88888888ba     ,ad8888ba,   88888888ba       88        88                           
          88      "8b   d8"'    `"8b  88      "8b      88        88                           
          88      ,8P  d8'            88      ,8P      88        88                           
          88aaaaaa8P'  88             88aaaaaa8P'      88aaaaaaaa88   ,adPPYba,  8b,     ,d8  
          88""""88'    88      88888  88""""""8b,      88""""""""88  a8P_____88   `Y8, ,8P'   
          88    `8b    Y8,        88  88      `8b      88        88  8PP"""""""     )888(     
          88     `8b    Y8a.    .a88  88      a8P      88        88  "8b,   ,aa   ,d8" "8b,   
          88      `8b    `"Y88888P"   88888888P"       88        88   `"Ybbd8"'  8P'     `Y8  

                         ,ad8888ba,                88                           
                        d8"'    `"8b               88                           
                       d8'                         88                           
                       88              ,adPPYba,   88   ,adPPYba,   8b,dPPYba,  
                       88             a8"     "8a  88  a8"     "8a  88P'   "Y8  
                       Y8,            8b       d8  88  8b       d8  88          
                        Y8a.    .a8P  "8a,   ,a8"  88  "8a,   ,a8"  88          
                         `"Y8888Y"'    `"YbbdP"'   88   `"YbbdP"'   88          
)";
    cout << "Press any key to contine.\n";
    _getch();
    /*int charac;
    charac = _getch();
    while (charac != 13)
    {
        charac = _getch();
    }*/
}