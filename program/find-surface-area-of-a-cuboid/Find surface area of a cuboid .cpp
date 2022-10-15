
//CPP pogram to find total surface area of cuboid
#include <bits/stdc++.h>
using namespace std;
 

 
double surfaceAreaCuboid(double l, double h, double w)
{
    return (2 * l * w + 2 * w * h + 2 * l * h);
}
 
// driver function
int main()
{
    double l = 1;
    double h = 5;
    double w = 7;
   
    cout << "Total Surface Area = "
         << surfaceAreaCuboid(l, h, w);
    return 0;
}
