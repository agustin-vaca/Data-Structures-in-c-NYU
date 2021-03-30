#include <iostream>
#include <string>
#include <map>

class ShowTickets {
    using TicketsMap = std::map<std::pair<std::string,std::string>,bool>;
    static TicketsMap tickets; // needs to be defined outside the class
public:
    bool is_sold(std::string row, std::string seat_num){return tickets[{row,seat_num}];}
    void sell_seat(std::string row, std::string seat_num){tickets[{row,seat_num}]=true;}
    std::string print_ticket(std::string row, std::string seat_num) {
        return row + " " + seat_num + " " + (tickets[{row,seat_num}]?"sold":"available");
    }
};

ShowTickets::TicketsMap ShowTickets::tickets;