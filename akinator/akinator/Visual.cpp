#include "Visual.h"
//     system("cls");
void Visual::start() {
	std::cout << "����� ���������� � ��������!" << std::endl;
	std::cout << "������� 'q' ��� ������." << std::endl;
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
        std::cout << "������ " << (currentQuestion + 1) << ": " << logic.getQuestion(currentQuestion) << " \n (��/���)" << std::endl;
        std::string answer;
        std::cin >> answer;
        currentQuestion++;
        if (answer == "��" || answer == "��" || answer == "yes" || answer == "YES") {
            logic.RecordingAnswers(true);
        }

        else if (answer == "���" || answer == "���" || answer == "no" || answer == "NO") {
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
        std::cout << temp << " ���� ��������?" << std::endl;

        std::string answer;
        std::cin >> answer;

        if (answer == "��" || answer == "��" || answer == "yes" || answer == "YES" || answer == "da" || answer == "DA") {
            std::cout << "������� �� ����!!" << "\n";
        }

        else if (answer == "���" || answer == "���" || answer == "no" || answer == "NO" || answer == "net" || answer == "NET") {
            endGame();
        }

    }
} 


void Visual::endGame() {
    std::string name;
    std::cout << "�������� �� ������." << std::endl;
    std::cout << "������� ��� ���������: ";
    std::cin >> name;
    logic.record(name);

     system("cls");
    std::cin.clear(); 
    std::cout << "������� ��������!!" << std::endl;
}
