// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// Chapter 4 spacewar.h v1.0

#ifndef _SHOOTING_H             // prevent multiple definitions if this 
#define _SHOOTING_H             // ..file is included in more than one place
#define WIN32_LEAN_AND_MEAN

#include "game.h"

//=============================================================================
// Create game class
//=============================================================================
class Shooting : public Game
{
private:
    // variables

public:
    // Constructor
    Shooting();

    // Destructor
    virtual ~Shooting();

    // Initialize the game
    void initialize(HWND hwnd);
    void update();      // must override pure virtual from Game
    void ai();          // "
    void collisions();  // "
    void render();      // "
    void releaseAll();
    void resetAll();
};

#endif
