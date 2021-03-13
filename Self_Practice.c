#include <stdio.h>
#define STORE 1
#define DONOT_STORE 0

void name_Compressor(char name[]);

int main(void)
{
    char name[50];
    printf("Enter your name: ");
    scanf("%[^\n]%*c", name);
    printf("The name you entered is : %s\n", name);
    name_Compressor(name);
    printf("The compressed name is : %s\n", name);
    return 0;
}

void name_Compressor(char name[])
{
    int number_of_spaces = 0, index_1 = 0, index_2 = 0, action = STORE;
    while (name[index_1] != '\0') // This will count the number of spaces present in the name
    {
        if (name[index_1] == ' ')
        {
            number_of_spaces++;
        }
        ++index_1;
    }
    char short_name_storer[50]; // It is a temporary array to store the shortend name
    index_1 = 0;                // Resetting index_1
    while (name[index_1] != '\0')
    {
        if (action == STORE)
        {
            short_name_storer[index_2++] = name[index_1];
            action = DONOT_STORE;
        }
        else if (name[index_1] == ' ')
        {
            short_name_storer[index_2++] = name[index_1];
            action = STORE;
            --number_of_spaces;
        }
        else if (!number_of_spaces)
        {
            short_name_storer[index_2++] = name[index_1];
        }
        index_1++;
    }
    short_name_storer[index_2] = '\0';
    index_1 = 0, index_2 = 0;                  // Resetting index_1 and index_2
    while (short_name_storer[index_2] != '\0') // Copying the Shortend name in the main name array
    {
        name[index_1++] = short_name_storer[index_2++];
    }
    name[index_1] = '\0';
}