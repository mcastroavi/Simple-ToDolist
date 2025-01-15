// C++ 
// Updating 
#include <iostream>
#include <list>
#include <string>
using namespace std;

class ToDolist{
public:    
    string tasks;
    int view ;
    int tasktodelet ;
    int ext = 4;

    list<string> adding = {};
    list<string> &deleting = adding;
    
    void displayMenu(){
        
        cout << "1.Add " << endl;
        cout << "2.view " << endl;
        cout << "3.delete " << endl;
        cout << "4.Exit " << endl;
    }
    
    void adding(){

        cout << "Enter your task: " << endl;
        cin>> tasks;
        adding.push_back(tasks);
        
    }

    void deleting(){
        
        count << "Enter your task number to delete: " << endl;
        cin>> tasktodelet;
        deleting.remove(tasktodelet);

    }
    
    void viewTask(){

        cout << "View tasks: ";
        for (const auto &view : adding) {
            cout << view << endl;
        }
        cout<< endl;
    }


    
    
};

int main() {
    ToDolist mylist;
    
    mylist.displayMenu();

    return 0;
}
