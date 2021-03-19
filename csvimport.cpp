#include <string>
#include <fstream>

using namespace std;

void csv_import(string data[][10], int columns, int *records, string filename) {
    std::ifstream inFile;
    inFile.open(filename);
    for (int i = 0 ; i < *records; i++){
        for (int j = 0; j < columns; j++){
            if (j == columns - 1){
                getline(inFile, data[i][j]);
            }
            else {
                getline(inFile, data[i][j], ',');
            }
        }
    }
}