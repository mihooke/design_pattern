#include "template.h"

int main()
{
	Game *game = new Tank;
	game->PlayOneGame(6);
	
	game = nullptr;
	game = new Chess;
	game->PlayOneGame(8);
	return 0;
}