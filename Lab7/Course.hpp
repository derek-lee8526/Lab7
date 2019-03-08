// Course.h
#include <iostream>

using namespace std;
struct Course {

enum dayOfWeek {MON, TUE, WED, THUR, FRI, SAT, SUN};

Course (string title, dayOfWeek day, unsigned int start_time, unsigned int finish_time);
Course (const Course & m);

Course & operator = (Course m);
friend bool operator < (const Course & m1, const Course & m2);
friend bool operator == (const Course & m1, const Course &m2);
string title; // Name of Course
dayOfWeek day; // Day of Course
unsigned int start_time; // Course start time in HHMM format
unsigned int finish_time; // Course finish time in HHMM format
friend void mySwap(Course & m1, Course &m2);
char getDay() const;
};

// Helper operator for output
ostream &operator << (ostream &os, const Course & m);
istream &operator >>(istream &in, Course &m);