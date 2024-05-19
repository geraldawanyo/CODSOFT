#include <iostream>
#include <string>

using namespace std;

string list[9][9] = {{""},{""}};
int tasks_count = 0;
int option = -1;

int main () {
    /*Prints different function options*/
    cout << "Option 1 - Add task to list " << endl;
    cout << "Option 2 - View to do list " << endl;
    cout << "Option 3 - Remove task from list " << endl;
    cout << "Option 4 - Mark task as completed" << endl;
    cout << "Option 5 - End program" << endl;

    /*Program will keep running until user selects option 5*/
    while (option != 5) {
        
        /*Allows user to input option number*/
        cout << "Enter Option: ";
        cin >> option;
        
        /*Loop continues until user inputs number between 1 and 5*/
        while (option<1 || option>5) {
            cout << "Invalid input - Try Again" << endl;
            cout << "Enter Option: ";
            cin >> option;

            if (option>=1 && option <=5) {
                break;

            } 
            
        }
        /*If Option 1 is selcted...*/
        if (option == 1) {
            
            /*Tells user that list is full if the capacity has been reached*/
            if (tasks_count>9) {

                cout << "List is full" << endl;
            /*Allows user to add task if list capacity hasn't been reached*/
            } else {
                  cout << "Enter task: ";
                  cin >> list[tasks_count][0];
                  list[tasks_count][1] = "pending";
                  tasks_count++;
                  cout << "Task Added" << endl;
            }

          /*If Option 2 is selcted...*/ 
        } else if (option == 2) {
              
              /*Loops through array and prints each task and its status*/
              for (int i=0; i<tasks_count; i++) {
                  
                  cout << i+1 << " | ";
                  cout << list[i][0] << " - ";
                  cout << list[i][1] << endl;
                }

                /*If Option 3 is selected...*/
              } else if (option == 3) {

                    /*Allows user to input task to remove*/
                    int del_task;
                    cout << "Enter task you wish to remove: ";
                    cin >> del_task;

                    /*Loop continues until input is between 1 and task count*/
                    while (del_task<1 || del_task>tasks_count) {
                        cout << "Invalid input - Try Again" << endl;
                        cout << "Enter task you wish to remove: ";
                        cin >> del_task;
                        
                        if (del_task>=1 && del_task<=tasks_count) {
                            break;
                        }
                    }
                    
                    /*Removes task selected and shuffles the remaining tasks up*/
                    for (int i=del_task-1; i<tasks_count; i++) {
                  
                        list[i][0] = list[i+1][0];
                        list[i][1] = list[i+1][1];
                    }

                    tasks_count = tasks_count -1;
                    cout << "Task removed" << endl;

                  /*If Option 4 is selected...*/
                } else if (option == 4) {

                      /*Allows user to input task to mark as completed*/
                      int comp_task;
                      cout << "Enter task to mark as complete: ";
                      cin >> comp_task;
                      
                      /*Loop continues until user inputs number between 1 and task count*/
                      while (comp_task<1 || comp_task>tasks_count) {
                          cout << "Invalid input - Try Again" << endl;
                          cout << "Enter task to mark as complete: ";
                          cin >> comp_task;

                          if (comp_task>=1 && comp_task<=tasks_count) {
                              break;
                          }
                      }
                      /*changes status of selected task from "pending" to "completed" */
                      list[comp_task-1][1] = "completed";
                      cout << "Task " << comp_task << " marked as completed" << endl;

                   /*If Option 5 is selected...*/
                 } else if (option == 5) {
                      /*Program loop break and program ends*/
                      cout << "Program ended";
                 }
              

        } 

        
    }
    
