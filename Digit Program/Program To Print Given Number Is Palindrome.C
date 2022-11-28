#include <stdio.h>
#include <conio.h>

int main()
{
       int iNo = 0, Dig = 0, Rev = 0 , Temp = 0;
       
       printf(" \n Enter A Number => ");
       scanf("%d",&iNo );
       
       Temp = iNo;
       
       while( Temp > 0)
       {
           Dig = Temp % 10;
           Rev = (Rev * 10) + Dig;
           Temp = Temp / 10;
       }
       
       if( Rev == iNo )
       {
         printf(" Given Number Is Palindrome");
       }
       else
       {
         printf(" Given Number Is Not  Palindrome");
       }
       
       getch();
       return 0;
}
