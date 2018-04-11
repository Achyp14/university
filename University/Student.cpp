//
//  Student.cpp
//  University
//
//  Created by Andrew Chypurko on 4/10/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//
#pragma once
#include "Student.hpp"
#include <iostream>
using namespace std;

class Student
{
    string name;
    
public:
    
    Student(string _name)
    {
        cout<< "Create student" << "\n";
        name = _name;
    }
    
    string getStudentName() const
    {
        return name;
    }
    
    ~Student()
    {
        cout<< "Delete student" << "\n";
        name = "";
    };
};
