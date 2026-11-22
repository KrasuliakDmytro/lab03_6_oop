#pragma once
#include "D2.h"
#include "B2.h"

class D3 : protected D2, protected B2
{
protected:
    int d3;

public:
    D3(int b1Value, int d2Value, int b2Value, int d3Value);
    ~D3();

    void show() const;
};