#pragma once
#include <iostream>
#include <vector>

using namespace std;

class player {
	//player 1 or player 2
	int id;
	//amount of pieces player has to place on board
	int pieces;

public:
	//vector contains representation of players pieces on the board
	//24 possible piece locations, [1, 24] would represent a piece on first and last board location
	vector<int>piecePos;


//constructor 
	player(int id) {
		this->id = id;
		pieces = 9;
	}

//getters
	int getId() {
		return id;
	}
	int getPieces() {
		return pieces;
	}
	vector<int> getPiecePos(){
		return piecePos;
	}

//update methods
	//avaible piece to board
	void placePiece(int pos) {
		pieces--;
		piecePos.push_back(pos);
	}

	//take piece from board after mill
	void removePiece(int pos) {
		piecePos.erase(std::find(piecePos.begin(), piecePos.end(), pos)); //search vector for position and remove it
	}

	//moving pieces already on board
	void movePiece(int pos1, int pos2) { //piece from position1 to position 2
		removePiece(pos1);
		piecePos.push_back(pos2);
	}



};