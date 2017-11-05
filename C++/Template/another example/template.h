#pragma once

class Game
{
public:
	Game();
	virtual ~Game();
	void PlayOneGame(int playerCount = 0); // template interface
protected:
	virtual void InitlizeGame() = 0;
	virtual void MakePlay(int player) = 0;
	virtual bool EndofGame() = 0;
	virtual bool PrintWinner() = 0;

	int m_playerCount = 0;
	int m_moveCount = 0;
	int m_playerWon = -1;
private:
	void Init();
};

class Tank : public Game
{
protected:
	void InitlizeGame();
	void MakePlay(int player);
	bool EndofGame();
	bool PrintWinner();
};

class Chess : public Game
{
protected:
	void InitlizeGame();
	void MakePlay(int player);
	bool EndofGame();
	bool PrintWinner();
};