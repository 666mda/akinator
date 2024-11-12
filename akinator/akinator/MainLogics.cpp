#include "MainLogics.h"

void MainLogics::play()
{
}

unsigned long int MainLogics::amountQuestions()
{

	return question.size();
}

void MainLogics::RecordingAnswers(bool value)
{
	int a = 0;
	int b = 1;
	whoseCharacter = whoseCharacter << 1;
	if (value)
	{
		whoseCharacter += 1;
		
	}
	else
	{
		whoseCharacter += a;
	} 

}

MainLogics::MainLogics()
{
	dataBase.open("dataBase.txt", std::ios::out | std::ios::app);
	dataBase.close();


}

std::string MainLogics::getQuestion(unsigned long int numberOfQuestion)
{
	auto it = question.begin();
	std::advance(it, numberOfQuestion);
	
	return *it;
}

std::string MainLogics::searchCharacter()
{
	std::string temp;
	std::string hope;
	dataBase.open("dataBase.txt", std::ios::in);
	while (std::getline(dataBase,temp))
	{
		hope = temp.substr(0, temp.find(' '));
		if (whoseCharacter == std::stoi(temp.substr(hope.size())))
		{
			dataBase.close();
			return hope;
		}
	}
	dataBase.close();
	return std::string();
}

void MainLogics::record(std::string name)
{
	std::fstream reg("dataBase.txt", std::ios::out | std::ios::app);
	if (!reg.is_open()) {
		std::cout << "Error: Unable to open file for writing." << std::endl;
		return;
	}
	reg << name << " " << whoseCharacter << "\n";
	reg.close();
}
