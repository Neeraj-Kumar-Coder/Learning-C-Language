#ifndef MyFunction
#define MyFunction
#include <math.h>
#include <time.h>
enum permissions
{
    NO,
    YES
};

// List of functions in this file
void selfShellSortAscending(int arr[], int size);                                    // Sort the array in Ascending order
void selfShellSortDescending(int arr[], int size);                                   // Sort the array in Descending order
int circleCount(int a, int b);                                                       // It will count the position in the array in circular way 'a' is the size of array and 'b' is the counting
int termTeller(int *arr, int a);                                                     // It will tell the position of 'a' in array 'arr' (Method 1)
int matchTeller(char s1[], char s2[]);                                               // It will tell the first matching character in s1 and s2, returns -1 if no match is found
void squeeze(char s1[], char s2[]);                                                  // This funtion will remove each character in s1[] that matches any character in the string s2[]
void textart(char a);                                                                // The text art function
int getNum(int x, int v[], int n);                                                   // It will return the position of x (if present) else return -1 (Method 2, effective then Method 1)
int stringLength(char str[]);                                                        // Returns the length of the string
void expand(char string1[], char string2[]);                                         // It will expand the short hand notation like "a-z" to "abcdefghijklmnopqrstuvwxyz" in string s1 and save it to string s2 (example a-z, A-Z, 0-9, z-a, Z-A, 9-0) (NOTE: IT IS A CASE SENSITIVE FUNCTION)
void itob(int number, char string[], int base);                                      // This function will convert the integer n into the required base-b notation and save it in string s
void reverse(char s[]);                                                              // Reverses a string
void swap(int *a, int *b);                                                           // It will swap the two numbers without the use of the third variable
int largedNumberFinder(int arr[], int size);                                         // It will return the largest number in an array of integers
int smallestNumberFinder(int arr[], int size);                                       // It will return the smallest number in an array of integers
long long int factorial(long long int a);                                            // It will calculate the factorial of provided integer
long long int permutation(long long int n, long long int r);                         // It will calculate the permutation nPr
long long int combination(long long int n, long long int r);                         // It will calculate the combination nCr
float determinant(int size, float arr[][size]);                                      // It will calculate the determinant of square matrix of any size
void adjoint(int size, float original_matrix[][size], float adjoint_matrix[][size]); // It will find the adjoint of the matrix of any size
void matrix_inverse(int size, float matrix[][size], float inverse_matrix[][size]);   // It will find the inverse of the matrix of any size
void delay(int number_of_seconds);                                                   // It will create a time delay in the code
void loading(void);                                                                  // It will create a loading animation in the terminal

