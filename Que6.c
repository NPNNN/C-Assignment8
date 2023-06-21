#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,r,c;
    /*printf("enter no of rows");
    scanf("%d",&r);
    printf("enter no of coloumn");
    scanf("%d",&c);*/
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j <=9; j++)
        {
            if (j>=i && j<=10-i)
            
                printf("*");
            
           else
            printf(" ");
           
          
        }
       printf("\n");
    }
        return 0;
    
    
}