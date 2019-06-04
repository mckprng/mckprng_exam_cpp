#include <iostream>
using namespace std;

#include "coffee_machine.h"

int main(void){
    // Default values test
    Coffee_machine my_default_coffee_machine;
    cout << "Coffee machine with default values." << endl;
    cout << "Water level: " << my_default_coffee_machine.get_water_level() << endl;
    cout << "Coffee level: " << my_default_coffee_machine.get_coffee_level() << endl;
    cout << "Increasing water and coffee value." << endl;
    cout << "Water level incresed by: " << my_default_coffee_machine.increase_water_level()
         << ", And coffee level by: " << my_default_coffee_machine.increase_coffee_level() << endl;
    cout << "New values:" << endl;
    cout << "Water level: " << my_default_coffee_machine.get_water_level() << endl;
    cout << "Coffee level: " << my_default_coffee_machine.get_coffee_level() << endl;
    cout << "Set water and coffee level to 10." << endl;
    my_default_coffee_machine.set_water_level(10);
    my_default_coffee_machine.set_coffee_level(10);
    cout << "Water level: " << my_default_coffee_machine.get_water_level() << endl;
    cout << "Coffee level: " << my_default_coffee_machine.get_coffee_level() << endl;
    cout << endl;

    // User values test
    Coffee_machine my_coffee_machine(10, 10);
    cout << "Coffee machine with user values." << endl;
    cout << "Water level: " << my_coffee_machine.get_water_level() << endl;
    cout << "Coffee level: " << my_coffee_machine.get_coffee_level() << endl;
    cout << "Increasing water and coffee value." << endl;
    cout << "Water level incresed by: " << my_coffee_machine.increase_water_level()
         << ", And coffee level by: " << my_coffee_machine.increase_coffee_level() << endl;
    cout << "New values:" << endl;
    cout << "Water level: " << my_coffee_machine.get_water_level() << endl;
    cout << "Coffee level: " << my_coffee_machine.get_coffee_level() << endl;
    cout << endl;
    return 0;
}