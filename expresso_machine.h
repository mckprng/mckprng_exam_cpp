#ifndef EXPRESSO_MACHINE_H
class Expresso_machine{
	private:
        int water_level;
        int coffee_level;
        int pressure_level;
        static int const max_water_level = 10;
        static int const max_coffee_level = 10;
        static int const max_pressure_level = 10;

	public:
        // Constructors
        Expresso_machine();
        Expresso_machine(int, int, int);

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
        inline void set_pressure_level(int pressure){
            pressure_level = pressure;
        }
        inline int get_pressure_level(void){
            return pressure_level;
        }

        // Class functions
        int increase_water_level(void);
        int increase_coffee_level(void);
        int init_pressure(void);
        int get_coffee(void);

};
#define EXPRESSO_MACHINE_H
#endif