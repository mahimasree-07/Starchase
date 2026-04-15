// High Score Tracker
// Persists the top score to a file (highscore.dat) between sessions.

#ifndef HIGHSCORE_H_INCLUDED
#define HIGHSCORE_H_INCLUDED

#include <string>
using std::string;

class HighScore {
    public:
        HighScore();

        // Load high score from file; returns 0 if file doesn't exist
        int  load();

        // Save high score to file if new_score beats the stored value
        // Returns true if a new high score was set
        bool update(int new_score);

        // Get the current stored high score
        int  get();

        // Display high score line (used in print_board header)
        void print();

    private:
        int  high_score;
        string filename;
};

#endif
