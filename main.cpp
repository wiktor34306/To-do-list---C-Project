#include "TaskManager.h"

int main() {
    TaskManager* manager = TaskManager::getInstance();
    Task* task1 = new Task("Task 1");
    Task* task2 = new Task("Task 2");
    manager->addTask(task1);
    manager->addTask(task2);
    manager->displayTasks();
    return 0;
}

