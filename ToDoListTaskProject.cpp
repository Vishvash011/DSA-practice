#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Define a structure to represent a task
struct Task {
    string description;
    bool completed;
};

int main() {
    vector<Task> tasks; // Create a vector to store tasks

    cout << "Welcome to the To-Do List Application!" << endl;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Mark Task as Completed\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                {
                    Task newTask;
                    cout << "Enter task description: ";
                    cin.ignore(); // Ignore the newline character in the buffer
                    getline(cin, newTask.description);
                    newTask.completed = false;
                    tasks.push_back(newTask);
                    cout << "Task added successfully!\n";
                    break;
                }
            case 2:
                if (tasks.empty()) {
                    cout << "No tasks to display. Add some tasks first.\n";
                } else {
                    cout << "\nTasks:\n";
                    for (size_t i = 0; i < tasks.size(); i++) {
                        cout << (i + 1) << ". ";
                        cout << (tasks[i].completed ? "[Done] " : "[ ] "); // Display [X] for completed tasks
                        cout << tasks[i].description << endl;
                    }
                }
                break;
            case 3:
                if (tasks.empty()) {
                    cout << "No tasks to mark as completed.\n";
                } else {
                    cout << "Enter the task number to mark as completed: ";
                    int taskNumber;
                    cin >> taskNumber;

                    if (taskNumber >= 1 && taskNumber <= static_cast<int>(tasks.size())) {
                        tasks[taskNumber - 1].completed = true;
                        cout << "Task marked as completed!\n";
                    } else {
                        cout << "Invalid task number. Please enter a valid task number.\n";
                    }
                }
                break;
            case 4:
                cout << "Goodbye!\n";
                return 0; // Exit the program
            default:
                cout << "Invalid choice. Please select a valid option.\n";
                break;
        }
    }

    return 0;
}
