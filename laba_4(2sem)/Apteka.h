#pragma once
#include <vector>
#include <iostream>
#include <semaphore>
#include <thread>

using namespace std;
static binary_semaphore stop{ 0 };
class Apteka
{
private:
	vector<string>drugsWithRecipe{"��������� �� ������� 1", "��������� �� ������� 2", "��������� �� ������� 3" };
	vector<string>drugsWithoutRecipe{ "��������� ��� ������� 1", "��������� ��� ������� 2", "��������� ��� ������� 3" };
	vector<string>check;
	
public:
	 void PrintDrugsWithRecipe();
	 void PrintDrugsWithoutRecipe();
	 void PrintCheck();

};

