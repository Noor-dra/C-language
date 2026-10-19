#include <stdio.h>
int linearsearch(int a[], int size, int target)
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (a[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int n, i, key;
    printf("Enter the number of elements in the array\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched in the array\n");
    scanf("%d", &key);

    int result = linearsearch(arr, n, key);
        if (result!=-1){
            printf("Element found at index %d",result);
        }
        else
            printf("Element not found in the array");

        return 0;
    }