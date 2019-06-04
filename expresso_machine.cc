#include "expresso_machine.h"

// Contrustors
Expresso_machine::Expresso_machine(){
    // Default values if no input
    water_level = 5;
    coffee_level = 5;
    pressure_level = 10;
}
Expresso_machine::Expresso_machine(int water, int coffee, int pressure){
    water_level = water;
    coffee_level = coffee;
    pressure_level = pressure;
}

// Functions
int Expresso_machine::increase_water_level(void){
    if (water_level < max_water_level){
        water_level++;
        return 1;
    }
    return 0;
}

int Expresso_machine::increase_coffee_level(void){
    if (coffee_level < max_coffee_level){
        coffee_level++;
        return 1;
    }
    return 0;
}

int Expresso_machine::init_pressure(void){
    if (pressure_level != max_pressure_level){
        pressure_level = max_pressure_level;
        return 1;
    }
    return 0;
}

int Expresso_machine::get_coffee(void){
    if (pressure_level == max_pressure_level){
        water_level = 0;
        coffee_level = 0;
        pressure_level = 0;
        return 1;
    }
    return 0;
}
