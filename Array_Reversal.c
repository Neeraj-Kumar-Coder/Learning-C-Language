/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 19/09/2020
    Time : 11:22 AM
*/
#include <stdio.h>
void arrayreversal(int *ptr, int b);
int main()
{
    int a;
    printf("This is an Array Reversal program\n");
    printf("Enter the size of the array you want to reverse: ");
    scanf("%d", &a);
    int array[a];
    for (int i = 0; i <= (a - 1); i++) //For taking input from the user
    {
        printf("Enter the %d element of the array: ", i);
        scanf("%d", (array + i));
    }

    printf("The array you have entered is :\n");
    for (int i = 0; i <= (a - 1); i++) //For printing the values as taken from the user
    {
        printf("%d\t", array[i]);
    }
    printf("\n");
    arrayreversal(array, a); //We have successfully passed the size of the array entered by the user to the reversal function
    return 0;
}

void arrayreversal(int *ptr, int b) //"int b" is used here to pass the size of the "array" to this reversal function. We have taken input in the form of address to swap the values of the arry easily
{
    int reversearray[b];
    for (int j = (b - 1); j >= 0; j--) //For storing the values in this new array (in reversed manner)
    {
        reversearray[j] = *(ptr + (b - 1 - j));
    }
    printf("This is the reversed array of what you have entered is :\n");
    for (int k = 0; k <= (b - 1); k++) //For printing the values of the new array
    {
        printf("%d\t", reversearray[k]);
    }
    printf("\n");
}