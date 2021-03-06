#include "StudentHandler.h"
#include "StudentList.h"

typedef struct StudentHandler
{
    StudentList_t studentList;
}StudentHandler;

StudentHandler_t createStudentHandler(){
    StudentHandler_t new_studentHandler = calloc(sizeof(StudentHandler), 1);
    //we use collac to make sure that the memory is clean 
    if(NULL == new_studentHandler){
        return NULL;
    }
    
    new_studentHandler->studentList = createStudentList();
    return new_studentHandler;
}


void printStudentInfo(Student_t student)
{
    printInfo(student);
}


void printAllStudentInfo(StudentHandler_t self){
    for (int i = 0; i < noOfStudents; i++){
        printInfo(getStudentByIndex(self->studentList, i));
    }
}

Student_t searchStudentById(StudentHandler_t self, int studentId){
    Student_t tmp;
    for (int i = 0; i < noOfStudents(self->studentList); i++){
        tmp = getStudentByIndex(self->studentList, i);
        if (student_getStudentId(tmp) == studentId){
           return tmp;
        }
    }
}
Student_t seaarchStudentByLastName(StudentHandler_t self, char* lastName){
    Student_t tmp;
    for (int i = 0; i < noOfStudents(self->studentList); i++){
        tmp = getStudentByIndex(self->studentList, i);
        if (strcmp(student_getLastName(tmp),lastName) == 0){
            return tmp;
        }
    }
}

void addStudentToHandler(StudentHandler_t self, Student_t student){
    return (self->studentList, student);
}

