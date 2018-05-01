#include "student.h"
#include <string>
#include <iostream>

using namespace std;

void student::setName(string first, string last)
{
    firstName= first;
    lastName= last;

}
string student::fullName()
{
    string f;
    f= firstName;
    f.append(" ");
    f.append(lastName);
    return f;

}
