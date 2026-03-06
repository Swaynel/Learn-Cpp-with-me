#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));
    int MyNum = rand() % 10 + 1;
    int guess;
    cout << "guess a number between 1 and 10\n";
    cin >> guess;
   
    while (guess != MyNum)
    {
        if (guess < MyNum)
        {
            cout << "Wrooong.Too low..Try again!!\n";
            
        }

        else
        {
            cout << "Wrooong.Too high..Try again!!\n";
   
        }
        cin >> guess;
    }

        cout << "You win!! The answer is " << MyNum;
        return 0;
        
    
}
