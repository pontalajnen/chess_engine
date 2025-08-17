#include <string>
#include <vector>
#include "board.hpp"


std::vector<std::string> get_legal_moves(const std::string &move);
void make_move(board &b, const std::string &move);