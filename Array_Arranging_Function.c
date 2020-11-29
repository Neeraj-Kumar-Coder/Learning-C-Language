// Ascending order arranger
int *ascendingOrderArranger(int arr[], int size)
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
int *descendingOrderArranger(int arr[], int size)
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