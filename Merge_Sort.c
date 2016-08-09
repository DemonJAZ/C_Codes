#include <stdio.h>
#include <stdlib.h>
void Merge_Sort(int Left[],int L_size,int Right[],int R_size,int arr[])
{
    int i=0,j=0,k=0;
    while( i<L_size && j<R_size)
    {
        if(Left[i]<=Right[j])
        {
            arr[k++]=Left[i++];
        }
        else
        {
            arr[k++]=Right[j++];            
        }
    }
    while(i<L_size)
    {
        arr[k++]=Left[i++];
    }
    while(j<R_size)
    {
        arr[k++]=Right[j++];
    }
}
void Merge(int arr[],int size)
{
    if(size<2)
        return;
    int *l,*r,mid;
    mid=size/2;
    l=(int*)malloc(mid*sizeof(int));
    r=(int*)malloc((size-mid)*sizeof(int));
    int i;
    for(i=0;i<mid;i++)
        l[i]=arr[i];
    for(i=mid;i<size;i++)
        r[i-mid]=arr[i];
    Merge(l,mid);
    Merge(r,size-mid);
    Merge_Sort(l,mid,r,(size-mid),arr);
    free(l);
    free(r);
}
int main() {
    int size;
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    for(int j=0;j<size;j++)
        scanf("%d",&arr[j]);
    //Splitting begins here;
    /*
    int *l,*r,m;
    m=size/2;
    printf("%d %d\n",m,size-m);
    l=(int*)malloc(m*sizeof(int));
    r=(int*)malloc((size-m)*sizeof(int));
    int i;
    for(i=0;i<m;i++)
        l[i]=arr[i];
    for(i=m;i<size;i++)
        r[i-m]=arr[i];
    */
    // Ends here;
    
   // Merge_Sort(l,m,r,(size-m),arr);
    Merge(arr,size);
    for(int j=0;j<size;j++)
        printf("%d ",arr[j]);
    printf("\n");
    return 0;
}

