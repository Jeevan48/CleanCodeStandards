#include <iostream>
 
// Function to calculate fuel economy
float calculate_fuel_economy(float kilometers, float fuel)
{
    return kilometers / fuel;
}
 
int main(void)
{
    // Calling function to calculate fuel economy
    std::cout << "Fuel economy of the vehicle is: " << calculate_fuel_economy(100, 11) << '\n';
 
    return 0;
}