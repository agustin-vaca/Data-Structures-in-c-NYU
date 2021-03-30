#include<string>
#include<iostream>

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
    virtual string print_ticket();
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

class SportTicket:public ShowTicket {
    private:
        bool beersold;
    public:
        SportTicket(string Row, string Seat)
            : ShowTicket{Row, Seat},
                beersold{false}
        {
        }    
        bool beer_sold();
        void sell_beer();
        string print_ticket();
};

bool SportTicket::beer_sold(){
    return beersold;
}

void SportTicket::sell_beer(){
    beersold = true;
}

string SportTicket::print_ticket(){
    string soldText;
    if (sold){
        soldText = "sold";
    }
    else {
        soldText = "available";
    }
    string beerText;
    if (beersold){
        beerText = "beer";
        return row + " " + seat + " " + soldText + " " + beerText;
    }
    else {
        return row + " " + seat + " " + soldText;
    }
}

class TicketSales {
    public:
        string print_ticket(ShowTicket *myticket);
};

string TicketSales::print_ticket(ShowTicket *myticket){
    string text = myticket->print_ticket();
    return text;
}