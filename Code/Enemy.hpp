/************************************************************************
* Programmers: Subham, Ryan, Danielle, Manjesh                          *
* Class: CptS 122                                                       *
* Programming Assignment: PA 9 - Space Invaders                         *
* Date: 4/17/2021                                                       *
* Description: This program emulates space invaders.                    *
************************************************************************/

#pragma once

#include "Character.hpp"

class Enemy : public Character 
{
public:
	Enemy(const Vector2f& pos, const Texture& texture, const Vector2f& scale) : Character(pos, texture, scale) {
		alive = true;
	}
	bool isAlive();
	void kill();
	void reset();

private:
	bool alive;
};