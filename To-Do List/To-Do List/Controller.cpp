#include <iostream>
#include "Controller.h"


void Controller::addNewTask()
{
	model.addTask(task);
}

void Controller::displayAllTasks()
{
	for (int i = 0; i < model.vectorSize(); i++)
	{
		view.displayTaskInfo(i, model.getVector()[i].getName());
	}
}

std::string Controller::getTextInput()
{
	return input.getStringInput();
}

int Controller::getValueInput()
{
	return input.getIntInput();
}

void Controller::mainMenu()
{
	view.mainGreeter();
	switch (input.getIntInput())
	{
	case 1:
		view.nameSetter();
		task.setName(input.getStringInput());
		model.addTask(task);
		break;
	case 2:
		this->displayAllTasks();
		break;
	default:
		view.noOption();
		break;
	}
}


