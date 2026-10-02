#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    // Variables
    int task = 0;
    int notifier = 0;
    char del;
    char status = 'N';

    string course;
    string assignment;
    string dueDate;
    string searcher;

    while (task != 7)
    {
        system("cls");

        // Main menu
        cout << "\n========================================\n"
             << "        STUDENT PLANNER\n"
             << "========================================\n"
             << "1. Add assignment\n"
             << "2. View assignment\n"
             << "3. Search assignments\n"
             << "4. Mark assignment complete\n"
             << "5. Delete assignment\n"
             << "6. Save assignments\n"
             << "7. Exit\n\n";

        cout << "Choose an option: ";
        cin >> task;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            task = 0;
        }
        else
        {
            cin.ignore(100, '\n');
        }

        // Add assignment
        if (task == 1)
        {
            cout << "\nCourse name: ";
            getline(cin, course);

            cout << "\nAssignment title: ";
            getline(cin, assignment);

            cout << "\nDue date: ";
            getline(cin, dueDate);

            notifier = 1;
            status = 'N';

            cout << "\nAssignment added successfully.\n";
        }

        // View assignment
        if (task == 2)
        {
            if (notifier >= 1)
            {
                cout << "\n========================================\n"
                     << "           ALL ASSIGNMENTS\n"
                     << "========================================\n";

                cout << "Course: " << course << endl
                     << "Assignment: " << assignment << endl
                     << "Due date: " << dueDate << endl
                     << "Completed?: " << status << endl;
            }
            else
            {
                cout << "\nNo assignments have been added yet.\n";
            }
        }

        // Search assignments
        if (task == 3)
        {
            if (notifier < 1)
            {
                cout << "\nYou have no assignments to search.\n";
            }
            else
            {
                cout << "\nEnter a course name or assignment title: ";
                getline(cin, searcher);

                if (searcher == course || searcher == assignment)
                {
                    cout << "\n========================================\n"
                         << "           SEARCH RESULTS\n"
                         << "========================================\n";

                    cout << "Course: " << course << endl
                         << "Assignment: " << assignment << endl
                         << "Due date: " << dueDate << endl
                         << "Completed?: " << status << endl;
                }
                else
                {
                    cout << "\nDid not find your course or assignment title.\n";
                }
            }
        }

        // Mark assignment as complete
        if (task == 4)
        {
            if (notifier < 1)
            {
                cout << "\nYou currently have no assignments.\n";
            }
            else
            {
                cout << "\nWould you like to mark the following assignment "
                     << "as complete?\n"
                     << "Assignment: " << assignment << "\n"
                     << "(Y/N): ";

                cin >> status;
                cin.ignore(100, '\n');

                if (status == 'Y' || status == 'y')
                {
                    status = 'Y';
                    cout << "\nYou have marked the assignment as complete.\n";
                }
                else if (status == 'N' || status == 'n')
                {
                    status = 'N';
                    cout << "\nYou have marked the assignment as incomplete.\n";
                }
                else
                {
                    cout << "\nInvalid input.\n";
                }
            }
        }

        // Delete assignment
        if (task == 5)
        {
            if (notifier < 1)
            {
                cout << "\nYou currently have no assignments.\n";
            }
            else
            {
                cout << "\n========================================\n"
                     << "You currently have an assignment called:\n"
                     << assignment << "\n"
                     << "========================================\n";

                cout << "Would you like to delete it? (Y/N): ";
                cin >> del;
                cin.ignore(100, '\n');

                if (del == 'Y' || del == 'y')
                {
                    assignment = "";
                    course = "";
                    dueDate = "";
                    status = 'N';
                    notifier = 0;

                    cout << "\nYou have successfully deleted the assignment.`n";
                }
                else if (del == 'N' || del == 'n')
                {
                    cout << "\nYou have not deleted the assignment.";
                }
                else
                {
                    cout << "\nInvalid answer.";
                }
            }
        }

        // Save assignments
        if (task == 6)
        {
            cout << "\nComing soon.\n";
        }

        // Invalid menu option
        if (task < 1 || task > 7)
        {
            cout << "\nInvalid option. Please choose a number from 1 to 7.\n";
        }

        // Return to menu
        if (task != 7)
        {
            cout << "\nPress Enter to return to the menu.";
            cin.get();
        }
        else
        {
            cout << "\nYou have exited.\n";
        }
    }

    return 0;
}
