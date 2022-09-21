#include<stdio.h> 
#include "Library.h"
int main()
{
    double angle_at_chowk; 
    struct Equation e1,e2;
    //Taking input of road 1
    printf("\nEquation of road 1 (ax+by+c=0)---\n ");
    printf("Enter value for a,b,c : ");
    while(!scanf("%d%d%d",&e1.a,&e1.b,&e1.c))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    //Taking input of road 2
    printf("\nEquation of road 2 (ax+by+c=0)---\n ");
    printf("Enter value for a,b,c : ");
    while(!scanf("%d%d%d",&e2.a,&e2.b,&e2.c))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    angle_at_chowk = find_angle(e1,e2); 
    printf("Angle at which these roads meets at 123 Chowk: %.2lf degree\n",angle_at_chowk);
    return 0;
}