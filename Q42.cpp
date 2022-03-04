#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    const int 
    WEIGHT_MIN = 0,
    WEIGHT_MAX = 20,
    DISTANCE_MIN = 10,
    DISTANCE_MAX = 3000;

    float 
    package_weight,
    distance,
    total_charges;

    cout << "What is the weight in kg of the package?\n";
    cin >> package_weight;

    if (package_weight <= WEIGHT_MIN || package_weight > WEIGHT_MAX)
    {
        cout 
        << "The package weight has to be\n"
        << "more than 0kg and less than 20kg.\n"
        << "You will need to try again.\n"
        << endl;

    }
    else
    {
       cout << "Distance?\n";
       cin >> distance;
       
       if (distance < DISTANCE_MIN || distance > DISTANCE_MAX)

       {
           cout 
           << "The distance must be within 10 and 3000 miles. \n"
           << "Rerun the program\n"
           << endl;
        
           
       }
       else
       {
        if (package_weight <= 2)
        total_charges = (distance / 500) * 1.10;
        else if (package_weight > 2 && package_weight <= 6)
        total_charges = (distance / 500) * 2.20;
        else if (package_weight > 6 && package_weight <= 10)
        total_charges = (distance / 500) * 3.70;
        else if (package_weight > 10 && package_weight <= 20)
        total_charges = (distance / 500) * 4.80;

        cout << setprecision (2) << fixed
        << "Total charges are $ \n"
        << total_charges
        << "For a distance of:"
        << distance
        << "miles\n"
        << "And a total weight of:"
        << package_weight
        << "kg.\n"
        <<endl;
       }

    }

return 0;
}
