// Terminal functions

#ifndef TERMFUNCS_H
#define TERMFUNCS_H

const char      KEY_UP    = 65;   // Arrow Up    (after ESC [)
const char      KEY_DOWN  = 66;   // Arrow Down  (after ESC [)
const char      KEY_LEFT  = 68;   // Arrow Left  (after ESC [)
const char      KEY_RIGHT = 67;   // Arrow Right (after ESC [)
const char      ESCAPE    = 27;

// These are the mapped values returned by getachar / getacharnow
// for arrow keys - chosen to not clash with printable ASCII
const char      ARROW_UP    = (char)130;
const char      ARROW_DOWN  = (char)131;
const char      ARROW_LEFT  = (char)132;
const char      ARROW_RIGHT = (char)133;

#include <string>

using std::string;

char getachar();
char getacharnow(int);
void screen_clear();
void screen_home();

int  random_int(int, int);
void seed_random(int);

#endif
