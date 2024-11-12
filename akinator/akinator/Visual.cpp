#include "Visual.h"
//     system("cls");
void Visual::start() {
	std::cout << "добро пожаловать в акинатор!" << std::endl;
	std::cout << "Нажмите 'q' для начала." << std::endl;
    char temp;
    std::cin >> temp;
    if (temp == 'q' || temp == 'Q')
        play();
    else
    {
        return;
    }
}


void Visual::play() {
    int questions = 0;
    int currentQuestion = 0;

    while (currentQuestion < logic.amountQuestions()) {
        std::cout << "Вопрос " << (currentQuestion + 1) << ": " << logic.getQuestion(currentQuestion) << " \n (да/нет)" << std::endl;
        std::string answer;
        std::cin >> answer;
        currentQuestion++;
        if (answer == "да" || answer == "ДА" || answer == "yes" || answer == "YES") {
            logic.RecordingAnswers(true);
        }

        else if (answer == "нет" || answer == "НЕТ" || answer == "no" || answer == "NO") {
            logic.RecordingAnswers(false);
        }
    }


    std::string temp = logic.searchCharacter();
    if (temp.size() ==0)
    {
        endGame();
    }
    else
    {
        std::cout << temp << " этот перносаж?" << std::endl;

        std::string answer;
        std::cin >> answer;

        if (answer == "да" || answer == "ДА" || answer == "yes" || answer == "YES" || answer == "da" || answer == "DA") {
            std::cout << "спасибо за игру!!" << "\n";
        }

        else if (answer == "нет" || answer == "НЕТ" || answer == "no" || answer == "NO" || answer == "net" || answer == "NET") {
            endGame();
        }

    }
} 


void Visual::endGame() {
    std::string name;
    std::cout << "персонаж не угадан." << std::endl;
    std::cout << "введите имя персонажа: ";
    std::cin >> name;
    logic.record(name);

     system("cls");
    std::cin.clear(); 
    std::cout << "консоль отчищена!!" << std::endl;
}
