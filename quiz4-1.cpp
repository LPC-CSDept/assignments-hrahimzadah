#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
    int rectangle_area,radious, area, width, length,height,quit;
    float circle_area, triangle_area;
    double Pi = 3.14;

    cout << "Which formula do you want to see?\n\n";
    cout << "Enter 1. For radious of a circle" << radious << "Enter the area of circle" << circle_area << endl;
    cout << "Enter 2. For width of rectangle" << width << "Enter length of rectangle" << length << "Enter the area of rectangle" << rectangle_area << endl;
    cout << "Enter 3. For length of triangle" << length << "Enter height of triangle" << height << "Enter the area of triangle" << triangle_area << endl;
    cout << "Enter 4. None of them!" << quit << endl;

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
        cout << "Enter width of rectangle" << width << endl;
        cin >> width;
        cout << "Enter length of rectangle" << length << endl;
        cin >> length;
        cout << "Enter the area of rectangle" << area << endl;
        rectangle_area = width * length;
        cout << "Area of rectangle is:" << rectangle_area << endl;
        break;

        case '3':
        cout << "Enter length of triangle" << length << endl;
        cin >> length;
        cout << "Enter height of triangle" << height << endl;
        cin >> height;
        cout << "Enter the area of triangle" << area << endl;
        triangle_area = length * height * 0.5;
        cout << "Area of Triangle is:" << triangle_area << endl;
        break;

        case '4': 
        cout << "Well okay then, goodbye!" << quit << endl;
        cin >> quit;
        return 0;
    }


}