/*
*C is one of the foundational programming languages used in the development of compilers, 
*operating systems, and embedded systems where speed and efficiency matter.
*/

/*
*Compiling C programs on cl
*gcc -c filename.c
*gcc -o variablename filename.o
*./variablename.exe

*/

/*
*C program skeleton

*#include<stdio.h>
*int main()
*{
    *Your code goes here
    *return 0; - exit status
*}
*/

/*
*String formating in C
*%d or %i - integer
*%f - floating point
*%c - character
*%s - string
*%b - boolean values
*%lf - double values
*%Lf - long double
*%u - unsigned int
*%p - pointer
*%lu - unsigned long int

*/

/*
*C OPERATOR
*Comma Operators - used to link relative expressions together

*The sizeof operator - used to determine the size of data. 
*/

/*
*INPUT OUTPUTS
*printf - used to print to the output
*scanf - used to read input from the user
*/

//*INPUT OUTPUT

#include<stdio.h>

//*WRITE A FUNCTION TO FIND SMALLEST OF TWO NUMBERS
//*FUNCTION PROTOTYPE
int smallestNum(int, int);

//*Write a function to determine if a student has passed or failed based on their score.
//*FUNCTION PROTOTYPE & DEFINITION
double passOrFail(double marks){
    if(marks >= 50){
        printf("Pass\n");
    }else{
        printf("Fail\n");
    }
}

//*Write a function to calculate the factorial of a number.
//*FUNCTION PROTOTYPE & DEFINITION
unsigned long long factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    } else{
        return n * factorial(n-1);
    }
}

//*Write a function to count the number of digits in a given number.
//*Function PROTOTYPE
int countDigits(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num); //*&num - gets the address of num and the value entered by the user is stored in that address. 
    printf("The number you entered is: %d \n", num);

    //*Taking multiple inputs from the user
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);
    int sum = num1 + num2; 
    printf("The sum of %d and %d is: %d \n", num1, num2, sum);

    //*Print the sizeof data
    printf("Size of int: %lu bytes\n", sizeof(num));

    //*Declare variables
    int n1, n2;

    //*Ask for user input
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);

    //*Call the function
    int smallNum = smallestNum(n1, n2);

    //*Print the smallest number
    printf("The smallest number between %d and %d is: %d \n", n1, n2, smallNum);

    //*Declare variable
    double score;

    //*Ask for user input
    printf("Enter your score: ");
    scanf("%lf",&score);

    //*Call the function
    passOrFail(score);

    //*Declare variable
    int fact;

    //*Ask for user input
    printf("Enter a number: ");
    scanf("%d",&fact);

    //*Call the function
    unsigned long long factorialResult = factorial(fact);
    
    //*Print the factorial
    printf("The factorial of %d is: %llu \n", fact, factorialResult);

    //*Declare variable
    int numDigits = 12345;

    //*THE BREAK STATEMENT - It terminates the the loop immediately it encounters it.
    int i;
    double numb, solution = 0.0;

    //*LOOP THROUGH
    for(i = 0; i <= 10; i++) {
        printf("Enter n%d\n: ", i);
        scanf("%lf",&numb);

        //*If enters negative number break
        if(numb < 0.0){
            break;
        }

        //*Calculate the sum of squares
        solution += numb;
    }
    //*Print the output
    printf("Sum of %lf values is: %.2lf \n", numb, solution);

    return 0;
}

//*Function definition
int smallestNum(int num1, int num2){
    //*Validate the numbers
    if(num1 < num2){
        return num1;
    }
    else{
        return num2;
    }
}