#include <stdio.h>
#include <stdlib.h>
#define size 10
int count;
int partition(int A[size],int l,int r)
{
    int i,j,pivot,temp;
    pivot=A[l];
    i=l+1;
    j=r;
    while(1)
    {
        while (pivot>=A[i]&&i<=r)
        {
            i++;
            count++;
        }
            while (pivot<A[j]){
                    j--;
                    count++;
            }
            count++;
            if(i<j)
            {
                temp=A[i];
                A[i]=A[j];
                A[j]=temp;
            }
            else{
                temp=A[j];
                A[j]=A[l];
                A[l]=temp;
                return j;
            }
    }
}

void quicksort(int A[size],int l,int r)
{
    int s;
    if(l<r)
    {
        s=partition(A,l,r);
        quicksort(A,l,s-1);
        quicksort(A,s+1,r);
    }
}
int main()
{
    int a[size],i,n;
    printf("\n enter the no of elements");
    scanf("%d",&n);
    printf("\n enter the elements ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("\n sorted array is");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    printf("the count is %d",count);
    return 0;
}

