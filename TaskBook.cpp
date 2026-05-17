#include <iostream>
#include <thread> // ??? std::this_thread::sleep_for
#include <chrono> // ??? std::chrono::seconds
#include <string>
#include <cstdlib> // ??? std::srand, std::rand
#include <vector>


class TaskBook
{
    private:
    std::string name;
    std::string description;
    int num;                        // Task number or ID
    int priority;                   // Task priority level
    bool completed;
    int bsize=0;
    
    
    public:
static int taskCount;

    TaskBook() {
        std::cout << "TaskBook constructor called." << std::endl;
        std::cout <<"===============================" << std::endl;
        name = "Default Task";
        description = "This is a default task.";
        priority = 1;
        completed = false;
    }


void AddTask(const std::string& name_, const std::string& description_, int num_, int priority_) {
    taskCount++;
    num=taskCount;
        std::cout << "Adding task: " << name_ << std::endl;
        std::cout <<"===============================" << std::endl;
        std::cout << "Description: " << description_ << std::endl;
        std::cout << "Number: " << num_ << std::endl;
        std::cout << "Priority: " << priority_ << std::endl;
        std::cout <<"===============================\n\n" << std::endl;
    }




    void RemoveTask(int &num_) {                           
        std::cout << "Removing task: " << num_ << std::endl;
        
        std::cout <<"===============================" << std::endl;

        
    }


    void DisplayTasks() {
        for(int i = 0; i < taskCount; i++) {
            std::cout << "Task " << i + 1 << ": " << name << std::endl;
        //
        }
    }

    void MarkTaskCompleted(int &num_) {
        std::cout << "Marking task as completed: " << num_ << std::endl;
    }

    void SortTasks() {
        std::cout << "Sorting tasks..." << std::endl;
           std::cout <<"===============================" << std::endl;
           for(int i = 0; i < taskCount; i++) {
            std::cout << "Task " << i + 1 << ": " << name << std::endl;

        }
    }


    void FilterTasks(const std::string& keyword)
    {
        std::cout << "Filtering tasks with keyword: " << keyword << std::endl;
    }

    void OverrideTask(const std::string& oldTask, const std::string& newTask) {
        std::cout << "Overriding task: " << oldTask << " with " << newTask << std::endl;
    }

    void ChoiceTask() {
        std::cout << "Choosing a random task..." << std::endl;
    }

    ~TaskBook() {
        std::cout << "TaskBook destructor called." << std::endl;
    }
};

int TaskBook::taskCount = 0;

void HelpFunction() {
    std::cout << "This is a help function." << std::endl;
}

void DisplayMenu() {
    std::cout << "TaskBook Menu:" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. Remove Task" << std::endl;
    std::cout << "3. Display Tasks" << std::endl;
    std::cout << "4. Mark Task Completed" << std::endl;
    std::cout << "5. Sort Tasks" << std::endl;
    std::cout << "6. Filter Tasks" << std::endl;
    std::cout << "7. Override Task" << std::endl;
    std::cout << "8. Choice Task" << std::endl;
    std::cout << "0. Exit" << std::endl;
}


int main()
{
    TaskBook taskBook;
while(true)
{
    int choice;
    
    DisplayMenu();
    
     std::cout << "Enter your choice: ";
    std::cin >> choice;

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
            std::cout << "Exiting..." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
    }
}
    


return 0;
}





