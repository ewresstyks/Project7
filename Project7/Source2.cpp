#include<iostream>
using namespace std;


class Circle {
    double r;
    double const PI = 3.14;
public:
    Circle() { r = 0; }
    Circle(double _r) { r = _r; }
    bool operator==(Circle& b) {
        if (r == b.r) {
            return true;
        }
        return false;
    }
    bool operator>(Circle& b) {
        if (2 * PI * r > 2 * PI * b.r) {
            return true;
        }
        return false;
    }
    Circle operator+=(int a) {
        r += a;
        return *this;
    }
    Circle operator-=(int a) {
        r -= a;
        return *this;
    }

    bool operator==(Circle& b) {
        if (r == b.r) {
            return true;
        }
        return false;
    }
};
