#include<stdio.h>
int main()
{
    char CHOICE;
    float NUM1,NUM2,Result;
          printf("ENTER NUM1=");
          scanf("%f",&NUM1);
          printf("ENTER NUM2=");
          scanf("%f",&NUM2);
    
    printf("ENTER THE OPERATION=");
    scanf(" %c",&CHOICE);
          
         
     switch(CHOICE)
    {
        case '+':
          Result=NUM1+NUM2;
          printf("SUM=%f",Result);
          break;
          
          case '-':
          Result=NUM1-NUM2;
          printf("SUBTRACTION=%f",Result);
          break;
          
        case '*':
          Result=NUM1*NUM2;
          printf("PRODUCT=%f",Result);
          break;
          
        case '/':
           Result=NUM1/NUM2;
           printf("QUOTIENT=%.2f",Result);
           break;
           
        default:
           printf("WRONG CHOICE");
          
           
    }
     
    
}
