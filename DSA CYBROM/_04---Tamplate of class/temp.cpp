#include<iostream>

using namespace std;

template<typename t1>
class cybrom
{
public:
    t1 show(t1 a)
    {
        return ++a;
    }
};

template<typename t1, typename t2>
class bhopal
{
    t1 x1;
    t2 x2;

public:
    bhopal(t1 a, t2 b)
    {
        x1 = a;
        x2 = b;
    }
};
