#include <iostream>
#include <vector>
#include "Model.h"

void Model::addTask(Task& task)
{
	tasks.push_back(task);
}