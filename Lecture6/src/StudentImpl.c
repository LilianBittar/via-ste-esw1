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
    //this function is to copy the value so the first arguemnt is to cpopy to and the second one is from where and lastly is the size -1 for not havinf '/O'
    strncpy(new_student -> firstName, firstName, sizeof(new_student->firstName) -1);
    strncpy(new_student -> lastName, lastName, sizeof(new_student->lastName) -1);
    new_student -> studentId = studentId;
    strncp(new_student -> nationality, nationality, sizeof(new_student->nationality) -1);
    return new_student;
}

char* student_getFirstName(Student_t self){
    if(NULL == self) return NULL;
    return self->firstName;
}
char* student_getLastName(Student_t self){
    if(NULL == self) return NULL;
    return self->lastName;
}
int student_getStudentId(Student_t self){
    if(NULL == self) return -1;
    return self->studentId;
}
char* student_getNationality(Student_t self){
    if(NULL == self) return NULL;
    return self->nationality;
}

void student_setFirstName(Student_t self, char* firstName){
   if(NULL == self) return NULL;
   strncpy(self->firstName, firstName, sizeof(self->firstName) -1);
}
void student_setLastName(Student_t self, char* lastName){
   if(NULL == self) return NULL;
   strncpy(self->lastName, lastName, sizeof(self->lastName) -1);
}
void student_setStudentId(Student_t self, int studentId){
   if(NULL == self) return -1;
   self->studentId = studentId;
}
void student_setNationality(Student_t self, char* nationality){
   if(NULL == self) return NULL;
   strncpy(self->nationality, nationality, sizeof(self->nationality) -1);
}

void printInfo(Student_t self){
    printf("Student: {FirstName: %s, LastName: %s, StudentId: %i, Nationality: %s}\n", self->firstName, self->lastName, self->studentId, self->nationality);
}
