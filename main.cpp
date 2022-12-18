#include "headers/trade_value_keeper.h"

int main()
{
    TVK tvk1;
    tvk1.readCSV("csv/testfile.csv");
    std::cout << "Testlauf" << std::endl;
    return 0;
}
