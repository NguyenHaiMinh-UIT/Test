

#include <iostream>
#include "CDate.h"

CDate::CDate() : day(0),month(0),year(0)
{

}

istream& operator>>(istream& is, CDate a)
{
    cout << "Ngay: ";
    is >> a.day;
    cout << "\nThang: ";
    is >> a.month;
    cout << "\nNam: ";
    is >> a.year;
    switch (a)
    {
        case 
    }
    return is;
}

ostream& operator<<(ostream& os, const CDate a)
{
    os << a.day << "/" << a.month << "/" << a.year;
    return os;
}

