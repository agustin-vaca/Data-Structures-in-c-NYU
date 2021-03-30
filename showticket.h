#include <string>

using namespace std;

class ShowTicket { 
  protected:        
    string row; 
    string seat;
    bool sold; 
  public:  
    ShowTicket(string Row, string Seat) {
        row = Row;
        seat = Seat;
        sold = false;
    }
    bool is_sold();
    void sell_seat();
    string print_ticket();
};

bool ShowTicket::is_sold(){
    return sold;
}
void ShowTicket::sell_seat(){
    sold = true;
}
string ShowTicket::print_ticket(){
    string soldText;
    if (sold){
        soldText = "sold";
    }
    else {
        soldText = "available";
    }
    
    return row + " " + seat + " " + soldText;
}