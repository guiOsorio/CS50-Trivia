#include "Player.h"

// From Instructions.cpp
void display_instructions();

// From Game.cpp
void play_game(Player player);
bool ask_to_play();


int main() {
	bool play_again {true};
	do
	{
		Player player(3, 0, 0);
		display_instructions();
		play_game(player);
		play_again = ask_to_play();
	} while (play_again == true);
	return 0;
}