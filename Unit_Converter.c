/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 15/09/2020
    Time : 12:18 PM
*/
#include <stdio.h>
int main()
{
    char a;
    float b;
    printf("This is a unit converter program\n");
label: //When the command goto label; is used, the program control comes here.
    printf("Enter the corresponding digit to convert\n1. Inch to cms\n2. Pound to Kgs\n3. Gallon to litre\n4. Miles to Kms\n(press q to quit): ");
    scanf(" %c", &a); //This space is used in " %c" because when we use space, it do not count the entre or any other digit as characters. This is important to use in characters to make your program work correctly
    if (a == '1')     //The single inverted commas ('') are used here to tell the program that number 1 is used as a character here. Otherwise program will consider it as an integer and the command will not execute properly...........(1)
    {
        printf("How many inches you want to convert to centimeters\?: ");
        scanf("%f", &b);
        printf("%f inches is %f cms\n\n", b, (b * 2.54));
        goto label; //The goto statement used here is used to create a loop. If we donot use it, then the program will quit after executing this operation.........(2)
    }
    else if (a == '2') //Same as in explanation (1)
    {
        printf("How many pounds you want to convert to kilograms\?: ");
        scanf("%f", &b);
        printf("%f lb is %f kg\n\n", b, (b * 0.454));
        goto label; //Same as in explanation (2)
    }
    else if (a == '3') //Same as in explanation (1)
    {
        printf("How many gallon you want to convert to litre\?: ");
        scanf("%f", &b);
        printf("%f gallon is %f L\n\n", b, (b * 3.785));
        goto label; //Same as in explanation (2)
    }
    else if (a == '4') //Same as in explanation (1)
    {
        printf("How many miles you want to convert to kilometres\?: ");
        scanf("%f", &b);
        printf("%f miles is %f km\n\n", b, (b * 1.609));
        goto label; //Same as in explanation (2)
    }
    else if (a == 'q')
    {
        goto end; //goto end statement............(3)
    }
    else
    {
        printf("Enter a valid input\n\n");
        goto label; //Same as in explanation (2)
    }
end: //When the command goto end; is used the program control comes here. As in (3)
    return 0;
}