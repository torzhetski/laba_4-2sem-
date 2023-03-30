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
	vector<string>drugsWithRecipe{"лекраство по рецепту 1", "лекраство по рецепту 2", "лекраство по рецепту 3" };
	vector<string>drugsWithoutRecipe{ "лекраство без рецепта 1", "лекраство без рецепта 2", "лекраство без рецепта 3" };
	vector<string>check;
	
public:
	 void PrintDrugsWithRecipe();
	 void PrintDrugsWithoutRecipe();
	 void PrintCheck();

};

