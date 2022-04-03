#include <stdio.h>
#include "myStr.h"

int my_strlen(const char* str){
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length ++;
    }
    return length;
}

int my_strcmp(const char* str1, const char* str2){
    if (my_strlen(str1) != my_strlen(str2))
    {
        //if it does not match return 1 and if it does return 0 
        return 1;
    }
    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] != str2[i]){
            return 1;
        }
    }
    return 0;

}

char* my_strcpy(char* dest, const char* src){
    for(int i = 0; src[i] != '\0'; i++){
        dest[i] = src[i];
    }
    return dest;
}

char* my_strdup(const char* str){
    //here we dublicate which means we create a new memory location for the new string by using malloc
    char* c = malloc(sizeof(char), my_strlen(str));
    my_strcpy(c, str);
    return c;
}


