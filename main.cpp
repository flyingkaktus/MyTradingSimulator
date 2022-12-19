#include "headers/trade_value_keeper.h"
#include "headers/csv_keeper.h"

int main()
{
    CSVK csvk1;
    csvk1.readCSV("csv/testfile.csv");
    std::cout << "Testlauf" << std::endl;

    TVK tvk1;
    tvk1.readJSON("json/test.json");

    return 0;
}
