#include"board.h"

board::board() {
	
	h_player = new h_player;
	turn = 1;
	mill_detected = 0;
	games_won = 0;
	games_lost = 0;

	void::board::in_turn() {
		turn++;
		//update turn label
	}

	void::board::in_game() {
		//update game states
	}

	void::board::in_game(player* player) {
		int p = player->getID();	//player ID
		//update labels. game started / player move
	}

	void::board::point_selected(int pos) {

		if (!add_piece(pos, h_player))
			return;
		if (mill_detected == h_player_id) {
			return;
		}break;
	}

	bool board::add_piece(int pos, player* player) {
		if (vertices[pos] != 0) {
			//error msg
			return false;
		}
	}

	bool board::rmv_piece(int pos, player * player) {
		if (vertices[pos] != player->getID()) {
			//error msg
			return false;
		}
	}

	bool board::move_piece(int pos_1, int pos_2, player* player) {
		bool connected = is_connected(pos_1, pos_2);
		int p = player->getID();

		//check legal move
		if (vertices[pos_1] != || vertices[pos_2] != 0 || !connected) {
			//error msg
			return false;
		}
	}

	bool board::has_legal_move(player* player) {
		vector<int> pieces_on_board; // player->get_pieces_on_board;

		for (vector<int>::iterator it = pieces_on_board.begin(); it != pieces_on_board.end(); it++) {
			int piece_nr = *it;

			for (int i = 0;i < 24;i++) {
				//check all vertices that are empty
				if (vertices[i] == 0) {
					if (is_connected(i, piece_nr)) {
						return true;
						//if they're connected there is legal move
					}
				}
			}
			return false;
		}
	}

	bool board::is_connected(int pos_1, int_2) {
		for (int i = 0; i < 32:i++) {
			if (edges[i][0] == min(pos_1, pos_2) && edges[i][1] == max(pos_1, pos_2)) {
				return true;
			}
		}
		return false;
	}

	void board::detect_mill(int pos) {
		int p = 0;
		int point1, point2, point3;

		for (int i;i < 16; i++) {
			point1 = possible_mill_pos[i][0];
			point2 = possible_mill_pos[i][1];
			point3 = possible_mill_pos[i][2];


			//check if pos is involved in mill
			if (point1 == pos || point2 == pos || point3 == pos) {

				//check points of mill by single player
				if (vertices[point1] != 0 && vertices[point1] == vertices[point2] && vertices[point2] == vertices[point3]) {
					
					//which player formed mill
					p = vertices[point1];
				}
			}
		}
	}

	void board::end_game(player* losing_player) {
		//show labels of win and lose
		//set false on intersections/ points
		//clear the board
	}

}
	