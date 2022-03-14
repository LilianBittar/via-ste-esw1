#include <stdio.h>

int power(int x, int y);
void multiSwap(int* x, int* y, int* z);

int main()
{
    printf("%i\n", power(2, 3));

    int x = 2;
    int y = 3;
    int z = 4;
    //passing by a reference 
    multiSwap(&x, &y, &z);
    printf("%i\n", x);
    printf("%i\n", y);
    printf("%i\n", z);
    return 0;
}

// implement the multiswap 
void multiSwap(int* x, int* y, int* z){
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;

}

//implement power
int power(int x, int y){
    int solution = 1;
    for (int i = 0; i < y; i++){
        solution *= x;
    }
    return solution;
}


