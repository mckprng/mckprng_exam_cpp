#ifndef COFFEE_MACHINE_H
class Coffee_machine{
    private:
        int water_level;
        int coffee_level;
        static int const max_water_level = 10;
        static int const max_coffee_level = 10;

	public:
        // Constructors
        Coffee_machine();
        Coffee_machine(int, int);

        // Set and get functions
        inline void set_water_level(int water){
            water_level = water;
        }
        inline int get_water_level(void){
            return water_level;
        }
        inline void set_coffee_level(int coffee){
            coffee_level = coffee;
        }
        inline int get_coffee_level(void){
            return coffee_level;
        }

        // Class functions
        int increase_water_level(void);
        int increase_coffee_level(void);
};
#define COFFEE_MACHINE_H
#endif