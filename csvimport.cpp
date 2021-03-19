#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename) {
    std::ifstream inFile;
    inFile.open(filename);
    string show, show2;
    for (int i = 0 ; i < *records; i++){
      inFile >> show;
      for (int j = 0; j < columns; j++){
        show2 = show.substr(j, show.find(','));
        data[i][j] = show2;
      }
    }
}

int main () {
  string data[10][10];

  int records;  

  csv_import(data,3,&records,"text.csv");

  cout << data[0][0];
}