#pragma once
#include "Student.h"
#include "LinkedList.h"

typedef struct StudentList* StudentList_t;

StudentList_t createStudentList();
LinkedListReturnCode addStudent(StudentList_t self, Student_t student);
LinkedListReturnCode getStudent(StudentList_t self, Student_t student);
LinkedListReturnCode removeStudent(StudentList_t self, Student_t student);
void*  getStudentByIndex(StudentList_t self, int index);
uint16_t noOfStudents(StudentList_t self);
