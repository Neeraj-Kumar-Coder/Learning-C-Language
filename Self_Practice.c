// // An example of passing function as a function argument
// #include <stdio.h>

// void funcPasser(void func(), int i);
// void functio(int x);

// int main(void)
// {
//     funcPasser(functio, 5);
//     return 0;
// }

// void funcPasser(void (*func)(), int i)
// {
//     return (*func)(i);
// }

// void functio(int x)
// {
//     printf("The square of the input is = %d\n", x * x);
// }

// // FUNCTION INSIDE A FUNCTION
// #include <stdio.h>

// void sample_func();

// int main(void)
// {
//     void func()
//     {
//         printf("The sample text is this\n");
//     }
//     func();
//     sample_func();
//     return 0;
// }

// void sample_func()
// {
//     void start_func()
//     {
//         printf("I am in start_func\n");
//     }
//     start_func();
// }
#include <stdio.h>

int is_prime(int number);

int main(void)
{
    int value;
    printf("Enter the number you want to check if it is prime or not: ");
    scanf("%d", &value);
    is_prime(value) ? printf("%d is a prime number\n", value) : printf("%d is not a prime number\n", value);
    return 0;
}

int is_prime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (!(number % i))
            return 0;
    }
    return 1;
}