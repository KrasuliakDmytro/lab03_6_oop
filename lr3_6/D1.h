#pragma once
#include "B1.h"

class D1 : protected B1
{
protected:
    int d1;

public:
    D1(int b1Value, int d1Value);
    ~D1();

    void show() const;
};