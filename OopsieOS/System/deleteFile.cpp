#include <iostream>
#include <cstdio>

using namespace std;
int deleteFile(string file)
{
  file = "UserContent/" + file;
  const char * filename = file.c_str();

	/*	Deletes the file if exists */
	if (remove(filename) != 0) {
    perror("File deletion failed");

  }	else {
    cout << "File deleted successfully";

  }

  cout << "\n";
	return 0;
}
