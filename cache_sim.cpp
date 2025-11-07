#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdint>
using namespace std;

struct Line {
    bool valid = false;
    uint64_t tag = 0;
};

int main(int argc, char* argv[]){
    if (argc!= 4){
        cerr << "Usage: " << argv[0] << " <num_entries> <associativity> <input_file>\n";
    return 1;
    }
}