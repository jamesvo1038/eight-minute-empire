#include "MapLoader.h"
using namespace std;

int main () {

    // Create Loader instance with invalid file name
    Loader my_map("no_file.map");
    my_map.readFile();

    // Set loader to non map file
    my_map.setFileName("not_a_map.txt"); 
    my_map.readFile();

    // Set loader to map file
    my_map.setFileName("example.map"); 
    my_map.readFile();

  return 0;
}