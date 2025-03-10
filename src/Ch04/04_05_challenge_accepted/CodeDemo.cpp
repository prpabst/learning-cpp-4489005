// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    float total_creds;
    float total_points;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here

    if(id > 2 || id < 1)  return -1;

    Student *student = NULL;
    for(int ii = 0; ii < students.size(); ii++) {
        student = &students[ii];
        if(student->get_id() == id) break;
    }

    if(student == NULL) return -1;

    Grade *grade;
    Course *course;
    char _grade;

    total_creds = 0.0f;
    total_points = 0.0f;

    for( int ii = 0; ii < grades.size(); ii++ ) {
        grade = &grades[ii];
        if(grade->get_student_id() != student->get_id())
            continue;

        for(int jj = 0; jj < courses.size(); jj++) {
            course = &courses[jj];
            if(course->get_id() != grade->get_course_id()) 
                continue;
            
            total_creds += course->get_credits();
            _grade = grade->get_grade();
            total_points += (4.0f + (float)('A' - _grade)) * course->get_credits();
        }
    }

    GPA = total_points / total_creds;


    std::string student_str;
    student_str = students[0].get_name(); // Change this to the selected student's name

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
