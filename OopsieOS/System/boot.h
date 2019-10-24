#include <iostream>
#include <fstream>
#include <string>
#include <random>
#include <unistd.h>

using namespace std;

int boot() {

  ifstream input("bootTxt.txt");

  for (string line; getline( input, line); ) {
      usleep(rand() % 100000  + 100);
      cout << line << "\n";
  }
  return 0;
}
