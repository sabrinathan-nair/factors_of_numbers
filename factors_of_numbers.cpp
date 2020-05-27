// factors_of_numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace  std;

int main()
{
    int i, n;                   // declare variables i for the counter and n for input whose factors are to be found

    cout << "Enter a number : " << endl; // ask user for input
    
    cin >> n;                       // assign input to variable

    for (i = 1; i<=n; ++i)          // i starts with 1 here. division with zero not permitted in CPP. i is the counter
    {
        if(n%i==0)                  // reminder for all factors is zero and hence modulo
        {
            cout << i<< endl;       // print each factor.. in a seperate line.. hence endl
        }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
