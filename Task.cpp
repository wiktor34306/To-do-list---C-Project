#include "Task.h"

Task::Task(const std::string& name) : name(name) { }

std::string Task::getName() const {
    return name;
}

