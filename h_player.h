#pragma once
#ifndef _H_PLAYER_H
#define _H_PLAYER_H

//Human player header file

#define H_PLAYER_ID 1;		//default id: 1

#include<iostream>
#include"player.h"

using namespace std;

class h_player : public player {

public:
	h_player();

	int getID();
};

#endif