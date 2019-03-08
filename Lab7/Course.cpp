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
    if(m1.day != m2.day)
    {
        return m1.day<m2.day;
    }
    else if (m1.start_time != m2.start_time)
    {
        return m1.start_time < m2.start_time;
    }
    else if(m1.finish_time != m2.finish_time)
    {
        return m1.finish_time < m2.finish_time;
    }
    else
    {
        return false;
    }
}

ostream & operator << (ostream &os, const Course & m)
{
    cout << m.title << " " << m.getDay() << " " << m.start_time << " " << m.finish_time << endl;
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

char Course::getDay() const {

    if(this->day =='M')
    {
        return 'M';
    }
    else if(this->day == 'T')
    {
        return 'T';
    }
    else if(this->day == 'W')
    {
        return 'W';
    }
    else if(this->day == 'R')
    {
        return 'R';
    }
    else if(this-> day == 'F')
    {
        return 'F';
    }
}


istream &operator >>(istream &is, Course::dayOfWeek& day)
{
    day = Course::MON;

    char val;
    if(is >> val)
    {
        if(val == 'T')
        {
            day = Course::TUE;
        }
        else if(val == 'W')
        {
            day = Course::WED;
        }
        else if(val == 'R')
        {
            day = Course::THUR;
        }
        else if(val == 'F')
        {
            day = Course::FRI;
        }
        else if(val == 'S')
        {
            day = Course::SAT;
        }
        else if(val == 'U')
        {
            day = Course::SUN;
        }
    }
    return is;
}