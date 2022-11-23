// basic file operations
/* ios::in	Open for input operations.
ios::out	Open for output operations.
ios::binary	Open in binary mode.
ios::ate	Set the initial position at the end of the file.
If this flag is not set, the initial position is the beginning of the file.
ios::app	All output operations are performed at the end of the file, appending the content to the current content of the file.
ios::trunc	If the file is opened for output operations and it already existed, its previous content is deleted and replaced by the new one.
*/
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile ("example.bin", ios::out | ios::app | ios::binary);

  // how to check if open
  if (myfile.is_open()) { /* ok, proceed with output */ }

  std::cout << "file open success ~ write tbin dats !~ ";

 myfile << "Write bin to file"; 
	myfile.close();
  return 0;
}
