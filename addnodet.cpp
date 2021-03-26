#include <string>
#include <fstream>
#include "cpluspluslabs.h"

using namespace std;

void add_node_tail(NODE** data, string firstname,string lastname, string email) {
    NODE* temp = new NODE;
    temp->firstname = firstname;
    temp->lastname = lastname;
    temp->email = email;
    temp->next = NULL;

    if(!*data) {
        *data = temp;
        return;
    } else { 
        NODE* last = *data;
        while(last->next) {
            last=last->next;
        }
        last->next = temp;
    }
}