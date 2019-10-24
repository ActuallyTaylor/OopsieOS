#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int createFile(string name, string input) {

  ofstream outfile ("UserContent/" + name);

  outfile << input << std::endl;

  outfile.close();

  return 0;
}
