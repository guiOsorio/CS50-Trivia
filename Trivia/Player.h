#ifndef _MOVIE_H_
#define _MOVIE_H_

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
	
	// INCREMENT XP (by 1 and when streak is 5, set streak back to 0)
	// DECREMENT XP (by 1 and when the player got an answer wrong)
	// INCREMENT SCORE (by a max of 30, depends on how long the player took to answer the question)
};

#endif