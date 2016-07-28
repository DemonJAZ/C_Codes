#include<stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char c;
    fp1 = fopen("File_1.txt","w+");
    fp2 = fopen("File_2.txt","w+");
    fprintf(fp1,"abcd");
    fseek(fp1,0,SEEK_END);
    int p;
    p = ftell(fp1);
    int i=1;
    printf("%d\n",p);
    while ( p-- ) {
        fseek(fp1,-i,SEEK_END);
        c = fgetc(fp1);
        printf("%c\n",c);
        i++;
    }
    return 0;
}
