#include "D3.h"

D3::D3(int b1Value, int d2Value, int b2Value, int d3Value)
    : D2(b1Value, d2Value), B2(b2Value)
{
    d3 = d3Value;
}

D3::~D3()
{
    cout << "Destructing D3" << endl;
}

void D3::show() const
{
    D2::show();
    B2::show();

    cout << "Class D3: d3 = " << d3 << endl;
}