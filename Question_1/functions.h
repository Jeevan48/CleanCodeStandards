#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "vehicle.h"
#include<vector>

//DECLARATION OF VARIOUS FUNCTIONS
//TYPEDEF OR USING FOR SHORT HAND NOTATION
using container=std::vector<vehicle>;

//DISPLAY OBJECT METHOD
void displayObjects(const container &data);
//CREATE OBJECTS METHOD
void createObjects(container &data);

#endif // FUNCTIONS_H
