#pragma once
#include <string>

class Task {
private:
    std::string name;
public:
    Task(const std::string& name);
    std::string getName() const;
};

