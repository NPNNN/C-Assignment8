#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    
    for (i = 1; i <=5; i++)
    {
        for ( j = 5; j >0; j--)
    {
        if(j<=i)
        printf("*");
        else
        printf(" ");
     }
        printf("\n");
    }
    
    return 0;
}