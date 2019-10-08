#include <iostream>
#include <fstream>
#include <string>
#include "MapLoader.h"
using namespace std;

Loader::Loader(string file)
{
  map_file = file;
}

void Loader::setFileName(string file)
{
  map_file = file;
}

void Loader::readFile()
{
  cout << "\nAbout to read file: "  << map_file << endl;;
  string line;
  ifstream myfile (map_file);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file\n";
}