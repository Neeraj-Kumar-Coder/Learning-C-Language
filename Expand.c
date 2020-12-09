/*
    Author : Neeraj Kumar
    Purpose : Practice exercise
    Date : 08/12/2020
    Time : 07:31 PM
*/
#include <stdio.h>

void expand(char s1[], char s2[]);

int main(int argc, char const *argv[])
{
    char a, s1[100], s2[500];
    int i = 0;
    printf("Enter your first string: ");
    while ((a = getchar()) != '\n')
    {
        s1[i++] = a;
    }
    s1[i] = '\0';

    expand(s1, s2);
    printf("This is the resultant string: %s", s2);
    return 0;
}

// This function assumes that s2 is of sufficient large size to store the full expanded form of s1
// void expand(char s1[], char s2[])
// {
//     int i = 0, j = 0;

//     while (s1[i] != '\0')
//     {
//         s2[j++] = s1[i++];
//         if (s1[i] == '-')
//         {
//             ++i;
//             if (s1[i] >= 'a' && s1[i] <= 'z' && s1[i - 2] >= 'a' && s1[i - 2] <= 'z')
//             {
//                 if (s1[i - 2] < s1[i])
//                 {
//                     for (int k = 1; (s1[i - 2] + k) <= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] + k;
//                     }
//                 }
//                 else
//                 {
//                     for (int k = 1; (s1[i - 2] - k) >= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] - k;
//                     }
//                 }

//                 ++i;
//             }
//             else if (s1[i] >= 'A' && s1[i] <= 'Z' && s1[i - 2] >= 'A' && s1[i - 2] <= 'Z')
//             {
//                 if (s1[i - 2] < s1[i])
//                 {
//                     for (int k = 1; (s1[i - 2] + k) <= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] + k;
//                     }
//                 }
//                 else
//                 {
//                     for (int k = 1; (s1[i - 2] - k) >= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] - k;
//                     }
//                 }

//                 ++i;
//             }
//             else if (s1[i] >= '0' && s1[i] <= '9' && s1[i - 2] >= '0' && s1[i - 2] <= '9')
//             {
//                 if (s1[i - 2] < s1[i])
//                 {
//                     for (int k = 1; (s1[i - 2] + k) <= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] + k;
//                     }
//                 }
//                 else
//                 {
//                     for (int k = 1; (s1[i - 2] - k) >= s1[i]; k++)
//                     {
//                         s2[j++] = s1[i - 2] - k;
//                     }
//                 }

//                 ++i;
//             }
//             else
//             {
//                 s2[j++] = '-';
//             }
//         }
//     }
//     s2[j] = '\0';
// }

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