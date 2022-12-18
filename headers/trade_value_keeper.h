#ifndef TRADE_VALUE_KEEPER_H
#define TRADE_VALUE_KEEPER_H

#include <string>
#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <filesystem>

class TVK
{
private:
    clock_t start;
    std::filesystem::path example;
    std::filesystem::path p;

public:
    std::ifstream file;
    void readCSV(std::string filename);
};

#endif