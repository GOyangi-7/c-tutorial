#include <stdio.h>
int main()
{
    //program to find if the number is divisable by 2 or not 
    
    int a ;
    printf("enter number = ");
    scanf("%d",&a );

    /*in c true = 1 and false = 0  , here we used two operators 
     %(arithmetic operator) and then ==0(relational opertor)*/    

    printf("%d", a%2==0 );
    return 0;

}