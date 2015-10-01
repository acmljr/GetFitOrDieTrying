/*
* MainGame.cpp
* GameDevelopmentProject
* Created by Leonardo Winter Pereira on 10.09.2015
* Copyright (c) Leonardo Winter Pereira. All rights reserved.
*/

#include <iostream>
#include <stdexcept>
#include <string>

#include "MainGame.h"
#include <WPGE/WPGE_Errors.h>

MainGame::MainGame() : // this is a constructor initializer (does the same as _screenWidth = 1440, for example
	_screenWidth(1440),
	_screenHeight(900),
	_gameState(GameState::PLAY),
	_maxFPS(60.0f),
	_time(0.0f)
{ }

MainGame::~MainGame() { }

auto MainGame::run() -> void
{

}

auto MainGame::initSystem() -> void
{

}

auto MainGame::initShaders() -> void
{

}

auto MainGame::gameLoop() -> void
{

}

auto MainGame::processInput() -> void
{

}

auto MainGame::drawGame() -> void
{

}

auto MainGame::calculateFPS() -> void
{

}