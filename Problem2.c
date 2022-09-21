#include<stdio.h> 
#include "Library.h"
int main()
{ 
    double distance;
    struct Location l1,l2;
    printf("\n P.S :- ");
    printf("\n Enter values in degree ");
    printf("\n In Latitude --- \n -> Use positive value for North\n -> Use negative value for South");
    printf("\n In Longitude --- \n -> Use positive value for East\n -> Use negative value for West");
    //Inputs for location 1
    printf("\nLocation 1 -\n");
    printf(" Enter latitude :");
    while(!scanf("%lf",&l1.latitude))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    printf(" Enter longitude :");
    while(!scanf("%lf",&l1.longitude))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    //Inputs for location 2
    printf("\nLocation 2 -\n");
    printf(" Enter latitude :");
    while(!scanf("%lf",&l2.latitude))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    printf(" Enter longitude :");
    while(!scanf("%lf",&l2.longitude))
    {
        fflush(stdin);
        printf("Invalid Input\n");
    }
    distance = find_distance(l1,l2);     
    printf("Distance Between Saurabh Sir and Prateek Sir: %.2lf KM\n",distance);
    return 0;
}