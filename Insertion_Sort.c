/*
*Name : Neeraj Kumar
*Roll Number : 2020UCA1809
*Work Type : Assignment (Computer Programming)
*/
// This program is of the insertion sort algorithm to sort array in ascending order
#include <stdio.h>

void insertionSort(int arr[], int size); // Insertion sort algorithm function

int main(void)
{
    int arr[] = {2, 6, 51, 23, 15, 10, 90, 784, 258, 621, 91, 951, 9, 4, 49, 4949, 49, 4, 9, 963}; // Sample array
    printf("The original array is : ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }

    insertionSort(arr, 20); // Calling to the insertion sort algorithm function

    printf("\nThe sorted array is : ");
    for (int i = 0; i < 20; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

void insertionSort(int arr[], int size) // Insertion sort algorithm (used as a function)
{
    int temp, i_temp;
    for (int i = 1; i < size; i++)
    {
        i_temp = i;
        temp = arr[i];
        while (i_temp--)
        {
            if (temp < arr[i_temp])
            {
                arr[i_temp + 1] = arr[i_temp];
            }
            else
            {
                i_temp++;
                break;
            }
        }
        arr[i_temp] = temp;
    }
}