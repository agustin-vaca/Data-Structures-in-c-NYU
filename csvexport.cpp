#include <string>
#include <fstream>

using namespace std;

void csv_export(string data[][10], int records,int columns, string filename){
    std::ofstream myfile;
    myfile.open (filename);
    for (int i = 0; i < records; i++){
        for (int j = 0; j < columns; j++){
            if (j == columns - 1 && i == records - 1){
                myfile << data[i][j];
            }
            else if (j == columns - 1){
                myfile << data[i][j] << endl;
            }
            else {
                myfile << data[i][j] << ",";
            }    
        }
    }
}