#include "coffee_machine.h"

// Constructors
Coffee_machine::Coffee_machine(){
    // Default values if no input
    water_level = 5;
    coffee_level = 5;
}
Coffee_machine::Coffee_machine(int water, int coffee){
    // Default values if no input
    water_level = water;
    coffee_level = coffee;
}

// Functions
int Coffee_machine::increase_water_level(void){
    if (water_level < max_water_level){
        water_level++;
        return 1;
    }
    return 0;
}

int Coffee_machine::increase_coffee_level(void){
    if (coffee_level < max_coffee_level){
        coffee_level++;
        return 1;
    }
    return 0;
}