#include <iostream>
#include <iomanip>
#include <math.h>


using namespace std;
int main()
{
    int rectangle_area,radious, area, width, length,height,quit;
    float circle_area, triangle_area;
    const double Pi = 3.14;

    cout << "Which formula do you want to see?\n";
    cout << "Enter 1. For radious of a circle" << endl;
    cout << "Enter 2. For width of rectangle" << endl;
    cout << "Enter 3. For length of triangle" << endl;
    cout << "Enter 4. To quit program!" << endl;

    while (1==1)
    {
        cout << "Choose out of the four options: ";
        cin >> area;
        cout << endl;

        switch (area)
    {  
        case 1: 
        cout << "Enter radious of circle\n";
        cin >> radious;
        cout << "Enter the area of circle\n";
        circle_area = Pi * radious * radious;
        cout << "Area of circle is:" << circle_area << endl;
        break;
        
        case 2:
        cout << "Enter width of rectangle" << endl;
        cin >> width;
        cout << "Enter length of rectangle" << endl;
        cin >> length;
        cout << "Enter the area of rectangle" << endl;
        rectangle_area = width * length;
        cout << "Area of rectangle is:" << rectangle_area << endl;
        break;

        case 3:
        cout << "Enter length of triangle" << endl;
        cin >> length;
        cout << "Enter height of triangle" << endl;
        cin >> height;
        cout << "Enter the area of triangle" << endl;
        triangle_area = length * height * 0.5;
        cout << "Area of Triangle is:" << triangle_area << endl;
        break;

        case 4: 
        cout << "Well okay then, goodbye!" << endl;
        return 0;

    }
    }
    

}