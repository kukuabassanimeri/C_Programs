#include <stdio.h>

//*Function Prototype
void numSquare(int*);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //*Function Call
    numSquare(&num);

    //*Display Output
    printf("The square of %d is: %d \n", num);

    return 0;
}

//*Function Definition

void numSquare(int* num){
    *num*=*num; //* *num = *num * *num
}