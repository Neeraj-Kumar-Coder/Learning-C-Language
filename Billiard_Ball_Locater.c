/*
    Author : Neeraj Kumar
    Purpose : Practical Project
    Date : 06/01/2021
    Time : 10:05 PM
*/
// Billiard Ball Position Calculator
#include <stdio.h>

void swap(int *a, int *b);

int main(void)
{
    auto int size, x_position, y_position, collision_count, number_of_trials;
    printf("Enter the number of trials you want to take: ");
    scanf("%d", &number_of_trials);
    while (number_of_trials--)
    {
        printf("Enter the size of the Billiard Table: ");
        scanf("%d", &size);
        printf("Enter the X coordinate of the ball: ");
        scanf("%d", &x_position);
        printf("Enter the Y coordinate of the ball: ");
        scanf("%d", &y_position);
        printf("Enter the number of collisions you want to consider: ");
        scanf("%d", &collision_count);

        if (x_position == y_position)
        {
            printf("The final position is = (%d, %d)\n", size, size);
            return 0;
        }
        else
        {
            int i = 1;
            int temp = size - ((x_position > y_position) ? x_position : y_position);
            x_position += temp;
            y_position += temp;
            while (++i <= collision_count)
            {
                if (!(i % 2))
                {
                    swap(&x_position, &y_position);
                }
                else
                {
                    x_position = size - x_position;
                    y_position = size - y_position;
                    swap(&x_position, &y_position);
                }
            }
        }
        printf("The final coordinate of the ball is = (%d, %d)\n", x_position, y_position);
    }
    return 0;
}

void swap(int *a, int *b)
{
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}