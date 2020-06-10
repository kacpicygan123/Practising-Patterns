//Model zawiera wektor przechowuj�cy obiekty klasy Task, dysponuje r�wnie� metodami modyfikuj�cymi elementy wektora

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
	void RemoveTask(Task& task); //Ta opcja nie zosta�a jeszcze uwzgl�dniona
	int vectorSize() { return tasks.size(); }; //Zwraca wielko�� wektora, metoda potrzebna kontrolerowi
	std::vector<Task> getVector() const { return tasks; }; //Zwraca wektor, metoda potrzebna kontrolerowi
};
