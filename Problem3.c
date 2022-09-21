#include<stdio.h> 
#include "Library.h"
int main()
{ 
    int d;
    double area_under_A;
    struct Coordinate c1,c2,c3;
    printf("Enter coordinate of vertex 1 (x,y): ");
    while(!scanf("%lf%lf",&c1.x,&c1.y))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    printf("Enter coordinate of vertex 2 (x,y): ");
    while(!scanf("%lf%lf",&c2.x,&c2.y))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    printf("Enter coordinate of vertex 3 (x,y): ");
    while(!scanf("%lf%lf",&c3.x,&c3.y))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    area_under_A = find_area(c1,c2,c3); 
    printf("\nArea to be coloured black: %.2lf square unit(s)\n",area_under_A); 
    return 0;
}