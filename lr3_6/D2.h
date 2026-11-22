#pragma once
#include "B1.h"

class D2 : public B1
{
protected:
    int d2;

public:
    D2(int b1Value, int d2Value);
    ~D2();

    void show() const;
};