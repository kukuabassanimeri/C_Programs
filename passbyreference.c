#include<stdio.h>
#include<math.h>

//*Function prototype
int computeSum(int x, int y){
    int sum;
    sum = x + y;
    return sum;
}

//*Main body
int main(){
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);

    printf("Enter the second number: ");
    scanf("%d",&num2);

    //*Function call
    int Add = computeSum(num1, num2);

    //*Print the output
    printf("The sum of %d and %d is: %d \n", num1, num2, Add);

    //*The continue statement - It skips the current iteration and continues with the next iteration.
    int i;
    double numb, solution = 0.0;

    //*LOOP THROUGH
    for(i = 0; i <= 10; i++) {
        printf("Enter n%d: ", i);
        scanf("%lf",&numb);

        //*If enters negative number continue
        if(numb < 0.0){
            continue;
        }

        //*Calculate the sum of squares
        solution += numb;
    }
    //*Print the output
    printf("Sum is: %.2lf \n", solution);

    return 0;
}

//*USING POINTERS
#include<stdio.h>

//*Function prototype
int computeNumbs(int*, int*);

/*
int main(){
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d",&number1);

    printf("Enter the second number: ");
    scanf("%d",&number2);

    //*Function call
    int Add = computeNumbs(&number1, &number2);

    return 0;
}

//*Function definition

int computeNumbs(int* num1, int* num2){
    int sum;
    sum = *num1 + *num2;
    return sum;
}
*/
