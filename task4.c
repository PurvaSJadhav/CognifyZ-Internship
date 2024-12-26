/* Task: Palindrome Checker
Write a program that checks whether a given word or phrase is a palindrome. 
A palindrome is a word or phrase that reads the same forwards and backwards. 
Prompt the user to input a word or phrase and display whether it is a
palindrome or not.*/

#include <stdio.h>
#include <string.h>

int main() 
{
    char input_string[100];
    int length, check = 0;

    printf("Enter word or phrase : ");
    scanf("%s", input_string);

    length = strlen(input_string);

    for (int z = 0; z < length / 2; z++) 
    {
        if (input_string[z] != input_string[length - z - 1]) 
        {
            check = 1;
            break;
        }
    }

    if(check) 
        printf("Given word or phrase is not a palindrome!");
     
    else 
        printf("Given word or phrase is a palindrome");

    return 0;
}