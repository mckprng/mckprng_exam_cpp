#include <iostream> // cout
using namespace std;

#include "expresso_machine.h"

int main(void){
    Expresso_machine my_default_expresso_machine;
    cout << "Expresso machine with default values initialized." << endl;
    cout << "Values: water=" << my_default_expresso_machine.get_water_level() <<
            ", coffee=" << my_default_expresso_machine.get_coffee_level() <<
            ", pressure=" << my_default_expresso_machine.get_pressure_level() << endl;
    cout << endl;

    // User values test
    Expresso_machine my_expresso_machine(10, 10, 10);
    cout << "Expresso machine with user values." << endl;
    cout << "Values: water=" << my_expresso_machine.get_water_level() <<
            ", coffee=" << my_expresso_machine.get_coffee_level() <<
            ", pressure=" << my_expresso_machine.get_pressure_level() << endl;
    
    cout << "Get coffee test: " << my_expresso_machine.get_coffee() << endl;
    cout << "Values: water=" << my_expresso_machine.get_water_level() <<
            ", coffee=" << my_expresso_machine.get_coffee_level() <<
            ", pressure=" << my_expresso_machine.get_pressure_level() << endl;

    cout << "Init pressure test: " << my_expresso_machine.init_pressure() << endl;
    cout << "Values: water=" << my_expresso_machine.get_water_level() <<
            ", coffee=" << my_expresso_machine.get_coffee_level() <<
            ", pressure=" << my_expresso_machine.get_pressure_level() << endl;

    
    cout << endl;


    return 0;
}