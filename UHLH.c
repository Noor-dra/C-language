#include <stdio.h>
void printlowerhalf(int m, int n, int a[m][n])
{       int usum=0;
    for (int i = 0; i < m; i++)
         
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d ", a[i][j]);
            usum=usum+a[i][j];
        }
        
        printf("\n");
    }
    printf("sum of upper half is %d\n",usum);
} 
void printupperhalf(int m, int n, int a[m][n])
{    int sum=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("%d ", a[i][j]);
            sum=sum+a[i][j];
        }
        
        printf("\n");
    }
    printf("\n sum of lower half is %d\n",sum);
}

int main()
{
    int x, y;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d", &x, &y);
    int arr[x][y];
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        
            scanf("%d", &arr[i][j]);
  }
  printf("\nLower half of matrix:\n");
printlowerhalf(x, y, arr);
printf("\n");
 printf("upper half of matrix:\n");
printupperhalf(x, y, arr);
return 0;
}
