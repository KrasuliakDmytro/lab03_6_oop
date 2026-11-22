#include "D2.h"

D2::D2(int b1Value, int d2Value)
    : B1(b1Value)
{
    d2 = d2Value;
}

D2::~D2()
{
    cout << "Destructing D2" << endl;
}

void D2::show() const
{
    B1::show();
    cout << "Class D2: d2 = " << d2 << endl;
}