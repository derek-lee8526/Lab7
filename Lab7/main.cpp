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


void checkConflict(vector<Course> c)
{
    for(auto it1 = c.begin(); it1 != c.end(); it1++)
    {
        for(auto it2 = it1 + 1; it2 != c.end(); it2++)
        {
            if((*it1).day == (*it2).day)
            {
                if(!((*it2).finish_time < (*it1).start_time) && !((*it1).finish_time < (*it2).start_time))
                {
                    cout<<"Conflict:"<<endl;
                    cout<<*it1;
                    cout<<*it2 <<endl;
                }
            }
        }
    }
}


/*
 * print schedule - outputs course schedule to the screen
 * @param - add any new parameters you need
 */
void printSchedule(vector<Course> c)
{
    std::ostream_iterator<Course> out (std::cout,"");
    copy(c.begin(),c.end(),out);
}

bool sortDays(Course i, Course j)
{
    return (i < j);
}

int main () {

    vector<Course> course;
    vector<Course>::iterator it;



    ifstream fin;
    fin.open("../courses.txt");


    if(!fin){
        cerr << "cannot open file" << endl;
        exit(1);
    } else{
        string title;
        Course::dayOfWeek day;
        unsigned int start;
        unsigned int end;

        while(fin >> title >> day >> start >> end)
        {
            Course c(title,day,start,end);
            course.push_back(c);
        }

    }
    sort(course.begin(),course.end(),sortDays);



    checkConflict(course);
    printSchedule(course);
    //TODO read from courses.txt
    //TODO store data in an STL container
    //TODO sort your STL container with the sort algorithm
    //TODO implement code to determine schedule conflicts
    //TODO print out schedule conflicts
    //TODO print out schedule

    return 0;
}