/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
}

void Game::ComposeFrame()
{
	gfx.PutPixel(720, 560, 255, 255, 255);
	gfx.PutPixel(721, 560, 255, 255, 255);
	gfx.PutPixel(722, 560, 255, 255, 255);
	gfx.PutPixel(728, 560, 255, 255, 255);
	gfx.PutPixel(729, 560, 255, 255, 255);
	gfx.PutPixel(730, 560, 255, 255, 255);
	gfx.PutPixel(725, 555, 255, 255, 255);
	gfx.PutPixel(725, 556, 255, 255, 255);
	gfx.PutPixel(725, 557, 255, 255, 255);
	gfx.PutPixel(725, 563, 255, 255, 255);
	gfx.PutPixel(725, 564, 255, 255, 255);
	gfx.PutPixel(725, 565, 255, 255, 255);
}
