#include <bits/stdc++.h>
#include <limits>

using namespace std;

int asker(string message)
{
    cout << message;
    int res;
    cin >> res;
    return res;
}

int main()
{
    cout << "Monty Hall Problem Simulation" << endl << endl;

    int doors = asker("Enter the number of doors: ");
    int N = asker("Enter the number of simulations: ");

    cout << "Without Switch:" << endl;
    int won1 = 0;
    srand((unsigned) time(NULL));
    for (int i = 0; i < N; i++)
    {
        int target = rand() % doors;
        int choose = rand() % doors;
        if (target == choose) {cout << "Won" << endl;won1++;}
        else {cout << "Lost" << endl;}
    }

    cout << endl << "Without Switch" << endl;
    cout << "Number of winnings: " << won1 << endl;
    cout << "Number of simulations: " << N << endl;
    cout << "Winning probability: " << ((double) won1 / N)*100 << "%" << endl << endl;
    cout << "Type anything and then ENTER to continue: ";
    string temp;
    cin >> temp;

    cout << "With Switch:" << endl;
    int won2 = 0;
    srand((unsigned) time(NULL));
    for (int i = 0; i < N; i++)
    {
        int target = rand() % doors;
        int choose = rand() % doors;
        if (target != choose) {cout << "Won" << endl;won2++;}
        else {cout << "Lost" << endl;}
    }
    cout << endl << "With Switch" << endl;
    cout << "Number of winnings: " << won2 << endl;
    cout << "Number of simulations: " << N << endl;
    cout << "Winning probability: " << ((double) won2 / N)*100 << "%" << endl << endl;


    return 0;
}
