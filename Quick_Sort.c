// Reference Link https://www.youtube.com/watch?v=COk73cpQbFQ

#include <stdio.h>
#include <stdlib.h>
int c=0;
void swap( int *a , int *b )
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int s,int e)
{
    int pv = arr[e];    // pivot
    int pindex = s;
    int i;
    for(i = s ; i < e ; i++)
    {
        if(arr[i] <= pv)
        {
            swap(&arr[i],&arr[pindex++]);
        }
        c++;
    }
    swap(&arr[pindex],&arr[e]); //swap pivot to partition index
    return pindex;
    
}
void Quick_sort(int arr[],int start,int end)
{
    if(start < end)
    {
     int parti = partition(arr,start,end);
     Quick_sort(arr,start,parti-1);
     Quick_sort(arr,parti+1,end);
    }
}
int main() {
    int size;
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    int i;
    for(i = 0;i < size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    Quick_sort(arr,0,size-1);
    
    for(i = 0;i < size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n \n %d \n",c);
    return 0;
}

