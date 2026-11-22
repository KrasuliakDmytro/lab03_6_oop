#pragma once
#include "D1.h"
#include "D3.h"

class D4 : public D1, public D3
{
private:
    int d4;

public:
    D4(int b1Value1, int d1Value,
        int b1Value2, int d2Value,
        int b2Value, int d3Value,
        int d4Value);

    ~D4();

    void show() const;
};