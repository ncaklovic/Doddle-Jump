#pragma once

#include <SFML/Graphics.hpp>
#include <time.h>
#include <iostream>
#include "Point.h"

class Player
{
public:
	int width;
	int height;
	float dy;
	int distinct;
	Point *platformPosition;

public:
	Point playerPosition;
	void playerActions();
	void playerJump();
	void movePlayerScreen();
	void playerCollision();
	void movePlayer();
public:
	Player(Point *p);
	void setInfo(int width, int height, int distinct, int deltaY);
	~Player();
};

