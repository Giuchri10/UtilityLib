#ifndef library_H
#define library_H

#include "lib-u.h"

std::string cbit(long long int dec){
    std::string bin;
    while (dec != 0)
    {
        bin = bin+std::to_string(dec % 2);
        dec = dec/2;
    }
    return bin;
}

#endif