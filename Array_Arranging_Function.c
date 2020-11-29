int shortestNumberFinder(int arr[], int size);
int highestNumberFinder(int arr[], int size);

// Ascending order arranger
void ascendingOrderArranger(int arr[], int size, int new[]) // The third argument is the address of the base element of the new array where we will store the arranged numbers
{
    for (int i = 0; i < size; i++)
    {
        int j = 0;
        new[i] = shortestNumberFinder(arr, size);
        while (arr[j] != new[i]) // For finding the position of the shortest number in old array
        {
            ++j;
        }
        arr[j] = highestNumberFinder(arr, size) + 1; // Replacing the smallest number with the number greater than the greatest
    }
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
void descendingOrderArranger(int arr[], int size, int new[]) // The third argument is the address of the base element of the new array where we will store the arranged numbers
{
    for (int i = 0; i < size; i++)
    {
        int j = 0;
        new[i] = highestNumberFinder(arr, size);
        while (arr[j] != new[i]) // For finding the position of the largest number in old array
        {
            ++j;
        }
        arr[j] = shortestNumberFinder(arr, size) - 1; // Replacing the largest number with the number smaller than the smallest
    }
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