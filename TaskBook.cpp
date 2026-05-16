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
    int num;                        // Task number or ID
    int priority;                   // Task priority level
    bool completed;
    int bsize=0;
    
    
    public:
static int taskCount;

    TaskBook() {
        cout << "TaskBook constructor called." << endl;
        cout <<"===============================" << endl;
        name = "Default Task";
        description = "This is a default task.";
        priority = 1;
        completed = false;
    }


void AddTask(const string& name_, const string& description_, int num_, int priority_) {
    taskCount++;
 taskCount=num;
        cout << "Adding task: " << name_ << endl;
        cout <<"===============================" << endl;
        cout << "Description: " << description_ << endl;
        cout << "Number: " << num_ << endl;
        cout << "Priority: " << priority_ << endl;
        cout <<"===============================\n\n" << endl;
    }




    void RemoveTask(int &num_) {                           
        cout << "Removing task: " << num_ << endl;
        
        cout <<"===============================" << endl;

        
    }


    void DisplayTasks() {
        for(int i = 0; i < taskCount; i++) {
            cout << "Task " << i + 1 << ": " << name << endl;
        //
        }
    }

    void MarkTaskCompleted(int &num_) {
        cout << "Marking task as completed: " << num_ << endl;
    }

    void SortTasks() {
        cout << "Sorting tasks..." << endl;
           cout <<"===============================" << endl;
           for(int i = 0; i < taskCount; i++) {
            cout << "Task " << i + 1 << ": " << name << endl;

        }
    }


    void FilterTasks(const string& keyword)
    {
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

int TaskBook::taskCount = 0;

void HelpFunction() {
    cout << "This is a help function." << endl;
}

void DisplayMenu(int choice) {
    cout << "TaskBook Menu:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. Remove Task" << endl;
    cout << "3. Display Tasks" << endl;
    cout << "4. Mark Task Completed" << endl;
    cout << "5. Clear Tasks" << endl;
    cout << "6. Sort Tasks" << endl;
    cout << "7. Filter Tasks" << endl;
    cout << "8. Override Task" << endl;
    cout << "9. Choice Task" << endl;
    cout << "0. Exit" << endl;
}


int main()
{
while(true)
{
    int choice;
    
    DisplayMenu(choice);
    
     cout << "Enter your choice: ";
    cin >> choice;

    TaskBook taskBook;

    switch(choice) {
        case 1:
            taskBook.AddTask("Task 1", "Description for Task 1", 1, 1);
            break;
        case 2:
           // taskBook.RemoveTask();
            break;
        case 3:
            taskBook.DisplayTasks();
            break;
        case 4:
            //taskBook.MarkTaskCompleted();
            break;
        case 5:
            taskBook.SortTasks();
            break;
        case 6:
            taskBook.FilterTasks("Keyword");
            break;
        case 7:
            taskBook.OverrideTask("Old Task", "New Task");
            break;
        case 8:
            taskBook.ChoiceTask();
            break;
        case 0:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}
    


return 0;
}





