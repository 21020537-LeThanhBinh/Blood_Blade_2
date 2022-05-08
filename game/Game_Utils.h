#pragma once
#ifndef GAME_UTILS_H_
#define GAME_UTILS_H_

#include "Game_Base.h"
#include "Tile.h"

bool init();
bool loadMedia(Tile* tiles[]);
void close(Tile* tiles[]);

void increaseAlpha(Uint8& alpha, const int& n);

void updateNumOfEnemy(const int& score, int& numOfEnemy1, int& numOfEnemy2, int& numOfEnemy3);

void gamePauseScreen();

void rankCalculation(const int& score, int& rank, int gData[]);

void gameEndScreen(const int& rank);

#endif