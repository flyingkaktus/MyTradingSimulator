#include "headers/trade_value_keeper.h"

using json = nlohmann::json;

void TVK::readJSON(std::string filename)
{

    std::ifstream file(filename);
    json data;
    file >> data;

    std::string name = data["name"];
    int age = data["age"];
    std::vector<std::string> interests = data["interests"];

    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Interests: " << std::endl;
    for (const auto &interest : interests)
    {
        std::cout << " - " << interest << std::endl;
    }
}