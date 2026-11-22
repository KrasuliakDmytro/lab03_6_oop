#include <iostream>
#include <Windows.h>

#include "B1.h"
#include "B2.h"
#include "D1.h"
#include "D2.h"
#include "D3.h"
#include "D4.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ќб'Їкт класу B1
    B1 objB1(10);

    // ќб'Їкт класу B2
    B2 objB2(20);

    // ќб'Їкт класу D1
    D1 objD1(10, 30);

    // ќб'Їкт класу D2
    D2 objD2(40, 50);

    // ќб'Їкт класу D3
    D3 objD3(60, 70, 80, 90);

    // ќб'Їкт класу D4
    D4 objD4(100, 110, 120, 130, 140, 150, 160);


    cout << "========== CLASS B1 ==========" << endl;
    cout << "Size: " << sizeof(objB1) << " bytes" << endl;
    objB1.show();

    cout << "\n========== CLASS B2 ==========" << endl;
    cout << "Size: " << sizeof(objB2) << " bytes" << endl;
    objB2.show();

    cout << "\n========== CLASS D1 ==========" << endl;
    cout << "Size: " << sizeof(objD1) << " bytes" << endl;
    objD1.show();

    cout << "\n========== CLASS D2 ==========" << endl;
    cout << "Size: " << sizeof(objD2) << " bytes" << endl;
    objD2.show();

    cout << "\n========== CLASS D3 ==========" << endl;
    cout << "Size: " << sizeof(objD3) << " bytes" << endl;
    objD3.show();

    cout << "\n========== CLASS D4 ==========" << endl;
    cout << "Size: " << sizeof(objD4) << " bytes" << endl;
    objD4.show();

    cout << "\n========== END OF PROGRAM ==========" << endl;

    return 0;
}