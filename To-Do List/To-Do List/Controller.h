//Kontroler - zadeklarowano prywatnie obiekty klas, które kontroler wykorzystuje.

#pragma once
#include <iostream>
#include "Model.h"
#include "View.h"
#include "Task.h"
#include "Input.h"

class Controller
{
private:
	Input input;
	Model model;
	View view;
	Task task;
public:
	Controller(Model model, View view, Input input) : model{ model }, view{ view }, input{ input } {};
	int getValueInput();
	std::string getTextInput();
	void setTaskName(std::string name);
	void addNewTask();
	void displayAllTasks();
	void mainMenu();

};