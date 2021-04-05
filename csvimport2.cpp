
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>
#include "cpluspluslabs.h"

using namespace std;

void csv_import2(NODE** data, string filename){
    std::ifstream inFile;
    inFile.open(filename);
    string show;
    while (inFile >> show){
        NODE* temp = new NODE;
        std::vector<string> vect;

        std::stringstream ss(show);

        while( ss.good() ){
            string substr;
            getline( ss, substr, ',' );
            vect.push_back( substr );
        }
        temp->firstname = vect[0];
        temp->lastname = vect[1];
        temp->email = vect[2];
        temp->next = NULL;
        if(!*data) {
            *data = temp;
        } else { 
            NODE* last = *data;
            while(last->next) {
                last=last->next;
            }
            last->next = temp;
        }
    }
}