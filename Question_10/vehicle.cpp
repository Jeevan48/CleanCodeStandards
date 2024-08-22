#include "vehicle.h"
std::ostream &operator<<(std::ostream &os, const vehicle &rhs) {
    //defination of insertioni operator overloading
    os << "make: " << rhs.make
       << "\tmodel: " << rhs.model
       << "\tyear: " << rhs.year
       << "\tprice: " << rhs.price<< " lcs.";
    return os;
}

