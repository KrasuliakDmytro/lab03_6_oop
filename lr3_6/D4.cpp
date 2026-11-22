#include "D4.h"

D4::D4(int b1Value1, int d1Value,
    int b1Value2, int d2Value,
    int b2Value, int d3Value,
    int d4Value)
    : D1(b1Value1, d1Value),
    D3(b1Value2, d2Value, b2Value, d3Value)
{
    d4 = d4Value;
}

D4::~D4()
{
    cout << "Destructing D4" << endl;
}

void D4::show() const
{
    D1::show();
    D3::show();

    cout << "Class D4: d4 = " << d4 << endl;
}