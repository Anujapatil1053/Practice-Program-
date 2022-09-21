#include <stdio.h>
#include <conio.h>
int Reverse_Number ( int );

int main()
{
      int No = 0;
  
      printf( " \n Enter A Number => ");
      scanf(" %d ",&No );
    
      printf(" Reverse of given No  %d ",Reverse_Number(No));
  
      getch();
      return 0;
  
  
}

int Reverse_Number (  iNo )
{
      int Dig = 0, Rev = 0;
  
      while( iNo != 0 )
      {
              Dig = iNo % 10;
              Rev = ( Rev * 10 )+ Dig;
              iNo = iNo / 10;
      }
      
        getch();
        
       return Rev;
}