#include <stdlib.h>
#include "StudentList.h"

typedef struct StudentList {
    linkedlist_t adaptee;
} StudentList;

StudentList_t createStudentList() {

   StudentList_t new_studentlist = calloc(sizeof(StudentList), 1);

   if(NULL == new_studentlist) {
       return NULL;
   }

   new_studentlist->adaptee = create();

   return new_studentlist;
}

LinkedListReturnCode addStudent(StudentList_t self, Student_t student){
    return push(self->adaptee, student);
}

LinkedListReturnCode getStudent(StudentList_t self, Student_t student){
    return containsItem(self->adaptee, student);
}

LinkedListReturnCode removeStudent(StudentList_t self, Student_t student){
    return removeItem(self->adaptee, student);
}

void*  getStudentByIndex(StudentList_t self, int index){
    return peekItemByIndex(self->adaptee, index);
}

uint16_t noOfStudents(StudentList_t self){
    return length(self->adaptee);
}

