#pragma once
#include "Library.h"
class MainLogics
{
public:
	void play();
	unsigned long int amountQuestions();

	void RecordingAnswers(bool value);



	MainLogics();
	std::string getQuestion(unsigned long int numberOfQuestion);
	std::string searchCharacter();
	void record(std::string name);
private:
	std::list < std::string > question = {"��� �������?", "�� �����?", "��� ����������� ��������?" , "�� ������ � �������������?" , "�� ��������� � ������������� ����������?", 
		"�� ������ � ��������-���������?", "��� �������� �� ����?", "��� �����?", "��� ��������� ����?",  "�� ������ � �������?", "� ���� ���� ���� �����?", "��� ��������� ��������?",  
		"�� �������?", "�� ���������� ��������� ������� �����?" , "�� �������� �� ���� ����?" , "�� �� ���������?" , "�� �� ��������� Dota 2 ?" , "�� �������� �� ���� ����?" ,
		"��� �������� �� ������?" , "�� ������ � ������?" , "� ���� ���� ���� �����?" , "��� ��������?" , "�� ������ � ��������?" , "�� ���������� ��������� ������� �����?" ,
		"�� �������� ������ ���������� ��������?" , "�� ������ � �������?" , "�� �������� � �������������?" , "�� �����?" , "�� �������� � �������?" , "�� ����� ��������� � ����?" ,
		"�� �������� ������ �������?" , "�� ��������� � ������������� ����������?" , "��/��� ����������" , "��/��� ���?" , "�� �������� ��������������� �������?" , 
		"�� ����������� ��������� ����� ?" , "�� �����������?" , "��� ������ ?" ,"��� ����������?", "��� �������� �����?", "��� ���������?", "��� ������������ ������?",
		"��� ���-������?", "��� ���-������?", "��� �������?", "��� �����?", "��� ����������?", "��� ������������ �����?", "��� ������������������ �����?", "��� ��������� ��������?",
		"��� ��������� ��������?", "��� ��������� �����?", "��� ������������ ��������?", "��� ������� �� �������?", "��� �����?", "��� �����?", "��� ��� ������?", "��� ���� �� �������?", 
		"��� �������������� �����?", "��� ���������� ����?", "��� ��������� ����?", "��� ���������?", "��� ��������� ����?", "��� ���������?" };


	unsigned long int whoseCharacter = 0;
	std::fstream /*��� ������ � ������*/ dataBase;

};




