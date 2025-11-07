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

 uint64_t num_sets = stoull(argv[1]);
 uint64_t associativity = stoull(argv[2]);
 string input_file = argv[3];


if (num_sets == 0 || associativity == 0 || (num_sets % associativity) != 0) {
        cerr << "num_sets must be > 0 and divisible by associativity.\n";
        return 1;
    }

uint64_t num_sets = num_entries / associativity;

vector<vector<Line>> cache(num_sets, vector<Line>(associativity));
vector<size_t> next_victim(num_sets, 0);

ifstream in(input_file);
    if (!in) {
        cerr << "Could not open input file.\n";
        return 1;
    }

 ofstream out("cache_sim_output");
    if (!out) {
        cerr << "Could not open output file.\n";
        return 1;
    }

    
