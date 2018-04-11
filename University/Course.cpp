//
//  Course.cpp
//  University
//
//  Created by Andrew Chypurko on 4/10/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include "Course.hpp"
#include "Student.cpp"
#include "Department.cpp"
#include <iostream>
using namespace std;

class Course
{
    Student *student;
    Department *department;
    string courseName;
    
public:
    
    Course(string _courseName, Student *_student, Department *_department)
    {
        student = _student;
        department = _department;
        courseName = _courseName;
    };
    
    ~Course()
    {
        cout<< "Delete course" << "\n";
        courseName = " ";
    };
    
    string getStdName() const {
        return(student -> getStudentName());
        
    };
    string getDeptName() const {
        return(department -> getName());
        
    };
    string getCourseName() const {
        return courseName;
        
    };
};
