#include "Student.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct Student {
    char* firstName;
    char* lastName;
    int studentId;
    char* nationality;
} Student;

Student_t createStudent(char* firstName, char* lastName, int studentId, char* nationality){
    Student_t new_student = calloc(sizeof(Student), 1);
    //we use collac to make sure that the memory is clean 
    if(NULL == new_student){
        return NULL;
    }
    new_student -> firstName = firstName;
    new_student -> lastName = lastName;
    new_student -> studentId = studentId;
    new_student -> nationality = nationality;
    return new_student;
}

void printInfo(Student_t self){
    printf("Student: {FirstName: %s, LastName: %s, StudentId: %i, Nationality: %s}\n", self->firstName, self->lastName, self->studentId, self->nationality);
}
