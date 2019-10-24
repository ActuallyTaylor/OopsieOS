#include <iostream>
#include "openFile.cpp"
#include "createFile.cpp"
#include "deleteFile.cpp"
#include "displayFileSystem.cpp"

using namespace std;

int prompt() {

  int x;

  cout << "1 - Display System Version" << '\n';
  cout << "2 - Open File" << '\n';
  cout << "3 - Create File" << "\n";
  cout << "4 - Delete File" << "\n";
  cout << "0 - Exit" << '\n';

  cout << "> ";

  cin >> x;

  if (x == 0) {

  } else if (x == 1) {
    system("clear");

    cout << "Oopsie OS Version 0.5";
    cout <<  '\n'<< '\n';

    prompt();

  } else if (x == 2) {
    system("clear");

    cin.ignore();

    string e;
    cout << "Enter what file you want to open " << "\n";
    displayFileSystem();
    cout << "> ";
    getline(cin, e);

    openFile(e);
    cout <<  '\n'<< '\n';

    prompt();

  } else if (x == 3) {
    system("clear");

    cin.ignore();

    string name, input;
    cout << "Welcome to the file creation. Currently only text files are supported" << "\n";

    cout << "Enter the name of the file you want to create > ";
    getline(cin, name);

    cout << "\n" << "Enter the body of the text > ";

    getline(cin, input);

    createFile(name, input);
    cout <<  '\n'<< '\n';

    prompt();

  } else if (x == 4) {
    system("clear");

    cin.ignore();

    string inputDel;
    cout << "Please enter file you want to be deleted > ";
    getline(cin, inputDel);

    deleteFile(inputDel);

    cout <<  '\n'<< '\n';
    prompt();

  }

  return 0;

}
