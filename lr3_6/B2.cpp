#include "B2.h"

B2::B2(int value)
{
    b2 = value;
}

B2::~B2()
{
    cout << "Destructing B2" << endl;
}

void B2::show() const
{
    cout << "Class B2: b2 = " << b2 << endl;
}