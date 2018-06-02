// ConsoleApplication61.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <clocale>
#include <string>
#include <stack>

//Задание 1: Используя стандартную реализацию. #include <stack>	// Стандартная реализация стека из stl
//Есть строка символов, признаком конца, которой является;
//В строке могут быть фигурные, круглые, квадратные скобки.Скобки могут быть открывающими и закрывающими.
//Необходимо проверить корректность расстановки скобок.
//При этом необходимо, чтобы выполнились следующие правила :
//1. Каждая открывающая скобка должна иметь справа такую же закрывающую.Обратное также должно быть верно.
//2. Открывающие и закрывающие пары скобок разных типов должны быть правильно расположены по отношению друг к другу.
//Пример правильной строки : ({ x - y - z }*[x + 2y] - (z + 4x));
//Пример неправильной строки : ([x - y - z}*[x + 2y) - {z + 4x)].
//
//Если все правила соблюдены выведите информационное
//сообщение о корректности строки, иначе покажите строку
//до места возникновения первой ошибки.
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
#pragma region stack
	//Ñîçäàíèå ñòåêà òèïà äàííûõ ñòðîêè
	stack<string>Stack;

	//Ïîìåùåíèå ýëåìåíòîâ â ñòåê
	if (Stack.empty()) {
		Stack.push("x - y - z");
		Stack.push("x + 2y");
		Stack.push("z + 4x");
	}

	//Êîë-âî ýëåìåíòîâ â ñòåêå
	cout << "Size Stack = " << Stack.size() << endl;

	//Ïðîñìîòð ýëåìåíòîâ ñòåêà
	cout << "Начальные элементы  без скобок: " << endl;
	while (!Stack.empty())
	{
		cout << Stack.top() << endl;
		Stack.top();
		if (Stack.top() == "x - y - z")
		Stack.top() = "{x - y - z}";
	else if (Stack.top() == "x + 2y")
		Stack.top() = "[x + 2y]";
	else if (Stack.top() == "z + 4x")
		Stack.top() = "(z + 4x)";
	else
		return 1;
	
};



	while (!Stack.empty())
	{
	     cout << "Конечные элементы со скобкой: " << endl;
		cout << Stack.top() << endl;
		Stack.pop();
	
	};
#pragma endregion
	
	return 0;
}