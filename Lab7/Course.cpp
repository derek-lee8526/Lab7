#include "Course.hpp"

using namespace std;

Course::Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time) : title (title), day (day), start_time (start_time), finish_time (finish_time)
{
}
Course::Course (const Course & m) : title (m.title), day (m.day), start_time (m.start_time), finish_time (m.finish_time)
{
}

Course & Course::operator =(Course m1) {
    mySwap(*this,m1);
    return *this;
}
bool operator == (const Course & m1, const Course & m2)
{
    if(m1.day == m2.day)
    {
        return true;
    }
    else if(m1.title == m2.title)
    {
        return true;
    }
    else if(m1.start_time == m2.start_time)
    {
        return true;
    }
    else if(m1.finish_time == m2.finish_time)
    {
        return true;
    }
    else
    {
        return false;
    }

}

bool operator < (const Course &m1, const Course &m2)
{
    if(m1.day < m2.day)
    {
        return true;
    }
    else if (m1.start_time < m2.start_time)
    {
        return true;
    }
    else if(m1.finish_time < m2.finish_time)
    {
        return true;
    }
    else if(m1.title < m2.title)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ostream & operator << (ostream &os, const Course & m)
{
    cout << m.title << " " << m.day << " " << m.start_time << " " << m.finish_time << endl;
    return os;
}

void mySwap(Course & m1, Course & m2)
{
    using std::swap;
    swap(m1.day,m2.day);
    swap(m1.title,m2.title);
    swap(m1.start_time,m2.start_time);
    swap(m1.finish_time,m2.finish_time);
}