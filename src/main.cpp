#include <string>
#include <iostream>
#include <cstdlib>
#include "board.hpp"

int main(int argc, char** argv) {
    board b = init_board();
    std::string move;
    system("clear");  // TODO: Make os dependent
    while (true) {
        std::cout << "Current board state, make a move:\n";
        print_board(b);
        std::cin >> move;
        system("clear");
    }
    return 0;
}
