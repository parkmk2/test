// Programming 2D Games
// Copyright (c) 2011 by: 
// Charles Kelly
// Game Engine Part 1
// Chapter 4 spacewar.cpp v1.0
// Spacewar is the class we create.

#include "shooting.h"

//=============================================================================
// Constructor
//=============================================================================
Shooting::Shooting()
{}

//=============================================================================
// Destructor
//=============================================================================
Shooting::~Shooting()
{
    releaseAll();           // call onLostDevice() for every graphics item
}

//=============================================================================
// Initializes the game
// Throws GameError on error
//=============================================================================
void Shooting::initialize(HWND hwnd)
{
    Game::initialize(hwnd); // throws GameError

    return;
}

//=============================================================================
// Update all game items
//=============================================================================
void Shooting::update()
{}

//=============================================================================
// Artificial Intelligence
//=============================================================================
void Shooting::ai()
{}

//=============================================================================
// Handle collisions
//=============================================================================
void Shooting::collisions()
{}

//=============================================================================
// Render game items
//=============================================================================
void Shooting::render()
{}

//=============================================================================
// The graphics device was lost.
// Release all reserved video memory so graphics device may be reset.
//=============================================================================
void Shooting::releaseAll()
{
    Game::releaseAll();
    return;
}

//=============================================================================
// The grahics device has been reset.
// Recreate all surfaces.
//=============================================================================
void Shooting::resetAll()
{
    Game::resetAll();
    return;
}
