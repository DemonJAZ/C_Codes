/*Randomized quick sort uses random partition method we discussed. We just select a random pivot in an array. The advantage we get is that we can reduce the worst case performance of quick sort!! But still, this optimization is expected*/
#include<stdio.h>
#include<stdlib.h>
int c=0;
void swap(int *a ,int *b )
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int random_partition(int *arr,int s,int e)
{
    int r = s + rand()%(e-s+1);
    int pivot=arr[r];
    swap(&arr[r],&arr[e]);
    int pindex = s,i;
    for( i = s ; i < e ; i++)
    {
        if (arr[i] <= pivot) {
            swap(&arr[i],&arr[pindex++]);
        }
        c++;
    }
    swap(&arr[pindex],&arr[e]);
    return pindex;
}

void Quick_Sort(int *arr,int start,int end)
{
    if (start < end) {
        int pno = random_partition(arr,start,end);
        Quick_Sort(arr,start,pno-1);
        Quick_Sort(arr,pno+1,end);
    }
}


int main()
{
    int size,*arr,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    arr=(int*)malloc(size*sizeof(int));
    for (i = 0; i<size ; i++) {
        scanf("%d",&arr[i]);
    }
    Quick_Sort(arr,0,size-1);
    for (i = 0; i<size ; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n \n %d \n ",c);
    return 0;
}
