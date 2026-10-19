#include <stdio.h>

void enterElementsInArray(int rowNum,int columnNum,int arr[rowNum][columnNum],int arrNum){
    printf("Enter the elements in the %d array\n",arrNum);
   int i,j;
   for (i=0;i<rowNum;i++){
    for (j=0;j<columnNum;j++){
        scanf("%d",&arr[i][j]);
    }
   }
}
void SumOfArrays(int rowNum,int columnNum,int arr1[rowNum][columnNum],int arr2[rowNum][columnNum]){
    int i,j;
    int result[rowNum][columnNum];
     for(i=0;i<rowNum;i++){
    for(j=0;j<columnNum;j++){
        result[i][j]=arr1[i][j]+arr2[i][j];
        printf("%d ",result[i][j]);
    }
    printf("\n");
   }
}
int main()
{
    int m,n;
    printf("Enter the number of rows and columns\n");
    scanf("%d %d", &m,&n);
    int arr1[m][n];
    int arr2[m][n];

    enterElementsInArray(m,n,arr1,1);
    enterElementsInArray(m,n,arr2,2);

   //adding the two arrays and then printing the resultant array
   SumOfArrays(m,n,arr1,arr2);
  
    return 0;
}
