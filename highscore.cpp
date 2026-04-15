// High Score Tracker implementation

#include <iostream>
#include <fstream>
using namespace std;

#include "highscore.h"
#include "constants.h"

HighScore::HighScore()
{
    filename   = HIGHSCORE_FILE;
    high_score = load();
}

// Load the high score from disk
int HighScore::load()
{
    ifstream fin(filename.c_str());
    int stored = 0;
    if (fin.is_open()) {
        fin >> stored;
        fin.close();
    }
    return (stored > 0 ? stored : 0);
}

// Update the high score if new_score beats it; persist to disk
bool HighScore::update(int new_score)
{
    if (new_score > high_score) {
        high_score = new_score;
        ofstream fout(filename.c_str());
        if (fout.is_open()) {
            fout << high_score << endl;
            fout.close();
        }
        return true;
    }
    return false;
}

// Return the stored high score
int HighScore::get()
{
    return high_score;
}

// Print high score to stdout (one line)
void HighScore::print()
{
    cout << "High Score: " << high_score << endl;
}
