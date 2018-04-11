//
//  main.cpp
//  University
//
//  Created by Andrew Chypurko on 4/10/18.
//  Copyright © 2018 Andrew Chypurko. All rights reserved.
//

#include <iostream>
#include "Department.cpp"
#include "Student.cpp"
#include "Course.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
    int i;
    
    cout<<"\n" << "Example of Association class..." << "\n";
    
    cout<< "We have got 4 students... " << "\n";
    Student *studentNames[4] = {new Student("Roman"), new Student("Julia"), new Student("Orest"), new Student("Oksana")};
    cout<<"\n";
    
    cout<< "We have got 2 Departments..." << "\n";
    Department *departNames[2] = {new Department("Mathemetics"), new Department("Art")} ;
    
    cout<< "\n";
    
    Course *course1 = new Course("DataStructure",studentNames[0], departNames[1]);
    Course *course2 = new Course("Maths", studentNames[3], departNames[0]);
    Course *course3 = new Course("Design", studentNames[2], departNames[0]);
    Course *course4 = new Course("Painting", studentNames[1], departNames[1]);
    
    Course *courses[4] = {course1, course2, course3, course4};
    cout<< "\n";
    
    cout<< "Finding a Student using Course and Department..." << "\n";
    
    for (i = 0; i < 4; i++) {
        cout<< courses[i] -> getStdName() + " " + courses[i] -> getDeptName() + " " + courses[i] -> getCourseName() << "\n";
    }
        
    cout<< "\n";
    cout<< "Deletion of objects..." << "\n";
    
    for(i = 0; i < 4; i++)
    {
        delete studentNames[i];
    }
    
    cout<< "\n";
    
    for(i = 0; i < 2; i++)
    {
        delete departNames[i];
    }
    
    cout<< "\n";
    return 0;
}
