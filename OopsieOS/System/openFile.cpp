#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int openFile(string e) {

  ifstream input("UserContent/" + e);
  cout << "File Content > > > ";

  for (string line; getline( input, line); ) {
      cout << line << "\n";
  }

  return 0;
}
