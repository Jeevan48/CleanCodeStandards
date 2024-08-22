#include <iostream> // Include the input-output stream library

// Function prototypes
void displayDriveMode(int mode);
void adjustVehicleParameters(int mode);

int main(void)
{
    int driveMode; // Variable to store the selected drive mode

    // Prompt user for drive mode selection
    std::cout << "Select Drive Mode (1=Eco, 2=Comfort, 3=Sport): ";
    std::cin >> driveMode; // Read user input

    // Ensure drive mode input is within valid range
    if ((driveMode < 1) || (driveMode > 3))
    {
        std::cerr << "Invalid selection. Please select a number between 1 and 3." << std::endl;
    }

    // Display selected drive mode and adjust vehicle parameters
    displayDriveMode(driveMode);
    adjustVehicleParameters(driveMode);

    return 0; // Exit program successfully
}

// Function to display selected drive mode
void displayDriveMode(int mode)
{
    switch (mode)
    {
    case 1: // Eco mode
        std::cout << "Drive Mode: Eco" << std::endl;
        break;
    case 2: // Comfort mode
        std::cout << "Drive Mode: Comfort" << std::endl;
        break;
    case 3: // Sport mode
        std::cout << "Drive Mode: Sport" << std::endl;
        break;
    default: // Default case is not necessary here due to prior validation
        break;
    }
}

// Function to adjust vehicle parameters based on selected drive mode
void adjustVehicleParameters(int mode)
{
    double fuelEfficiency; // Variable to store fuel efficiency
    double acceleration;   // Variable to store acceleration

    switch (mode)
    {
    case 1:                    // Eco mode
        fuelEfficiency = 25.0; // Example value in miles per gallon
        acceleration = 8.0;    // Example value in seconds to 60 mph
        break;
    case 2:                    // Comfort mode
        fuelEfficiency = 20.0; // Example value in miles per gallon
        acceleration = 6.0;    // Example value in seconds to 60 mph
        break;
    case 3:                    // Sport mode
        fuelEfficiency = 15.0; // Example value in miles per gallon
        acceleration = 4.0;    // Example value in seconds to 60 mph
        break;
    default:                  // Default case should not be hit due to prior validation
        fuelEfficiency = 0.0; // Unset value
        acceleration = 0.0;   // Unset value
        break;
    }

    // Display adjusted vehicle parameters
    std::cout << "Fuel Efficiency: " << fuelEfficiency << " MPG" << std::endl;
    std::cout << "Acceleration: " << acceleration << " seconds to 60 mph" << std::endl;
}
