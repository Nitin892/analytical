#include <math.h>
#define PI 3.14159265
double find_angle(int x1, int y1, int x2, int y2)     //eg. 5x + y - 3 = 0    x1 = 5  y1 = 1
{                                                     //eg. 2x + 3y + 1 = 0   x2 = 2  y2 = 3
    if (x1 > 0 || x1 < 0)
    {
        x1 = x1 * (-1);
    }

    if (x2 > 0 || x2 < 0)
    {
        x2 = x2 * -1;
    }

    double m1 = x1 / y1;
    double m2 = x2 / y2;

    double angle = ((m2 - m1) / (1 + m1 * m2));
    return atan(angle);
}

double find_area(double x1, double y1, double x2, double y2, double x3, double y3)  //(20.077,11.598) , (26.526, 90.138) , (23.674, 32.579).
{                                                                                   //(x1, y1)           (x2, y2)             (x3, y3)
    double area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    return area;
}


double find_distance(double latitude1,double latitude2,double longitude1,double longitude2){
    double a = cos(latitude1*(PI/180))*(cos(latitude2*(PI/180)))*(cos(longitude1*(PI/180)))*cos(longitude2*(PI/180));

    double b = cos(latitude1*(PI/180))*(sin(longitude1*(PI/180)))*(cos(latitude2*(PI/180)))*sin(longitude2*(PI/180));
    double c = sin(latitude1*(PI/180))*sin(latitude2*(PI/180));
    double distance = acos(a+b+c)*6378;
    return distance;
}