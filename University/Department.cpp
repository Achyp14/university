//
//  Department.cpp
//  University
//
//  Created by Andrew Chypurko on 4/10/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//
#pragma once
#include "Department.hpp"
#include <iostream>
using namespace std;

class Department
{
    string name;
    
public:
    
    Department(string _name)
    {
        cout<< "Create department" << "\n";
        name = _name;
    }
    
    string getName() const
    {
        return name;
    }
    
    ~Department()
    {
        cout<< "Delete department" << "\n";
        name = " ";
    }
};
