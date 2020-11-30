#pragma once

#ifndef _BOT_H
#define _BOT_H

#include <vector>

class bot : public BoardPosition {

	//array to know possible positions of mill
	std::array<int, 3> possibleMillPos;		

public:
	//constructors
	//on calling constructor, bot should know board pos and available mill pos
	bot();
	bot(std::array<int, 3> possibleMillPos);

	//send true to getIsAI() in Player class

	bool isItValid();
	//positions

	int nextPossiblePos(int nextPos);
	//determine if it can go to next available position. (Check next position by isItValid()?)



};

#endif // !_BOT_

