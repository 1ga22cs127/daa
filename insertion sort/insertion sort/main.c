#include <stdio.h>
#include <stdlib.h>
int count=0;
void insertionsort(int A[1000],int n)
{
    int i,j,item;
    for(i= 1;i<=n-1;i++)
    {
        item=A[i];
        j=i-1;
        while(j>=0 && A[j]>item)
        {
           count++;
            A[j+1]=A[j];
            j=j-1;
        }
          count++;
        A[j+1]=item;
    }
}
int main()
{

    int A[1000],n,i,j;
    printf("\n read the number of elemnts:");
    scanf("%d",&n);
    printf("\n read the elemnts:");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    insertionsort(A,n);
    printf("\n elements after sorting :");
    for(i=0;i<n;i++)
    printf("%d\n",A[i]);
    printf("\n no of times the basic operation gets executed is %d\n",count);
    return 0;
}

