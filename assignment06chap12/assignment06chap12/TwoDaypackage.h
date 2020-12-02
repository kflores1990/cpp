#pragma once
#include "Package.h"
class TwoDaypackage :
    public Package
{
private:
    double twoDayFee;

public:
    TwoDaypackage(const string&, const string&, const string&, const string&, const string&,
        const string&, const string&, const string&, const string&, const string&,
        double = 0.0, double = 0.0, double = 0.0);

    void setTwoDayFee(double);
    double getTwoDayFee();

    double calculateCost() const override;
    string toString() const override;
};

