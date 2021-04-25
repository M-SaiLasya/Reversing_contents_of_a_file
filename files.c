#include<stdio.h>
#include<conio.h>
void main() {
    FILE *fp;
    char ch, fname[30], newch[5000];
    int i=0, j, COUNT=0;
    printf("Enter the filename with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    if(!fp)
    {
        getch();
    }
    ch = getc(fp);
    while(ch != EOF)
    {
        COUNT++;
        newch[i] = ch;
        i++;
        ch = getc(fp);
    }
    printf("\n");
    printf("The content in reverse order is:\n\n");
    for(j=(COUNT-1); j>=0; j--)
    {
        ch = newch[j];
        printf("%c", ch);
    }
    getch();


}
