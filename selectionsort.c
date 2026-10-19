#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array\n");
    scanf(" %d", &n);
    int arr[n], i;
    printf("Enter the elements in the array\n");
    for (i = 0; i < n; i++)
    {
        scanf(" %d", &arr[i]);
    }
    int a, b, min, temp;
    for (a = 0; a < n; a++)
    {
        int min_index = a;
        for (b = a + 1; b < n; b++)
        {
            if (arr[b] < arr[min_index])
            {
                min_index = b;
            }
        }
        temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
    }
    printf("the sorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
