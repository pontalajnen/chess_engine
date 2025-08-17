#include <string>
#include <iostream>
#include <cstdlib>
#include "move.hpp"

void clear_window() {
    int result = system("clear");  // TODO: Make os dependent
}

int main(int argc, char** argv) {
    board b = init_board();
    std::string move;
    std::string header = "Current position, make a move:";
    clear_window();
    while (true) {
        std::cout << header + "\n";
        print_board(b);
        std::cin >> move;
        if (true) {
            // make_move(b, move);
            header = "Current position, make a move:";
        } else {
            header = "Illegal move, try again:";
            // std::cout << "Illegal move, try again.\n";
        }
        clear_window();
    }
    return 0;
}
