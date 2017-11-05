#include "template.h"
#include <iostream>

Game::Game() {}
Game::~Game() {}
void Game::Init()
{
	InitlizeGame();
}
void Game::PlayOneGame(int player)
{
	if (player)
	{
		m_playerCount = player;
	}
	Init();

	int i = 0;
	while(!EndofGame())
	{
		i = (i + 1) % m_playerCount;
		if (!i)
		{
			m_moveCount++;
		}
	}
	PrintWinner();
}

void Tank::InitlizeGame()
{
	m_playerCount = 5;
}
void Tank::MakePlay(int player)
{
	m_playerWon = 2;
}
bool Tank::EndofGame()
{
	return (-1 == m_playerWon);
}
bool Tank::PrintWinner()
{
	std::cout << "player:" << m_playerWon << "win";
	return true;
}

void Chess::InitlizeGame()
{
	m_playerCount = 10;
}
void Chess::MakePlay(int player)
{
	m_playerWon = 5;
}
bool Chess::EndofGame()
{
	return (-1 == m_playerWon);
}
bool Chess::PrintWinner()
{
	std::cout << "player:" << m_playerWon << "win";
	return true;
}