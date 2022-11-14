#include <iostream>
#include <string>
#include <vector>

using namespace std;

int adding (int a, int b)
{
    return a+b;
}

int main()
{
    //declaring two int
    int a, b, result;
    //Taking two int input
    cin >> a >> b;
    // Calling the function to execute
    result = adding(int a, int b);
    //printing the output
    cout << result << endl;

    return 0;
}
