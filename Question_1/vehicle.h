#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include "Ttype.h"



class vehicle{
    std::string _vehicle_make{""};//MANUFACTURE NAME
    std::string _vehicle_model{""};//MODEL NAME
    unsigned short int _year=0;//YEAR OF MANUFACTURING
    float _engine; // ENGINE POWER IN ltrs.
    enum Ttype _mode;//ENGINE/GEAR TRANSIOTION MODE

    public:

    vehicle()=delete;// DELETE
    vehicle(const vehicle&)=default;//copy- DEFAULT
    vehicle(vehicle&&)=default;//move- DEFAULT
    vehicle &operator=(const vehicle &)=default;//= operator overload for copy- DEFAULT
    vehicle &operator=( vehicle &&)=default;// =operator overload for move- DEFAULT
    ~vehicle() {}
    /******************************/

    
    //PARAMETERISED CONSTRUCTOR FOR VEHICLE CLASS
    vehicle(const std::string &make,const std::string &model, const unsigned short int &year, const float &engine, const enum Ttype &mode);

    //GETTER AND SETTER FOR ENGINE POWER
    float engine() const { return _engine; }
    void setEngine(float engine) { _engine = engine; }

    //GETTER OF YEAR OF MANUFACTURING
    unsigned short int year() const { return _year; }
    //GETTER OF VEHICLE MODEL
    std::string vehicleModel() const { return _vehicle_model; }
    //GETTER OF VEHICLE MANUFACTURER
    std::string vehicleMake() const { return _vehicle_make; }

    //<<OPERRATOR OVERLOADED
    friend std::ostream &operator<<(std::ostream &os, const vehicle &rhs);

    

    
};

#endif // VEHICLE_H
