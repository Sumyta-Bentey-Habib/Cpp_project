#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    Task(const std::string& description) : description(description), completed(false) {}

    void markAsCompleted() {
        completed = true;
    }

    bool isCompleted() const {
        return completed;
    }

    std::string getDescription() const {
        return description;
    }

private:
    std::string description;
    bool completed;
};

class ToDoList {
public:
    void addTask(const std::string& description) {
        tasks.push_back(Task(description));
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markAsCompleted();
        }
    }

    void displayTasks() const {
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << "[" << i << "] ";
            if (tasks[i].isCompleted()) {
                std::cout << "[x] ";
            } else {
                std::cout << "[ ] ";
            }
            std::cout << tasks[i].getDescription() << std::endl;
        }
    }

private:
    std::vector<Task> tasks;
};

int main() {
    ToDoList toDoList;

    while (true) {
        std::cout << "1. Add Task\n";
        std::cout << "2. Mark Task as Completed\n";
        std::cout << "3. Display Tasks\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string taskDescription;
                std::cout << "Enter task description: ";
                std::cin.ignore();
                std::getline(std::cin, taskDescription);
                toDoList.addTask(taskDescription);
                break;
            }
            case 2: {
                int taskIndex;
                std::cout << "Enter task index to mark as completed: ";
                std::cin >> taskIndex;
                toDoList.markTaskAsCompleted(taskIndex);
                break;
            }
            case 3:
                toDoList.displayTasks();
                break;
            case 4:
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
                break;
        }
    }

    return 0;
}
