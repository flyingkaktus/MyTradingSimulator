#ifndef TRADE_VALUE_KEEPER_H
#define TRADE_VALUE_KEEPER_H

#include <string>
#include <iostream>
#include <fstream>
#include "../libs/json.hpp"

class TVK
{
private:
public:
    void readJSON(std::string filename);
};

#endif