#include "functionalities.h"

void printData(const container &data)
{
    //DISPLAY OBJECT METHOD
    for(const vehicle &v: data)
    {
        std::cout<<v<<std::endl;
    }
}

void createObjects(container &data)
{
    //pushing data into container
    vehicle v2;
    
    v2.setMake("Toyota");
    v2.setModel("Camry");
    v2.setYear(2019);
    v2.setPrice(34.02f);
    data.push_back(v2);
    //******Another object */
    vehicle v3;
    
    v3.setMake("Honda");
    v3.setModel("Civic");
    v3.setYear(2022);
    v3.setPrice(28.82f);
    data.push_back(v3);
   //******Another object */
    vehicle v4;
    
    v4.setMake("Ford");
    v4.setModel("Mustang");
    v4.setYear(2024);
    v4.setPrice(45.55f);
    data.push_back(v4);
   
}

void addObject(container &data)
{
    //Initialising variables
    std::string mke{""};
    std::string mdl{""};
    unsigned short yr=0;
    float pr=0.0;
    //user input values for new object creation
    std::cout<<"Enter data for new vehicle "<<std::endl;
    std::cout<<"Enter Make of vehicle "<<std::endl;
    std::cin>>mke;
    std::cout<<"Enter Model of vehicle "<<std::endl;
    std::cin>>mdl;
    std::cout<<"Enter year of manufacturing of the vehicle "<<std::endl;
    std::cin>>yr;
    std::cout<<"Enter price of the vehicle in lcs."<<std::endl;
    std::cin>>pr;
    //adding object to existing data container
    //******Another object */
    vehicle v5;
    
    v5.setMake(mke);
    v5.setModel(mdl);
    v5.setYear(yr);
    v5.setPrice(pr);
    data.push_back(v5);
    
    std::cout<<"Object added successfully"<<std::endl;
}


