#pragma once
#include "MainLogics.h"
class Visual
{
public:
	void start();
	void play();;
    void endGame();;
private:
	MainLogics logic;
};
//1.менюшка с активной кнопкой "начать"
//2.activity угадывания -список вопросов, счетчик вопросов, варианты ответов.
//3.activity когда вопросы закончились
//4. activity когда персонаж не угадан то запрос на запись имени персонажа

