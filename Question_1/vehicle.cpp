#include "vehicle.h"

// DEFINATION OF PARAMETERISED CONSTRUCTOR
vehicle::vehicle(const std::string &make,const std::string &model, const unsigned short int &year, const float &engine, const enum Ttype &mode)
: _vehicle_make{make}, _vehicle_model{model}, _year{year}, _engine{engine}, _mode{mode}
{
    
}



std::ostream &operator<<(std::ostream &os, const vehicle &rhs) {
    
    os << "vehicle make: " << rhs._vehicle_make
       << "\tvehicle model: " << rhs._vehicle_model
       << "\tyear: " << rhs._year
       << "\tEngine: " << rhs._engine;
       if(static_cast<int>(rhs._mode) == 0)
       {
           os << "\tmode: " << "Manual";
       }
       else if(static_cast<int>(rhs._mode) == 1)
       {
           os << "\tmode: " << "Automatic";
       }
       else
       {
            os << "\tmode: " << "Semi-automatic";
       }
       
    return os;
}
