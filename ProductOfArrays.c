#include <stdio.h>

void enterElementsInArray(int m, int n, int arr[m][n], int arrNum)
{
    printf("Enter the elements in the %d array\n", arrNum);
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void ProductOfArrays(int m, int n, int p, int arr1[m][n], int arr2[n][p], int result[m][p])
{
    int i, j, k;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}
void PrintArray(int m, int n, int arr[m][n])
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int m, n, p;
    printf("Enter the number of rows and columns in the first matrix: \n");
    scanf("%d %d", &m, &n);
    printf("The number of rows in the second matrix should be equal to the number of columns in the first matrix.\n");
    printf("Enter the number of the columns in the second matrix:\n ");
    scanf("%d", &p);

    int arr1[m][n];
    int arr2[n][p];
    int resultant[m][p];

    enterElementsInArray(m, n, arr1, 1);
    enterElementsInArray(n, p, arr2, 2);

    // multiplying the two arrays and then printing the resultant array

    printf("The resultant matrix is: \n");
    ProductOfArrays(m, n, p, arr1, arr2, resultant);
    PrintArray(m, p, resultant);

    return 0;
}
