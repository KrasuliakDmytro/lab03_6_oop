#include "D1.h"

D1::D1(int b1Value, int d1Value)
    : B1(b1Value)
{
    d1 = d1Value;
}

D1::~D1()
{
    cout << "Destructing D1" << endl;
}

void D1::show() const
{
    B1::show();
    cout << "Class D1: d1 = " << d1 << endl;
}