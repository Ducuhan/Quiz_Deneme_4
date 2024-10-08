#include <iostream>
#include <string>
#include <conio.h> /*getch kodu icin*/

using namespace std;

#undef max;

#pragma warning(disable: 4996)

void menuGoster(int secim) {
    system("cls");
    cout << (secim == 1 ? "--> " : "   ") << "Admin" << endl;
    cout << (secim == 2 ? "--> " : "   ") << "Guest" << endl;
    cout << (secim == 3 ? "--> " : "   ") << "Exit" << endl;
}

int main()
{
}