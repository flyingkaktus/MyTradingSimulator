#include "headers/trade_value_keeper.h"

using namespace std;
namespace fs = std::filesystem;

void TVK::readCSV(string filename)
{
    clock_t start = clock();

    // Open the file for reading
    ifstream file(filename, ios::binary);

    fs::path example = filename;
    fs::path p = fs::current_path() / example;

    if (!file)
    {
        cerr << "Error opening file!" << endl;
    }

    // Get the size of the file
    auto file_size = fs::file_size(p);
    cout << p << endl;
    // Allocate a buffer to hold the file contents
    auto storage = make_unique<ifstream::char_type[]>(file_size);

    // Read the entire file into the buffer
    file.read(storage.get(), file_size);

    // Print the contents of the buffer
    cout << storage.get() << endl;

    file.close();

    clock_t end = clock();
    double elapsed_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
    std::cout << "Elapsed time: " << elapsed_time << " seconds" << std::endl;
}