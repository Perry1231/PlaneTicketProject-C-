#include <iostream>
#include <thread> // ??? std::this_thread::sleep_for
#include <chrono> // ??? std::chrono::seconds
#include <string>
#include <cstdlib> // ??? std::srand, std::rand
#include <vector>
#include <algorithm>


class TaskBook
{
    private:
    std::string name;
    std::string description;
    bool completed;
    int bsize=0;
    
    
    public:
    static int taskCount;                                                                                                     // Static member to keep track of the number of tasks

    TaskBook() {                                                                                                              // Constructor to initialize task attributes
        std::cout << "TaskBook constructor called." << std::endl;
        std::cout <<"===============================" << std::endl;
        name = "Default Task";
        description = "This is a default task.";
        completed = false;
    }

    void DisplayInfo() {                                                                                                      // Function to display task information
        std::cout << "Task Name: " << name << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Completed: " << (completed ? "Yes" : "No") << std::endl;
    }



    class Task 
    {
    public:
        std::string name;
        std::string description;
        int num;
        int priority;
        bool completed;

        Task(const std::string& name_, const std::string& description_, int num_, int priority_)                            // Constructor to initialize task attributes
            : name(name_), description(description_), num(num_), priority(priority_), completed(false) {}
    

void AddTask(const std::string& name_, const std::string& description_, int num_, int priority_) {                          // Function to add a new task
    taskCount++;
    num=taskCount;
        std::cout << "Adding task: " << name_ << std::endl;
        std::cout <<"===============================" << std::endl;
        std::cout << "Description: " << description_ << std::endl;
        std::cout << "Number: " << num_ << std::endl;
        std::cout << "Priority: " << priority_ << std::endl;
        std::cout << "Completed: " << completed << std::endl;
        std::cout << "Task added successfully!" << std::endl;
        std::cout <<"===============================\n\n" << std::endl;
    }




    void RemoveTask(int &num_) {                           
        std::cout << "Removing task: " << num_ << std::endl;
        
        std::cout <<"===============================" << std::endl;

        
    }


    void DisplayTasks() {
        for(int i = 0; i < taskCount; i++) {
            std::cout << "Task " << i + 1 << ": " << name << std::endl;
        
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
           // std::sort(num.begin(), num.end());
        }
    }


    void FilterTasks()
    {
    std::string keyword;
    std::cout << "Filtering tasks..." << std::endl;
    std::cout <<"===============================" << std::endl;
    std::cout << "Choise how to filter tasks:" << std::endl;
    std::cout <<"1. Filter by name\n2. Filter by description\n3. Filter by priority\n4. Filter by completion status\n5. Filter by number\n"; 
     std::cout << "Enter keyword to filter tasks: ";
    std::cin >> keyword;
    switch(keyword[0]) {
        case '1':
            std::cout << "Filtering by name..." << std::endl;

            break;
        case '2':
            std::cout << "Filtering by description..." << std::endl;
            break;
        case '3':
            std::cout << "Filtering by priority..." << std::endl;
            break;
        case '4':
            std::cout << "Filtering by completion status..." << std::endl;
            break;
        case '5':
            std::cout << "Filtering by number..." << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please try again." << std::endl;
    }       
       std::cout <<"===============================" << std::endl;
    }

    void OverrideTask() {
    std::string othername, description;
    int priority;
    std::cout << "Enter new task name, description, and priority: ";

    std::cin >> othername >> description >> priority;
    std::cout << "Overriding task: " << othername << std::endl;
        this->name = othername;
        this->description = description;
        this->priority = priority;
        this->completed = false;
    }

    void ChoiceTask() {
        std::cout << "Choosing a random task..." << std::endl;
    }

    };
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

    TaskBook::Task task1("Task 1", "Description for Task 1", 1, 1);
while(true)
{
    int choice;
    
    DisplayMenu();


    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch(choice) {
        case 1:
            task1.AddTask("Task 1", "Description for Task 1", 1, 1);
            break;
        case 2:
           // taskBook.RemoveTask();
            break;
        case 3:
            task1.DisplayTasks();
            break;
        case 4:
            //taskBook.MarkTaskCompleted();
            break;
        case 5:
            task1.SortTasks();
            break;
        case 6:
            task1.FilterTasks();
            break;
        case 7:
            task1.OverrideTask();
            break;
        case 8:
            task1.ChoiceTask();
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





