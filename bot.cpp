#include "bot.h"

bot::bot() {

}

bot::bot(std::array<int, 3> possibleMillPos) {
	this->possibleMillPos = possibleMillPos;
}

/*
Player(ID, true); 

bot ID and true for isAI
*/

//count pieces in the mill placed by the human and the bot

aiPieces = 0;
humanPieces = 0;

for (int i = 0; i < 3; i++)
{
    if (vertices[points[i]] == playerID)
    {
        playerPiece++;
    }
    else if (vertices[points[i]] == botID)
    {
        botPiece++;
    }
}



