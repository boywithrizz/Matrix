#include<stdio.h>
void main()
{
    int m,n,o,i,j,k;
    printf("Enter the values of m n o :");
    scanf("%d %d %d",&m,&n,&o);
    int arr1[m][n],arr2[n][o],arr3[m][o];
    printf("Enter the values of matrix 1 :\n");
    for (i=0;i<m;i++) for(j=0;j<n;j++) scanf("%d",&arr1[i][j]);
    printf("Enter the values of matrix 2 :\n");
    for (i=0;i<n;i++) for(j=0;j<o;j++) scanf("%d",&arr2[i][j]);
    for (i=0;i<m;i++)
    {
        for (j=0;j<o;j++)
        {
            arr3[i][j]=0;
            for (k=0;k<n;k++)
            {
                arr3[i][j]+= arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("The matrix after multiplication is : \n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<o;j++)
        {
            printf("%d ",arr3[i][j]);
        } printf("\n");
    }
   
}