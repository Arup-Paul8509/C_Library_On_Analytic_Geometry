#include<math.h>
/*-------------------------- For Problem 1 -------------------------------*/
/*
    Equation is a structure which stores coefficients of equation
    of the form ax+by+c=0;
*/
struct Equation
{
    int a,b,c;
};
double find_angle(struct Equation e1,struct Equation e2)
{
    double tanx,angle,neumerator,denominator;
        /*
        If equations are a1x+b1y+c1=0 and a2x+b2y+c2=0,
        then tan x= (a2b1-a1b2)/(a1a2+b1b2)
        where x is the angle can be determined using tan inverse function
        */
    neumerator=(e2.a*e1.b)-(e1.a*e2.b);
    denominator=(e1.a*e2.a)+(e1.b*e2.b);
    if(denominator==0)
        return 90;
    tanx=fabs((double)(neumerator/denominator));
    angle=atan(tanx); //tan inverse returns angle in radian
    angle=angle*180/M_PI; //converts radian to degree
    return angle;
}
/*--------------------------------------------------------------------------*/

/*-------------------------- For Problem 2 -------------------------------*/
struct Location
{
    double latitude,longitude;
};
    /*
        Haversine formula:
            The haversine formula can be used to find the distance between 
        two points on a sphere given their latitude and longitude:

            d = 2rsin^-1(sqrt(sin^2((x2-x1)/2)+cos(x1)*cos(x2)*sin^2((y2-y1)/2)))

        In the haversine formula, d is the distance between two points along 
        a great circle, r is the radius of the sphere, x1 and x2 are the 
        latitudes of the two points, and y1 and y2 are the longitudes of the 
        two points, all in radians.

        radius of earth = 6371 km
    */
double find_distance(struct Location l1,struct Location l2)
{
    const double R=6371.09;
    double d;
    double dlat,dlog,p,q;
    //Converting degree to radian
    l1.latitude=(l1.latitude*M_PI)/180;
    l1.longitude=(l1.longitude*M_PI)/180;
    l2.latitude=(l2.latitude*M_PI)/180;
    l2.longitude=(l2.longitude*M_PI)/180;
    //-----------------------------------
    dlat=l2.latitude-l1.latitude;
    dlog=l2.longitude-l1.longitude;
    p=pow(sin(dlat/2),2);
    q=pow(sin(dlog/2),2);
    d=2*R*asin(sqrt(p+cos(l1.latitude)*cos(l2.latitude)*q));
    return d;    
}
/*--------------------------------------------------------------------------*/

/*-------------------------- For Problem 3 -------------------------------*/
struct Coordinate
{
    double x,y;
};
double find_area(struct Coordinate a,struct Coordinate b,struct Coordinate c)
{
    /*
        If (x1,y1),(x2,y2),(x3,y3) be three coordinates of a triangle,
        then the area of the triangle
        A=1/2|x1(y2-y3)+x2(y3-y1)+x3(y1-y2)|        
    */
   double area;
   area=0.5*fabs(a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y));
   return area;
}
/*--------------------------------------------------------------------------*/