#include <cstdint>

struct board {
    uint64_t white_pieces;
    uint64_t black_pieces;
    uint64_t knights;
    uint64_t pawns;
    uint64_t bishops;
    uint64_t rooks;
    uint64_t queens;
    uint64_t kings;
};

board init_board();
void print_board(const board& b);