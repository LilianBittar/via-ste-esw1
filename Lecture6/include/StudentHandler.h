#pragma once
#include "Student.h"

typedef struct StudentHandler* StudentHandler_t;

StudentHandler_t createStudentHandler();
void printStudentInfo(Student_t student);
void printAllStudentInfo(StudentHandler_t self);
Student_t searchStudentById(StudentHandler_t self, int studentId);
Student_t seaarchStudentByLastName(StudentHandler_t self, char* lastName);
void addStudentToHandler(StudentHandler_t self, Student_t student);
