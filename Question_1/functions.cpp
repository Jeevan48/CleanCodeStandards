#include "functions.h"

//DEFINATIONS OF VARIOUS METHODS
void createObjects(container &data)
{
    //CREATE OBJECT METHOD
    data.push_back(
        vehicle("Toyota", "Camry", 2019, 2.5, Ttype::Automatic)
    );
    data.push_back(
        vehicle("Honda", "Civic", 2022, 3.5, Ttype::Semi)
    );
    data.push_back(
        vehicle("Ford", "Mustang", 2024, 4.2, Ttype::Semi)
    );
    data.push_back(
        vehicle("Tata", "Punch", 2023, 1.5, Ttype::Manual)
    );
}


void displayObjects(const container &data)
{
    //DISPLAY OBJECT METHOD
    for(const vehicle &v: data)
    {
        std::cout<<v<<std::endl;
    }
}