#include "board.hpp"
#include <cstdint>
#include <iostream>

board init_board() {
    board b = {};
    b.white_pieces = 0xFFFF000000000000;
    b.black_pieces = 0x000000000000FFFF;
    b.knights      = 0x4200000000000042;
    b.pawns        = 0x00FF00000000FF00;
    b.bishops      = 0x2400000000000024;
    b.rooks        = 0x8100000000000081;
    b.queens       = 0x1000000000000010;
    b.kings        = 0x0800000000000008;
    return b;
}

void print_board(const board& b) {
    for (int i = 0; i < 8; ++i) { // Start from rank 0 (bottom)
        for (int j = 0; j < 8; ++j) {
            uint64_t mask = 1ULL << (i * 8 + j);
            uint64_t white = b.white_pieces & mask;
            if (b.knights & mask) {
                std::cout << (white ? "N " : "n ");
            } else if (b.pawns & mask) {
                std::cout << (white ? "P " : "p ");
            } else if (b.bishops & mask) {
                std::cout << (white ? "B " : "b ");
            } else if (b.rooks & mask) {
                std::cout << (white ? "R " : "r ");
            } else if (b.queens & mask) {
                std::cout << (white ? "Q " : "q ");
            } else if (b.kings & mask) {
                std::cout << (white ? "K " : "k ");
            } else {
                std::cout << ". ";
            }
        }
        std::cout << "\n";
    }
}