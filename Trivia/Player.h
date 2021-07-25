#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player
{
private:
	int xp;
	int score;
	int streak;
public:
	// Constructor
	Player (int xp, int score, int streak);
	
	// Copy constructor
	Player (const Player &source);
	
	// Destructor
	~Player();
	
	// Setters and Getters
	void set_xp(int new_xp) {
		xp = new_xp;
	}
	
	int get_xp() const {
		return xp;
	}
	
	void set_score(int new_score) {
		score = new_score;
	}
	
	int get_score() const {
		return score;
	}
	
	void set_streak(int new_streak) {
		streak = new_streak;
	}
	
	int get_streak() const {
		return streak;
	}
	
	// INCREMENT XP
	void increment_xp() {
		xp += 1;
	}
	
	// DECREMENT XP (by 1 and when the player got an answer wrong)
	void decrement_xp() {
		xp -= 1;
	}
	
	// INCREMENT SCORE (by a max of 30, depends on how long the player took to answer the question)
	void increment_score() {
		score +=5; // TODO
	}
	
	// INCREMENT STREAK (by 1 after every right answer)
	void increment_streak() {
		streak += 1;
	}
	
	// RESET STREAK (if streak is 5, set streak back to 0 and increment xp by 1)
	void reset_streak() {
		streak = 0;
	}
	
	// Displays the Player
	void display() const;
};

#endif