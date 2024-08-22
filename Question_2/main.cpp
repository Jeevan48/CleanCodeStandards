#include <iostream>
 
bool VIN_Validator(const std::string &VIN)
{
    bool ans = true;
    // Checking the length of VIN
    if (static_cast<int>(VIN.length()) < 17)
    {
        ans = false;
    }
    // Checking for valid country code
    if (std::isalpha(VIN[0]) == 1)
    {
        ans = false;
    }
    // Checking for valid Manufacturer
    if (!std::isalpha(VIN[1]))
    {
        ans = false;
    }
    // Checking for valid Vehicle type
    if (std::isalpha(VIN[2]) == 1)
    {
        ans = false;
    }
    // Checking for valid BodyType
    if (!std::isalpha(VIN[3]))
    {
        ans = false;
    }
    // Checking for valid Engine
    if (!std::isalpha(VIN[4]))
    {
        ans = false;
    }
    // Checking for valid series
    if (std::isalpha(VIN[5]) == 1)
    {
        ans = false;
    }
    // Checking for valid restraint
    if (std::isalpha(VIN[6]) == 1)
    {
        ans = false;
    }
    // Checking for valid Model
    if (!std::isalpha(VIN[7]))
    {
        ans = false;
    }
    // Checking for valid digit
    if (std::isalpha(VIN[8]) == 1)
    {
        ans = false;
    }
    // Checking for valid Model year
    if (!std::isalpha(VIN[9]))
    {
        ans = false;
    }
    // Checking for valid plant
    if (std::isalpha(VIN[10]) == 1)
    {
        ans = false;
    }
    // Checking for valid serial number of vehicle
    if (std::isalpha(VIN[11]) || std::isalpha(VIN[12]) || std::isalpha(VIN[13]) || std::isalpha(VIN[14]) || std::isalpha(VIN[15]) || std::isalpha(VIN[16]))
    {
        ans = false;
    }
 
    return ans;
}
 
int main(void)
{
    // String for validating VIN
    const std::string VIN = "1G1YZ23J9P5803427";
 
    // Calling function for validating the VIN
    (((VIN_Validator(VIN) == 1) ? std::cout<<"Validated successfully\n" : std::cout<<"Validation Falied\n"));
 
    return 0;
}