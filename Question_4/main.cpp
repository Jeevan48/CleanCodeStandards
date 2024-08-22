#include <iostream>
// Declare variables for user inputs
static double l_tirePressure;
static double l_oilLevel;
static double l_breakPadThickness;

void Q4_checkVehicleCondition(void)
{
    // Define acceptable range values for the vehicle conditions
    static const double l_minTirePressure = 30.0;     // Minimum acceptable tire pressure in PSI
    static const double l_maxTirePressure = 35.0;     // Maximum acceptable tire pressure in PSI
    static const double l_minOilLevel = 3.50;         // Minimum acceptable oil level
    static const double l_minBreakPadThickness = 5.0; // Minimum acceptable break pad thickness in mm
    // Define condition of vehicle based on inputs
    static bool l_isTirePressureAcceptable;
    static bool l_isOilLevelAcceptable;
    static bool l_isBreakpadThicknessAcceptable;
    // Check each parameter for vehicle condition
    l_isTirePressureAcceptable = (l_tirePressure >= l_minTirePressure) && (l_tirePressure <= l_maxTirePressure);
    l_isOilLevelAcceptable = l_oilLevel > l_minOilLevel;
    l_isBreakpadThicknessAcceptable = l_breakPadThickness > l_minBreakPadThickness;

    if (!l_isTirePressureAcceptable)
    {
        std::cout << "Tire Pressure not Acceptable" << std::endl;
    }
    else
    {
        std::cout << "Tire Pressure Acceptable" << std::endl;
    }

    if (!l_isOilLevelAcceptable)
    {
        std::cout << "Oil level is not Acceptable" << std::endl;
    }
    else
    {
        std::cout << "Oil level Acceptable" << std::endl;
    }

    if (!l_isBreakpadThicknessAcceptable)
    {
        std::cout << "Breakpad Thickness is not Acceptable" << std::endl;
    }
    else
    {
        std::cout << "Breakpad Thickness Acceptable" << std::endl;
    }
}

int main(void)
{

    // User input prompts
    std::cout << "Enter Tire pressure of Vehicle (in PSI): ";
    std::cin >> l_tirePressure;

    std::cout << "Enter Oil Level of Vehicle (in Liters): ";
    std::cin >> l_oilLevel;

    std::cout << "Enter Breakpad thickness (in mm): ";
    std::cin >> l_breakPadThickness;

    // check vehicle conditions
    Q4_checkVehicleCondition();

    return 0;
}
