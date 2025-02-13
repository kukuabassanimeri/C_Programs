#include <stdio.h>


//*Function prototype
//*A function prototype is simply the declaration of a function that specifies function's name, parameters and return type. It doesn't contain function body. It gives information to the compiler that the function may later be used in the program.


//*Function definition - contains the block of code to perform a specific task. 

//*Passing arguments to a function - The actual values passed during the function call. 

//*Write a function to check if a given number is prime or not.
//*Function prototype & definition
int isPrime(int number) 
{
    if (number <= 2) {
        return 0;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
};

//*Write a function to check the days of the week using switch statement
//*Function prototype
int getDaysOfWeek(int);

//*Recursive function to add range of numbers
//*Function prototype
int sumNums(int);

//*Recursive function to perform factorial of number
//*Function prototype
int factorial(int);
int main() 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    //* Call the function
    printf("%d\n", isPrime(num));

    //*THE SWITCH STATEMENT - use to execute one code block among many alternatives
    //*Declare variable
    int d;
    printf("Enter a day of the week (1-7): ");
    scanf("%d", &d);

    //*Call the function
    getDaysOfWeek(d);

    //*C goto statement - use to transfer control of program to the specified label. 
    //* The label is an identifier. When the goto statement is encountered, the control of the program jumps to the label and starts executing. 

    //* Program to calculate the sum and average of positive numbers
    //* If the user enters a negative number, the sum and average are displayed.

    /*
    const int maxInput = 100;
    int i;
    double number, average, sum = 0.0;
 
    for (i = 1; i <= maxInput; ++i) {
       printf("%d\n, Enter a number: ", i);
       scanf("%lf\n", &number);
       
       //* go to jump if the user enters a negative number
       if (number < 0.0) {
          goto jump;
       }
       sum += number;
    }

    jump:
    average = sum / (i - 1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    */

    //*Recursion - function that calls itself
    int sumRange = sumNums(10);
    printf("Sum of numbers from 1 to 10 = %d\n", sumRange);

    //*Factorial calculation using recursion
    int fact;
    printf("Enter a number to find factorial: ");
    scanf("%d", &fact);

    //*Functiona calls
    int facto = factorial(fact);
    printf("Factorial of %d is: %d\n", fact, facto);

    return 0;

}


//*Function definition
int getDaysOfWeek(int day){
    switch(day){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default:
            printf("Invalid day");
    }
 }


 //*Function definition
 int sumNums(int num){
    if(num <= 0){
        return 0;
    }else{
        return num + sumNums(num - 1);
    }
 }

 //*This is how th recursion works
/*
*10 + sum(9)
*10 + ( 9 + sum(8) )
*10 + ( 9 + ( 8 + sum(7) ) )
...
*10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
*10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0
*/

//*Function definition
 int factorial(int num){
    if(num == 0 || num == 1){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
 }