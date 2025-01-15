#include <iostream>
#include <list>
#include <string>
using namespace std;

class ToDolist{
public:    
    string tasks;
    int view ;
    int tasktodelet ;
    int ext ;
    int tasktoadd;
    
    void displayMenu(){
        
        cout << "1.Add " << endl;
        cout << "2.view " << endl;
        cout << "3.delete " << endl;
        cout << "4.Exit " << endl;
    }
    
    void adding(){
        list<string> adding = {};
        cout << 'Enter your task: ' << endl;
        cin>> tasktoadd;
        add.push_back(tasks);
        
    }

    void deleting(){
        list<string> &deleting = adding;
        count << 'Enter your task number: ' << endl;
        cin>> tasktodelet;
        

    } 
    
    
};

int main() {
    ToDolist mylist;
    
    mylist.displayMenu();

    return 0;
}