// Function code starts here
void selfShellSortAscending(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void selfShellSortDescending(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int circleCount(int a, int b)
{
    int i;
    for (i = 0; i < b; i++)
    {
        if (b <= a * i)
        {
            break;
        }
    }
    return (b + a - 1 - a * i);
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

int matchTeller(char s1[], char s2[])
{
    for (int i = 0; i < stringLength(s1); i++)
    {
        for (int j = 0; j < stringLength(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                return i + 1;
            }
        }
    }
    return -1;
}

void squeeze(char s1[], char s2[])
{
    int match = NO, k = 0;

    for (int i = 0; i < stringLength(s1); i++)
    {
        for (int j = 0; j < stringLength(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                match = YES;
            }
        }

        if (match == NO)
        {
            s1[k++] = s1[i];
        }
        else
        {
            match = NO;
        }
    }

    s1[k] = '\0';
}

int stringLength(char str[])
{
    int length = 0;

    while (str[length] != '\0')
    {
        ++length;
    }

    return length;
}

void textart(char a)
{
    if (a == 'a' || a == 'A')
    {
        printf("--------###----------\n-------#####---------\n------###-####-------\n-----###---####------\n----############-----\n---##############----\n---###--------###----\n---###--------###----\n---###--------###----\n---###--------###----\n\n");
    }
    else if (a == 'b' || a == 'B')
    {
        printf("--##############-----\n--################---\n--###-----------###--\n--###----------###---\n--###--------###-----\n--#############------\n--###--------###-----\n--###----------###---\n--###-----------###--\n--################---\n--##############-----\n\n");
    }
    else if (a == 'c' || a == 'C')
    {
        printf("--#################--\n--#################--\n--###----------------\n--###----------------\n--###----------------\n--###----------------\n--###----------------\n--###----------------\n--###----------------\n--#################--\n--#################--\n\n");
    }
    else if (a == 'd' || a == 'D')
    {
        printf("--##############-----\n--################---\n--###-----------###--\n--###-----------###--\n--###-----------###--\n--###-----------###--\n--###-----------###--\n--###-----------###--\n--###-----------###--\n--################---\n--##############-----\n\n");
    }
    else if (a == 'e' || a == 'E')
    {
        printf("----#############----\n----#############----\n----###--------------\n----###--------------\n----#########--------\n----#########--------\n----###--------------\n----###--------------\n----#############----\n----#############----\n\n");
    }
    else if (a == 'f' || a == 'F')
    {
        printf("----#############----\n----#############----\n----###--------------\n----###--------------\n----#########--------\n----#########--------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n\n");
    }
    else if (a == 'g' || a == 'G')
    {
        printf("------##########-----\n-----############----\n----###--------##----\n----###--------------\n----###--------------\n----###----######----\n----###----#--###----\n----###-------###----\n----#############----\n-----###########-----\n\n");
    }
    else if (a == 'h' || a == 'H')
    {
        printf("----###------###-----\n----###------###-----\n----###------###-----\n----###------###-----\n----############-----\n----############-----\n----###------###-----\n----###------###-----\n----###------###-----\n----###------###-----\n\n");
    }
    else if (a == 'i' || a == 'I')
    {
        printf("----###########------\n----###########------\n--------###----------\n--------###----------\n--------###----------\n--------###----------\n--------###----------\n--------###----------\n----###########------\n----###########------\n\n");
    }
    else if (a == 'j' || a == 'J')
    {
        printf("----###########------\n----###########------\n--------###----------\n--------###----------\n--------###----------\n--------###----------\n----##--###----------\n----##--###----------\n-----######----------\n-------####----------\n\n");
    }
    else if (a == 'k' || a == 'K')
    {
        printf("----###----###-------\n----###---###--------\n----###--###---------\n----###-###----------\n----######-----------\n----######-----------\n----###-###----------\n----###--###---------\n----###---###--------\n----###----###-------\n\n");
    }
    else if (a == 'l' || a == 'L')
    {
        printf("----###--------------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n----############-----\n----############-----\n\n");
    }
    else if (a == 'm' || a == 'M')
    {
        printf("----###------###-----\n----####----####-----\n----#####--#####-----\n----###--##--###-----\n----###------###-----\n----###------###-----\n----###------###-----\n----###------###-----\n----###------###-----\n\n");
    }
    else if (a == 'n' || a == 'N')
    {
        printf("----###-------###----\n----#####-----###----\n----###-##----###----\n----###--##---###----\n----###---##--###----\n----###----##-###----\n----###-----#####----\n----###------####----\n----###-------###----\n\n");
    }
    else if (a == 'o' || a == 'O')
    {
        printf("----#############----\n----#############----\n----###-------###----\n----###-------###----\n----###-------###----\n----###-------###----\n----###-------###----\n----###-------###----\n----#############----\n----#############----\n\n");
    }
    else if (a == 'p' || a == 'P')
    {
        printf("----##########-------\n----###-----###------\n----###------###-----\n----###------###-----\n----###----###-------\n----###--###---------\n----#####------------\n----###--------------\n----###--------------\n----###--------------\n----###--------------\n\n");
    }
    else if (a == 'q' || a == 'Q')
    {
        printf("---#############-----\n---#############-----\n---###-------###-----\n---###-------###-----\n---###-------###-----\n---###--###--###-----\n---###---###-###-##--\n---###-----#####-##--\n---#############-##--\n---###############---\n\n");
    }
    else if (a == 'r' || a == 'R')
    {
        printf("---###########-------\n---############------\n---###-------###-----\n---###-------###-----\n---###-----###-------\n---###---###---------\n---########----------\n---###---###---------\n---###----###--------\n---###-----###-------\n---###------###------\n---###-------###-----\n\n");
    }
    else if (a == 's' || a == 'S')
    {
        printf("----#############----\n----#############----\n----###-------###----\n----###--------------\n----#############----\n----#############----\n--------------###----\n--------------###----\n----###-------###----\n----#############----\n----#############----\n\n");
    }
    else if (a == 't' || a == 'T')
    {
        printf("----##############---\n----##############---\n---------###---------\n---------###---------\n---------###---------\n---------###---------\n---------###---------\n---------###---------\n---------###---------\n---------###---------\n\n");
    }
    else if (a == 'u' || a == 'U')
    {
        printf("---###----------###--\n---###----------###--\n---###----------###--\n---###----------###--\n---###----------###--\n---###----------###--\n---###----------###--\n---###----------###--\n---################--\n---################--\n\n");
    }
    else if (a == 'v' || a == 'V')
    {
        printf("---###----------###---\n---###----------###---\n---###----------###---\n---###----------###---\n---###----------###---\n---###----------###---\n----###--------###----\n-----###------###-----\n------###---###-------\n-------###-###--------\n---------###----------\n\n");
    }
    else if (a == 'w' || a == 'W')
    {
        printf("---###-----------###---\n---###-----------###---\n---###-----------###---\n---###-----------###---\n---###-----------###---\n---###----###----###---\n---###---#####---###---\n---###--###-###--###---\n---###-###---###-###---\n---######-----######---\n\n");
    }
    else if (a == 'x' || a == 'X')
    {
        printf("----###--------###----\n----###--------###----\n-----###------###-----\n------###----###------\n-------###--###-------\n--------######--------\n-------###--###-------\n------###----###------\n-----###------###-----\n----###--------###----\n----###--------###----\n\n");
    }
    else if (a == 'y' || a == 'Y')
    {
        printf("----###--------###----\n-----###------###-----\n------###----###------\n-------###--###-------\n--------######--------\n----------##----------\n----------##----------\n----------##----------\n----------##----------\n----------##----------\n----------##----------\n\n");
    }
    else if (a == 'z' || a == 'Z')
    {
        printf("---#################--\n---#################--\n---###----------###---\n--------------###-----\n------------###-------\n----------###---------\n--------###-----------\n------###-------------\n----###----------##---\n---################---\n---################---\n\n");
    }
    else if (a == ' ')
    {
        printf("\n\n");
    }
    else if (a == '0')
    {
        printf("---#########---\n---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---#########---\n\n");
    }
    else if (a == '1')
    {
        printf("------###------\n----#####------\n----#####------\n------###------\n------###------\n------###------\n------###------\n---#########---\n---#########---\n\n");
    }
    else if (a == '2')
    {
        printf("----#######----\n---##----###---\n---##----##----\n--------##-----\n-------##------\n------##-------\n-----##--------\n----##---------\n---#########---\n\n");
    }
    else if (a == '3')
    {
        printf("--##########---\n--##-----##----\n--------##-----\n-------##------\n------######---\n----------##---\n--##------##---\n--##########---\n\n");
    }
    else if (a == '4')
    {
        printf("---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---##-----##---\n---#########---\n----------##---\n----------##---\n----------##---\n\n");
    }
    else if (a == '5')
    {
        printf("---##########--\n---##----------\n---##----------\n---##----------\n---##########--\n-----------##--\n-----------##--\n---##------##--\n---##########--\n\n");
    }
    else if (a == '6')
    {
        printf("---#########---\n---##------#---\n---##----------\n---##----------\n---#########---\n---##-----##---\n---##-----##---\n---#########---\n\n");
    }
    else if (a == '7')
    {
        printf("---#########---\n----------##---\n---------##----\n--------##-----\n-------##------\n------##-------\n-----##--------\n----##---------\n---##----------\n\n");
    }
    else if (a == '8')
    {
        printf("---#########---\n---##-----##---\n---##-----##---\n---##-----##---\n---#########---\n---##-----##---\n---##-----##---\n---##-----##---\n---#########---\n\n");
    }
    else if (a == '9')
    {
        printf("---#########---\n---##-----##---\n---##-----##---\n---##-----##---\n---#########---\n----------##---\n----------##---\n----------##---\n---#########---\n\n");
    }
}

int getNum(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }

    return -1;
}

void expand(char s1[], char s2[])
{
    char c;
    int i, j;
    i = j = 0;
    while ((c = s1[i++]) != '\0')
    {
        if (s1[i] == '-' && s1[i + 1] >= c)
        {
            i++;
            while (c < s1[i])
            {
                s2[j++] = c++;
            }
        }
        else if (s1[i] == '-' && s1[i + 1] <= c)
        {
            i++;
            while (c > s1[i])
            {
                s2[j++] = c--;
            }
        }
        else
        {
            s2[j++] = c;
        }
    }
    s2[j] = '\0';
}

void itob(int n, char s[], int b)
{
    int i = 0;
    if (b >= 0 && b <= 10 && n > 0)
    {
        do
        {
            s[i++] = n % b + '0';
        } while ((n /= b) != 0);
        s[i] = '\0';
        reverse(s);
    }
    else if (b == 16 && b > 0)
    {
        do
        {
            if ((n % b) > 10)
            {
                s[i++] = (n % b) + 55;
            }
            else
            {
                s[i++] = n % b + '0';
            }

        } while ((n /= b) != 0);
        s[i] = '\0';
        reverse(s);
    }
    else
    {
        s[i++] = 'N', s[i++] = '/', s[i++] = 'A', s[i] = '\0';
    }
}

void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = stringLength(s) - 1; i < j; i++, j--)
    {
        c = s[i], s[i] = s[j], s[j] = c;
    }
}

