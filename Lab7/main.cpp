#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <fstream>
#include <string>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <set>
#include "Course.hpp"

using namespace std;


bool checkConflict(Course c1, Course c2)
{
    if( c1 == c2)
    {
        return true;
    } else if()
}


/*
 * print schedule - outputs course schedule to the screen
 * @param - add any new parameters you need
 */
void printSchedule()
{
    //TODO implement your print using the copy algorithm, 2 iterators, and an ostream_iterator
}

bool sortDays(Course i, Course j)
{
    return (i<j);
}

int main () {

    vector<Course> course;
    vector<Course>::iterator it;
    string title;
    char day;
    unsigned int start;
    unsigned int end;


    ifstream fin;
    fin.open("../courses.txt");


    if(!fin){
        cerr << "cannot open file" << endl;
        exit(1);
    }

    while(fin >> title >> day >> start >> end)
    {
        Course c(title, static_cast<Course::dayOfWeek>(day), start, end);
        course.push_back(c);
    }

    sort(course.begin(),course.end(),sortDays);

    for(it = course.begin(); it!= course.end(); it++){
        cout<<*it;
    }

    //TODO read from courses.txt
    //TODO store data in an STL container
    //TODO sort your STL container with the sort algorithm
    //TODO implement code to determine schedule conflicts
    //TODO print out schedule conflicts
    //TODO print out schedule
    cout << "Find the TODOs in the code and implement them." << endl;
    cout << "Add/modify any functions/code you need to complete your task." << endl;
    return 0;
}