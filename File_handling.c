//*In C, you can create, open, read, and write to files by declaring a pointer of type FILE, and use the fopen() function

//*SYNTAX: 
//*FILE *fptr
//* *fptr = fopen(filename, mode);

//*The mode can be w - write, a - append, r - read, w  can also be used to create new files that does not exist. 

//* FILE is basically a data type, and we need to create a pointer variable to work with it (fptr).

//*OPEN A FILE / CREATE A FILE
#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("example.txt", "w"); //*create a new file

    //* WRITE INTO THE FILE - use fprintf and add the pointer variable
    fprintf(fptr, "Writing into file in C programming.\n");

    //* If you write to a file that already exists, the old content will be deleted. 

    //* APPEND CONTENT TO THE FILE - use a to add content to an existing file
    fprintf(fptr, "This line has been added to the existing content in the file.");

    //* READ FROM THE FILE - use a to read the contents from the file.
    fptr = fopen("example.txt", "r");

    //* Store the contents of the file in a string
    char myContent[100];

    //* Used fgets() to read the contents of the file.
    fgets(myContent, 100, fptr);

    //* fget() takes 3 arguments, myContent - store the contents of the file, 100 - maximum size of content to read, fptr - pointer to read the file. 

    //*PRINT THE FILE CONTENT
    printf("%s", myContent);

    //* READ THE CONTENT AND PRINT IT 
    while(fgets(myContent, 100, fptr))
    {
        printf("%s", myContent);
    }

    fclose(fptr); //*close the file
}