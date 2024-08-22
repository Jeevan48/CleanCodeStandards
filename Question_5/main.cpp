#include <iostream>
 
int main(void) {
 
    //Declaring input variables
    std::string ignitionSwitch;
    float fuelLevel;
    float oilPressure;
 
    // Getting user input for ingnition switch
    std::cout << "Enter Ignition Switch State (ON/OFF): ";
    std::cin >> ignitionSwitch;
 
    // Getting user input for fuel level
    std::cout << "Enter Fuel Level (in liters): ";
    std::cin >> fuelLevel;
 
    // Getting user input for oil pressure
    std::cout << "Enter Oil Pressure (in psi): ";
    std::cin >> oilPressure;
 
    // Converting ignitionSwitch to uppercase to handle case sensitivity
    for (auto &c : ignitionSwitch) {
        c = toupper(c);
    }
 
    // Checking if ignition is ON or OFF
    if (ignitionSwitch == "ON") {
    // Checking if fuel level is above 0 or not
        if (fuelLevel > 0.f) {
    // Checking if oil pressure is above 20 or not
            if (oilPressure > 20.f) {
                // if both conditions will match printing vehicle is ready
                std::cout << "Vehicle is ready to start!" << std::endl;
 
            // if fuel is below 0 printing warning
            } else {
                // if conditions will not match printing vehicle is not ready
                std::cout << "Warning: Oil pressure is too low!" << std::endl;
            }
        }
 
        // if fuel is below 0 printing warning
        else {
            std::cout << "Warning: Fuel level is too low!" << std::endl;
        }
    }
    // Checking if ignition OFF printing same
    else if (ignitionSwitch == "OFF") {
        std::cout << "Ignition is OFF. Turn it ON to start the vehicle." << std::endl;
    }
    
    // Checking if ignition is valid and printing same
    else {
        std::cout << "Invalid Ignition Switch State. Please enter ON or OFF." << std::endl;
    }
 
    return 0;
}

 