void swap(int *a, int *b)
{
    *a = *a + *b, *b = *a - *b, *a = *a - *b;
}

int largedNumberFinder(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
    }
    return temp;
}
int smallestNumberFinder(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (temp > arr[i])
        {
            temp = arr[i];
        }
    }
    return temp;
}

long long int factorial(long long int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return a * factorial(a - 1);
    }
}

long long int permutation(long long int n, long long int r)
{
    return (factorial(n) / factorial(n - r));
}

long long int combination(long long int n, long long int r)
{
    return (factorial(n) / (factorial(n - r) * factorial(r)));
}

float determinant(int size, float arr[][size])
{
    float value_of_determinant = 0.0;
    int a, b;
    if (size == 1)
    {
        return arr[0][0];
    }
    else
    {
        float helpPtr[size - 1][size - 1]; // Creating an Array to store parsed elements

        for (int column = 0; column < size; column++)
        {
            // Filling the parsed array
            a = 0, b = 0;
            for (int i = 1; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (j != column)
                    {
                        helpPtr[a][b] = arr[i][j];
                        b++;
                        (b == (size - 1)) ? (a++, b = 0) : (b = b);
                    }
                }
            }
            // Filling completed
            value_of_determinant += pow(-1, column) * arr[0][column] * determinant(size - 1, helpPtr);
        }
    }

    return value_of_determinant;
}

