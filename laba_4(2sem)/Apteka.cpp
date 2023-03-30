#include "Apteka.h"
#include <semaphore>
#include <thread>


void Apteka::PrintDrugsWithRecipe()
{
	int i = 0; int answer;
	while (i < drugsWithRecipe.size()) {

		cout << "�������� ������ ����� � ���?\n" << drugsWithRecipe[i] << "\n1 - ��\n0 - ���\n"; cin >> answer;
		if (answer == 1) {
			check.push_back(drugsWithRecipe[i]);
			cout << "����� ������� ��������!\n";
		}
		i++;
	}
	stop.release();
}

void Apteka::PrintDrugsWithoutRecipe()
{
	stop.acquire();
	int i = 0; int answer;
	while (i < drugsWithoutRecipe.size()) {
		cout << "�������� ������ ����� � ���?\n" << drugsWithoutRecipe[i] << "\n1 - ��\n0 - ���\n"; cin >> answer;
		if (answer == 1) {
			check.push_back(drugsWithoutRecipe[i]);
			cout << "����� ������� ��������!\n";

		}
		i++;
	}
}

	void Apteka::PrintCheck()
{
		cout << "��� ���:\n";
	for (auto item : check)
		cout << item << endl;
}
