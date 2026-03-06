#include <iostream>
#include <string>
using namespace std;
int main()
{
	string tasks[100];
	int taskCount=0;
	while (true)
	{
		cout << "1. Add Task" << endl;
		cout << "2. View Tasks" << endl;
		cout << "3. Exit" << endl;
		int choice;
		cin >> choice;
        cin.ignore(); 
		if (choice==1)
		{
        cout << "Add task : " << endl;
        getline(cin, tasks[taskCount]);
        taskCount++;
		}
		else if (choice==2)
		{
            cout << "Tasks : " << endl;
            for (int i=0; i < taskCount; i++){
                cout <<i + 1<< ". " << tasks[i] << endl;
            }
		}
        else if (choice==3)
        {
            cout << "Exiting the program. Goodbye!" << endl;
            break;
	}
    else
    {
        cout << "Invalid choice. Please try again." << endl;
}
}