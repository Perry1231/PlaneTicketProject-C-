#include <iostream>
#include <thread> // ??? std::this_thread::sleep_for
#include <chrono> // ??? std::chrono::seconds
#include <string>
#include <cstdlib> // ??? std::srand, std::rand
using namespace std;


class TaskBook
{
    private:
    string name;
    string description;
    int num;
    int priority;
    bool completed;
    int bsize=0;
    
    
    public:
    TaskBook() {
        cout << "TaskBook constructor called." << endl;
        cout <<"===============================" << endl;
        name = "Default Task";
        description = "This is a default task.";
        num = bsize++;
        priority = 1;
        completed = false;
    }


void AddTask(const string& name_, const string& description_, int num_, int priority_) {
    int i = 0; // Example index for task array
   TaskBook task[i];
 
        cout << "Adding task: " << name_ << endl;
        cout <<"===============================" << endl;
        cout << "Description: " << description_ << endl;
        cout << "Number: " << num_ << endl;
        cout << "Priority: " << priority_ << endl;
        cout <<"===============================\n\n" << endl;
    bsize++;
    }




    void RemoveTask(const string& task) {
        cout << "Removing task: " << task << endl;
        cout <<"===============================" << endl;

        bsize--;
    }


    void DisplayTasks() {
        for(int i = 0; i < bsize; i++) {
            cout << "Task " << i + 1 << ": " << name << endl;
        }
    }

    void MarkTaskCompleted(const string& task) {
        cout << "Marking task as completed: " << task << endl;
    }

    void ClearTasks() {
        cout << "Clearing all tasks..." << endl;
    }

    void SortTasks() {
        cout << "Sorting tasks..." << endl;
    }


    void FilterTasks(const string& keyword) {
        cout << "Filtering tasks with keyword: " << keyword << endl;
    }

    void OverrideTask(const string& oldTask, const string& newTask) {
        cout << "Overriding task: " << oldTask << " with " << newTask << endl;
    }

    void ChoiceTask() {
        cout << "Choosing a random task..." << endl;
    }

    ~TaskBook() {
        cout << "TaskBook destructor called." << endl;
    }
};


void HelpFunction() {
    cout << "This is a help function." << endl;
}




int main()
{


    TaskBook taskBook1;
    TaskBook taskBook2;
    taskBook1.AddTask("Task 1", "This is the first task.", 1, 1);
    taskBook1.DisplayTasks();
  
    


return 0;
}





