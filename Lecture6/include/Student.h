#pragma once


typedef struct Student* Student_t;

Student_t* createStudent(char* firstName, char* lastName, int studentId, char* nationality);
void printInfo(Student_t self);


//we need a hetter and setter so we can access through the interface by calling thoes method to get to the actual implementation "student",
// because to get the student by Id we need to get to the actual class and the handler does not know about the implementation of the class and therefor about its instance variabel

char* student_getFirstName(Student_t self);
char* student_getLastName(Student_t self);
int student_getStudentId(Student_t self);
char* student_getNationality(Student_t self);

void student_setFirstName(Student_t self, char* firstame);
void student_setLastName(Student_t self, char* lastName);
void student_setStudentId(Student_t self, int studentId);
void student_setNationality(Student_t self, char* nationality);