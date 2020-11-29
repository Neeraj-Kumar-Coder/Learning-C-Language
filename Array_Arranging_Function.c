// Ascending order arranger
void ascendingOrderArranger(int arr[], int size, int *ptr) // The third argument is the address of the base element of the new array where we will store the arranged numbers
{
    ;
}

// Shortest Number Finder
int shortestNumberFinder(int arr[], int size)
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
// Descending order arranger
void descendingOrderArranger(int arr[], int size, int *ptr) // The third argument is the address of the base element of the new array where we will store the arranged numbers
{
    ;
}

// Highest Number Finder
int highestNumberFinder(int arr[], int size)
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