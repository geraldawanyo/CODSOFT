#include <iostream>
#include <string>

using namespace std;

string list[9][9] = {{""},{""}};
int tasks_count = 0;
int option = -1;
int main () {
    cout << "Option 1 - Add task to list " << endl;
    cout << "Option 2 - View to do list " << endl;
    cout << "Option 3 - Remove task from list " << endl;
    cout << "Option 4 - Mark task as completed" << endl;
    cout << "Option 5 - End program" << endl;

    while (option != 5) {
        
        cout << "Enter Option: ";
        cin >> option;
        
        while (option<1 || option>5) {
            cout << "Invalid input - Try Again" << endl;
            cout << "Enter Option: ";
            cin >> option;

            if (option>=1 && option <=5) {
                break;

            } 
            
        }

        if (option == 1) {

            if (tasks_count>9) {

                cout << "List is full" << endl;

            } else {
                  cout << "Enter task: ";
                  cin >> list[tasks_count][0];
                  list[tasks_count][1] = "pending";
                  tasks_count++;
                  cout << "Task Added" << endl;
            }

            
        } else if (option == 2) {

              for (int i=0; i<tasks_count; i++) {
                  
                  cout << i+1 << " | ";
                  cout << list[i][0] << " - ";
                  cout << list[i][1] << endl;
                
                }
              } else if (option == 3) {

                    int del_task;
                    cout << "Enter task you wish to remove: ";
                    cin >> del_task;

                    while (del_task<1 || del_task>tasks_count) {
                        cout << "Invalid input - Try Again" << endl;
                        cout << "Enter task you wish to remove: ";
                        cin >> del_task;
                        
                        if (del_task>=1 && del_task<=tasks_count) {
                            break;
                        }
                    }

                    for (int i=del_task-1; i<tasks_count; i++) {
                  
                        list[i][0] = list[i+1][0];
                        list[i][1] = list[i+1][1];
                    }

                    tasks_count = tasks_count -1;
                    cout << "Task removed" << endl;
                
                } else if (option == 4) {

                      int comp_task;
                      cout << "Enter task to mark as complete: ";
                      cin >> comp_task;

                      while (comp_task<1 || comp_task>tasks_count) {
                          cout << "Invalid input - Try Again" << endl;
                          cout << "Enter task to mark as complete: ";
                          cin >> comp_task;

                          if (comp_task>=1 && comp_task<=tasks_count) {
                              break;
                          }
                      }

                      list[comp_task-1][1] = "completed";
                      cout << "Task " << comp_task << " marked as completed" << endl;
            
                 } else if (option == 5) {
                      cout << "Program ended";
                 }
              

        } 

        
    }
    
