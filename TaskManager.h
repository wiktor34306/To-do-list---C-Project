#pragma once
#include <vector>
#include "Task.h"

class TaskManager {
private:
    static TaskManager* instance;
    std::vector<Task*> tasks;

    TaskManager() { }

public:
    static TaskManager* getInstance();
    void addTask(Task* task);
    void removeTask(Task* task);
    void displayTasks();
};

