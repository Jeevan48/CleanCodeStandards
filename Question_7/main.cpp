#include <iostream>
#include <iomanip> 
double timeInHours(int16_t hours, int16_t minutes, int16_t seconds)
{
    return static_cast<double>(hours) + (static_cast<double>(minutes) / 60.0) + (static_cast<double>(seconds) / 3600.0);
}

// Function to calculate speed in kilometers per hour
double calculateSpeedKPH(double distance, double timeHours)
{
    return distance / timeHours;
}

// Function to convert kilometers per hour to miles per hour

double convertKPHToMPH(double speedKPH)
{
    const double KPH_TO_MPH = 0.621371;
    return speedKPH * KPH_TO_MPH;
}

// Function to convert kilometers per hour to meters per second
double convertKPHToMPS(double speedKPH)
{
    const double KPH_TO_MPS = 1000.0 / 3600.0;
    return speedKPH * KPH_TO_MPS;
}

// question 7
int main()
{
    double distance = 0.0;
    int16_t hours = 0;
    int16_t minutes = 0;
    int16_t seconds = 0;

    std::cout << "Enter the distance in kilometers: ";
    std::cin >> distance;

    std::cout << "Enter time taken -\n";
    std::cout << "Hours: ";
    std::cin >> hours;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    std::cout << "Seconds: ";
    std::cin >> seconds;

    bool errorOccurred = false;

    // Validate inputs
    if ((distance < 0.0) || (hours < 0) || (minutes < 0) || (minutes >= 60) || (seconds < 0) || (seconds >= 60))
    {
        std::cout << "Invalid input values." << std::endl;
        errorOccurred = true;
    }

    double timeHours = 0.0;
    if (!errorOccurred)
    {
        timeHours = timeInHours(hours, minutes, seconds);

        // Prevent division by zero
        if (timeHours == 0.0)
        {
            std::cout << "Time cannot be zero." << std::endl;
            errorOccurred = true;
        }
    }

    if (!errorOccurred)
    {
        double speedKPH = calculateSpeedKPH(distance, timeHours);
        double speedMPH = convertKPHToMPH(speedKPH);
        double speedMPS = convertKPHToMPS(speedKPH);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "\nSpeed in kilometers per hour: " << speedKPH << " km/h" << std::endl;
        std::cout << "Speed in miles per hour: " << speedMPH << " mph" << std::endl;
        std::cout << "Speed in meters per second: " << speedMPS << " m/s" << std::endl;
    }

    return (errorOccurred ? 1 : 0);
}