void adjoint(int size, float original_matrix[][size], float adjoint_matrix[][size])
{
    float temp[size - 1][size - 1];
    int a, b;
    for (int i = 0; i < size; i++) // 4 Nested loops to fill the parsed elements of the matrix
    {
        for (int j = 0; j < size; j++)
        {
            a = 0, b = 0;
            for (int row = 0; row < size; row++)
            {
                for (int column = 0; column < size; column++)
                {
                    if (row != i && column != j)
                    {
                        temp[a][b] = original_matrix[row][column];
                        ++b;
                        (b == (size - 1)) ? (++a, b = 0) : (b = b); // Conditional statement to iterate the temp matrix
                    }
                }
            }
            adjoint_matrix[j][i] = pow(-1, i + j) * determinant(size - 1, temp); // filling adjoint matrix by complement rule
        }
    }
}

void matrix_inverse(int size, float matrix[][size], float inverse_matrix[][size])
{
    adjoint(size, matrix, inverse_matrix);
    float value_of_determinant = determinant(size, matrix);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            inverse_matrix[i][j] /= value_of_determinant;
        }
    }
}

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}

void loading(void)
{
    printf("Loading...\n");
    sleep(1);
    printf("[--------------------] :\x1b[s%2d%%\r", 0); // The \x1b[s is used to store the current cursor position
    for (int i = 0; i < 20; i++)
    {
        printf("[");
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\x1b[u%2d%%\r", 5 * (i + 1)); // The \x1b[u is used to retrieve the position of the cursor stored earlier
        if (i == 5 || i == 10 || i == 15)
            continue;
        sleep(1);
    }
    sleep(1);
}
#endif