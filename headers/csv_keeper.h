#ifndef CSV_KEEPER_H
#define CSV_KEEPER_H

#include <iostream>
#include <string>
#include <fstream>
#include <memory>
#include <filesystem>

class CSVK
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