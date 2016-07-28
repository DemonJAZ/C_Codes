#include<stdio.h>
int main()
{
    int arr[7]={2,3,4,5,6,7};
    int start=0,end=6,mid,search;
    printf("Enter the search:");
    scanf("%d",&search);
    while(start!=end)
	{
        
        mid = (start+end)/2;

        if (search == arr[mid]) {
            printf("FOUND!\n");
            break;
        }
        if (arr[mid] > search ) {
            end = mid-1;
        }
        if(arr[mid] < search ) {
            start = mid+1;
        }
    }
    if (start == end) {
        printf("NOT FOUND\n");
    }
    return 0;
}
