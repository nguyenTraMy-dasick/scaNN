#ifndef UTILS_H
#define UTILS_H

#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;

// Struct lưu 1 điểm
struct Point
{
    vector<double> coords;
    string name;
};

// overload toán tử <<
inline std::ostream &operator<<(std::ostream &os, const Point &p)
{
    os << p.name << ":(";
    for (size_t i = 0; i < p.coords.size(); i++)
    {
        os << p.coords[i];
        if (i + 1 < p.coords.size())
            os << ",";
    }
    os << ")";
    return os;
}

// Tính khoảng cách Euclidean
inline double distance(const Point &a, const Point &b)
{
    double sum = 0.0;
    for (size_t i = 0; i < a.coords.size(); i++)
    {
        double diff = a.coords[i] - b.coords[i];
        sum += diff * diff;
    }
    return sqrt(sum);
}

#endif // UTILS_H
