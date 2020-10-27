#pragma once
#ifndef _player_h
#define _player_h
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class player {
protected:
	int id;		//player id

	int pieces;		//player's pieces

	vector<int> pieces_on_board;		//positions of player's pieces on board

public:

	player(int id);		//constructor

	//getters
	int getID();
	int getPieces();
	int get_pieces_on_board();
	vector<int> get_pieces_on_board_vector();

	//setters
	void incPiece();

	void move_piece_to_board(int pos);		//current position of the piece
	void remove_piece(int pos);
	void move_piece_on_board(int pos1, pos2);		//(pos1 where piece moved from, pos2 where pieced move to)

	bool is_out_of_pieces();		//reset player. Can call on Restart Game.

	void reset();
};
