#include "TaskManager.h"
#include <iostream>

TaskManager* TaskManager::instance = nullptr;

TaskManager* TaskManager::getInstance() {
    if (instance == nullptr) {
        instance = new TaskManager();
    }
    return instance;
}

void TaskManager::addTask(Task* task) {
    tasks.push_back(task);
}

void TaskManager::removeTask(Task* task) {
    // Implement task removal from tasks vector
}

void TaskManager::displayTasks() {
    for (Task* task : tasks) {
        std::cout << task->getName() << std::endl;
    }
}

