#pragma once
#include <iostream>
#include "GamePawn.h"
#include "Pila.h"

using namespace std;

class Bomberman : public GamePawn
{
private:

public:

	Pila<MoveDirection> pilaMoveDirection;

	//Constructor
	Bomberman(Texture* _textura, Tile* _tileActual);
	void setTileActual(Tile* _tileNuevo) override;

	void update();
	void render();

};

