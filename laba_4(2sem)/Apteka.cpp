#include "Apteka.h"
#include <semaphore>
#include <thread>


void Apteka::PrintDrugsWithRecipe()
{
	int i = 0; int answer;
	while (i < drugsWithRecipe.size()) {

		cout << "Добавить данный товар в чек?\n" << drugsWithRecipe[i] << "\n1 - да\n0 - нет\n"; cin >> answer;
		if (answer == 1) {
			check.push_back(drugsWithRecipe[i]);
			cout << "Товар успешно добавлен!\n";
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
		cout << "Добавить данный товар в чек?\n" << drugsWithoutRecipe[i] << "\n1 - да\n0 - нет\n"; cin >> answer;
		if (answer == 1) {
			check.push_back(drugsWithoutRecipe[i]);
			cout << "Товар успешно добавлен!\n";

		}
		i++;
	}
}

	void Apteka::PrintCheck()
{
		cout << "Ваш чек:\n";
	for (auto item : check)
		cout << item << endl;
}
