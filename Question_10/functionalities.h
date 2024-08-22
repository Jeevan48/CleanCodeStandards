#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H
#include "vehicle.h"
#include<vector>

using container=std::vector<vehicle>;
//declaration of printData method
void printData(const container &data);

//declaration of create objects method
void createObjects(container &data);

//declaration of add object data method
void addObject(container &data);



#endif // FUNCTIONALITIES_H
