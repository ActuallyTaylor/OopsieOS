#include <iostream>
#include "prompt.h"
#include <fstream>
#include <string>
#include "boot.h"

using namespace std;

int main() {
  boot();
  system("clear");

  cout << " ____  ____  ____  ____  _  _____     ____  ____ " << '\n';
  cout << "/  _ \\/  _ \\/  __\\/ ___\\/ \\/  __/    /  _ \\/ ___\\" << '\n';
  cout << "| / \\|| / \\||  \\/||    \\| ||  \\      | / \\||    \\" << '\n';
  cout << "| \\_/|| \\_/||  __/\\___ || ||  /_     | \\_/|\\___ |" << '\n';
  cout << "\\____/\\____/\\_/   \\____/\\_/\\____\\    \\____/\\____/" << '\n';
  cout << "\n";

  cout << "Starting Oopsie OS..." << '\n';
  cout << "\n";

  prompt();

  return 0;

}
