#include <stdio.h>
#include "myStr.h"

int main(){

    char* str1 = "Sally";
    char* str2 = "Reshee";

    printf("my_strlen: %i\n", my_strlen(str1));
    printf("my_strcmp: %i\n", my_strcmp(str1, str2));
    my_strcpy(str2,str1);
    printf("my_strcpy: %s\n", str2);
    return 0;
}