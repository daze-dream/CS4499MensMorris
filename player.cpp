#include "player.h"

player::player(int id) {
	pieces = 9;
	this->id = id;
}

int player::getID() {
	return id;
}

int player::getPieces() {
	return pieces
}

int player::get_pieces_on_board() {
	retrun pieces_on_board.size();
}

vector<int> player::get_pieces_on_board_vector() {
	return pieces_on_board;
}

void player::remove_piece(int pos) {
	if (get_pieces_on_board() > 0) {
		pieces_on_board.erase(std::find(pieces_on_board.begin(), pieces_on_board.end(), pos));
	}
}

void player::move_piece_on_board(int pos1, int pos2) {
	remove_piece(pos1);
	pieces++;
	move_piece_to_board(pos2);
}

void player::move_piece_to_board(int pos) {
	if (pieces > 0) {
		pieces--;
		pieces_on_board.push_back(pos);
	}
}

bool player::is_out_of_pieces() {
	return pieces == 0;
}

void player::reset() {
	pieces_on_board.clear();
	pieces = 9;
}