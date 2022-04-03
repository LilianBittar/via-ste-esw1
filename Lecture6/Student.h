#pragma once


typedef struct Student* Student_t;

Student_t* createStudent(char* firstName, char* lastName, int studentId, char* nationality);
void printInfo(Student_t self);
