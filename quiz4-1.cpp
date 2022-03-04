#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;
int main()
{
    int rectangle_area,radious, area, width, length,height;
    float circle_area, triangle_area;
    double Pi = 3.14;

    cout << "Which formula do you want to see?\n\n";
    cout << "Enter 1. Area of a circle\n";
    cout << "Enter 2. Area of a rectangle\n";
    cout << "Enter 3. Area of a triangle\n";
    cout << "Enter 4. None of them!\n";

    while (1==1)
    cin >> area;
    switch (area)
    {
        case '1': 
        cout << "Enter radious of circle\n";
        cin >> radious;
        cout << "Enter the area of circle\n";
        circle_area = Pi * radious * radious;
        cout << "Area of circle is:" << circle_area << endl;
        break;

        case '2':
        cout << "Enter width of rectangle\n";
        cin >> width;
        cout << "Enter length of rectangle\n";
        cin >> length;
        cout << "Press Enter for the area of rectangle\n";
        cin >> rectangle_area = width * length;
        cout << "Area of rectangle is:" << rectangle_area << endl;
        break;

        case '3':
        cout << "Enter length of triangle\n";
        cin >> length;
        cout << "Enter height of triangle\n";
        cin >> height;
        cout << "Enter the area of triangle\n";
        triangle_area = length * height / 2;
        cout << "Area of Triangle is:" << triangle_area << endl;
        break;

        case '4': 
        cout << "Well okay then, goodbye!\n";
        default: cout << "You did not enter 1,2,3, or 4!\n";
        return 0;
    }


}