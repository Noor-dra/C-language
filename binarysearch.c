#include <stdio.h>
int binarysearch(int arr[], int high, int low, int key)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (key == arr[mid])
            return mid; //Element found at index mid
        else if (key > arr[mid])
            low = mid + 1; //search in the right half
        else if (key < arr[mid])
            high = mid - 1; //search in the left half
    }
    return -1; //Element not found in the array
}
int main()
{
    int n, low, high, key, i;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array in a sorted manner\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched in the array\n");
    scanf("%d", &key);
    low = 0;
    high = n - 1;

    int result = binarysearch(arr, high,low, key);

    //Print the result
    if (result != -1)
        printf("Element found at index %d", result);
    else
        printf("Element not found in the array");
    return 0;
}
