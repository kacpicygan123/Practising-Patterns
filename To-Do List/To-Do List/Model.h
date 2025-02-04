//Model zawiera wektor przechowujący obiekty klasy Task, dysponuje również metodami modyfikującymi elementy wektora

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
	void RemoveTask(Task& task); //Ta opcja nie została jeszcze uwzględniona
	int vectorSize() { return tasks.size(); }; //Zwraca wielkość wektora, metoda potrzebna kontrolerowi
	std::vector<Task> getVector() const { return tasks; }; //Zwraca wektor, metoda potrzebna kontrolerowi
};
