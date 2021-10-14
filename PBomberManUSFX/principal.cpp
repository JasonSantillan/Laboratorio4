#include <iostream>
#include "GameManager.h"
//#include "Bomberman.h"
//#include "GameObject.h"
//#include "GameActor.h"
//#include "Detonador.h"


//----------------------------------------------------------------------------------------------------
//IMPLEMENTACIÓN DE LA CLASE PILA

//se implementó la clase pila en las siguientes direcciones

//Bomberman.h -> Linea 4, 14
//Bomberman.cpp -> Linea 34,38,42,46

// La clase Pila almacena las Direcciones que se realizan durante el juego, se puede comprobar ejecutando
// el juego, cada vez que se realiza un movimiento se muestra en el CMD que la pila almacenó el movimiento realizado




using namespace std;

int main(int argc, char* args[])
{
	GameManager* gm01 = new GameManager();
	
	return gm01->onExecute();
}