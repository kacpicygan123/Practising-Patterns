//Model zawiera wektor przechowuj¹cy obiekty klasy Task, dysponuje równie¿ metodami modyfikuj¹cymi elementy wektora

#pragma once
#include <iostream>
#include <vector>
#include "Task.h"

class Model
{
private:
	std::vector<Task> tasks;
public:
	Model()
	{

	}
	void addTask(Task& task);
	void RemoveTask(Task& task); //Ta opcja nie zosta³a jeszcze uwzglêdniona
	int vectorSize() { return tasks.size(); }; //Zwraca wielkoœæ wektora, metoda potrzebna kontrolerowi
	std::vector<Task> getVector() const { return tasks; }; //Zwraca wektor, metoda potrzebna kontrolerowi
};
