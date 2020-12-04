/*
    AUTHOR : Neeraj Kumar
    PURPOSE : Just for fun program
    DATE : 10/08/2020
    TIME : 10:02 PM
*/
#include <stdio.h>
#include <stdlib.h>

void circleCount(int *ptr, int a, int b);
int termTeller(int *arr, int a);

int main(int argc, char const *argv[])
{
    int a, b, c, temp;
    int *ptr;
    int *cpy;
    printf("\n#################   LAST MEMBER STANDING    #################\n\n");
    printf("Enter the number of members in the round tabel meeting : ");
    scanf("%d", &a); //Input of number of members

    ptr = (int *)malloc(a * sizeof(int)); //Main array for storing alive members
    cpy = (int *)malloc(a * sizeof(int)); //Array to copy the death+alive member array

    for (int i = 0; i < a; i++)
    {
        ptr[i] = i + 1;
    }

    printf("Enter the member holding the knife in first case : ");
    scanf("%d", &b); //Input of the person having knife in the starting

    if (b > a || b <= 0)
    {
        printf("\nPlease enter a valid input !!\n");
        goto end;
    }

    while (a != 1) //Looping until the main array contains only one surviver
    {
        c = 0;
        for (int i = 0; i < a / 2; i++)
        {
            circleCount(ptr, a, (b + (2 * i) + 1)); //Killing the members alternatively
        }

        cpy = (int *)realloc(cpy, a * sizeof(int));

        for (int j = 0; j < a; j++)
        {
            cpy[j] = ptr[j]; //coping the death+alive member array
        }

        temp = a;

        if (a % 2 == 0)
        {
            ptr = (int *)realloc(ptr, a / 2 * sizeof(int)); //Changing the size of main array DYNAMICALLY
            a = a / 2;
        }
        else
        {
            ptr = (int *)realloc(ptr, (a + 1) / 2 * sizeof(int)); //Changing the size of main array DYNAMICALLY
            a = (a + 1) / 2;
        }

        for (int k = 0; k < temp; k++) //This loop parses the main array to hold only alive members
        {
            if (cpy[k] != 0)
            {
                ptr[c] = cpy[k];
                c++;
                continue;
            }

            else
            {
                continue;
            }
        }

        b = termTeller(ptr, cpy[b - 1]) + 1; //The person having the knife after one iteration ('b' is alloted after the next 'if' statement)

        if (a != temp / 2)
        {
            if (b == 1)
            {
                b = a;
            }
            else
            {
                b = b - 1;
            }
        }
    }

    printf("The member who survived is : %d", ptr[0]); //Declaring the LAST MEMBER WHO SURVIVED

end:

    free(ptr); //Freeing both the allocated memory from heap
    free(cpy); //Freeing both the allocated memory from heap
    return 0;
}

void circleCount(int *ptr, int a, int b)
{
    for (int i = 0; i < b; i++)
    {
        if (b <= a * i)
        {
            ptr[b + a - 1 - a * i] = 0;

            break;
        }
        else
        {
            continue;
        }
    }
}

int termTeller(int *arr, int a)
{
    int b = 0, i = 0;
    while (arr[i] != a)
    {
        b++;
        i++;
    }
    return b;
}