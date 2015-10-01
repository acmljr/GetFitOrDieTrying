/*
* MainGame.h
* GameDevelopmentProject
* Created by Leonardo Winter Pereira on 5.09.2015
* Copyright (c) Leonardo Winter Pereira. All rights reserved.
*/

#pragma once

#include <SDL/SDL.h>
#include <GL/glew.h>

#include <WPGE/WPGE.h>
#include <WPGE/Sprite.h>
#include <WPGE/GLSLProgram.h>
#include <WPGE/GLTexture.h>
#include <WPGE/Window.h>

#include <vector>

enum class GameState { PLAY, EXIT };

class MainGame
{
public:
	MainGame();
	~MainGame();

	/// <summary>
	/// This runs the game
	/// </summary>
	///
	/// <returns></returns>
	auto run() -> void;

private:
	/// <summary>
	/// Initialize SDL and OpenGL and whatever else we need
	/// </summary>
	///
	/// <returns></returns>
	auto initSystem() -> void;

	/// <summary>
	/// Initializes the shaders.
	/// </summary>
	///
	/// <returns></returns>
	auto initShaders() -> void;

	/// <summary>
	/// This is the main game loop for our program
	/// </summary>
	///
	/// <returns></returns>
	auto gameLoop() -> void;

	/// <summary>
	/// Processes input with SDL
	/// </summary>
	///
	/// <returns></returns>
	auto processInput() -> void;

	/// <summary>
	/// Draws the game using the almighty OpenGL
	/// </summary>
	///
	/// <returns></returns>
	auto drawGame() -> void;

	/// <summary>
	/// Calculates the FPS.
	/// </summary>
	auto calculateFPS() -> void;

	int _screenWidth = 1440;
	int _screenHeight = 900;

	wpge::Window _window;

	GameState _gameState;

	std::vector<wpge::Sprite*> _sprites;

	wpge::GLSLProgram _colorProgram;

	float _fps;
	float _maxFPS;
	float _time;

	Uint32 _frameTime;
};