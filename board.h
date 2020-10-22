#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<typeinfo>
#include<array>
#include<chrono>
#include<thread>

using namespace std;

class Board {
	/*
		The board I am creating is of vertices and edges. Vertices are intersecting points on the board -0 to 23- in rows top to bottom and left-right.
		edges are  connection between points
	*/
	std::array<int, 24> vertices = { {0} };
	std::array<std::array<int, 2>, 32> edges = { {
		{{0,1}},
		{{0,9}},
		{{1,2}},
		{{1,4}},
		{{2,14}},
		{{3,10}},
		{{3,4}},
		{{4,5}},
		{{4,7}},
		{{5,13}},
		{{6,7}},
		{{6,11}},
		{{7,8}},
		{{8,12}},
		{{9,10}},
		{{9,21}},
		{{10,11}},
		{{10,18}},
		{{11,15}},
		{{12,13}},
		{{12,17}},
		{{13,14}},
		{{13,20}},
		{{14,23}},
		{{15,16}},
		{{16,17}},
		{{16,19}},
		{{18,19}},
		{{19,20}},
		{{19,22}},
		{{21,22}},
		{{22,23}}

} };

	/*
		possible_mills are the all combination of mills on the board. This array can be used to determine the mills.
	*/

	std::array<std::array<int, 3>, 16> possible_mills = { {
		{{0,1,2}},
		{{0,9,21}},
		{{1,4,7}},
		{{2,14,23}},
		{{3,4,5}},
		{{3,10,18}},
		{{5,13,20}},
		{{6,7,8}},
		{{6,11,15}},
		{{8,12,17}},
		{{9,10,11}},
		{{12,13,14}},
		{{15,16,17}},
		{{16,19,22}},
		{{18,19,20}},
		{{21,22,23}}

} };

	const char* gamerules[3] = {

	};

	player * player;

	int turn; //current turn of player
	int mill_detected;	//detects mill
	int games_won, games_lost;	//count for wins and loss

public slots:

	/*
	for the intersecting points on the board.
	should contain the logic of what will happen when player selects the points.
	*/

	void point_selected(int pos);

	void restart();

public:

	Board();		//constructor

	void in_game();		//setters
	void in_game(player * player);
	void in_turn();

	bool add_piece(int pos, player * player);
	bool rmv_piece(int pos, player * player);
	bool move_piece(int pos_1, int pos_2, player* player);
	//bool move_piece_free(int pos_1, int pos_2, player* player);

	bool is_connected(int pos_1, int pos_2);		//check if 2 positions are connected, return true if connected
	bool has_legal_move(player * player);			//check if player has legal moves left
	bool detect_mill(int pos);						//check for mill, if its formed, update mill_detected
	//void chk_broken_mill(int pos, int p);			//check if mill is broken or pieces are moved
	void end_game(player * losing_player);



};

