#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
class vehicle
{
    std::string make;    
    // make of vehicle
    std::string model;   
    // model name
    unsigned short year; 
    // year of manufacturing
    float price;         
    // price of car in lcs

public:
    vehicle() = default;                            
    // DELETE
    vehicle(const vehicle &) = default;            
    // copy- DEFAULT
    vehicle(vehicle &&) = default;                 
    // move- DEFAULT
    vehicle &operator=(const vehicle &) = default; 
    //= operator overload for copy- DEFAULT
    vehicle &operator=(vehicle &&) = default;      
    // =operator overload for move- DEFAULT
    ~vehicle() {}
    //destructor

    // vehicle(const std::string &mke, const std::string &mdl, unsigned short yr, float pr);
    // // parameterised constructor

    std::string getMake() const { return make; }             
    // getter- make
    void setMake(const std::string &make_) { make = make_; } 
    // setter- make

    std::string getModel() const { return model; }               
    // getter- model
    void setModel(const std::string &model_) { model = model_; } 
    // setter- model

    unsigned short getYear() const { return year; }      
    // getter- year
    void setYear(unsigned short year_) { year = year_; } 
    // setter- year

    float getPrice() const { return price; }        
    // getter- price
    void setPrice(float price_) { price = price_; } 
    // setter- price

    friend std::ostream &operator<<(std::ostream &os, const vehicle &rhs);
    // insertion operator overloading
};

#endif // VEHICLE_H
