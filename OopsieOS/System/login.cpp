#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sys/types.h>

using namespace std;
string Username;
string Password;
string directory;

int login() {
  int x;
  
  cout << "1 - Create Account" << '\n';
  cout << "2 - Login" << '\n';
  cout << "0 - Exit" << '\n';
  cout << "> ";

  cin >> x;
  if (x == 0) {

  } if (x == 1) {
    cout << "Enter Username > ";
    cin >> Username;

    directory = "UserContent/" + Username;
    const char * directoryChar = directory.c_str();

    cout << "Enter Password > ";
    cin >> Password;
    const char * password = Password.c_str();

    if (mkdir(directoryChar, 0777) == -1) {
      cerr << "Error :  " << strerror(errno) << endl;

    } else {
      cout << "Account created" << "\n";
      directory = "UserContent/" + Username + "/password"; //Create file that holds password.
      const char * directoryChar = directory.c_str();

      ofstream outfile (directoryChar);

      outfile << password << std::endl;

      outfile.close();
    }

    } if (x == 2) {
      cout << "Enter Username > ";
      cin >> Username;

      cout << "Enter Password > ";
      cin >> Password;

      ifstream input("UserContent/" + Username + "/password");

      for (string line; getline( input, line); ) {
        if (line == Password) {
          cout << "Correct Password" << "\n";


        }
      }
      cout << "\n";

  }

  return 0;
}
