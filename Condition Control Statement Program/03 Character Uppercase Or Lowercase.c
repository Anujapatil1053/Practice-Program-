#include<stdio.h>
#include<conio.h>

int main()
{
    int ch = {'\0'};

    printf("Enter Your Character = ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        printf("%c Is UpperCase Letter ",ch);
    }
    else if(ch >= 'A' && ch <= 'Z')
    {
         printf("%c Is Lowercase Letter ",ch);
    }
    else
    {
        printf("\n INVALID LETTER ");
    }
    getch();
    return 0;
}
