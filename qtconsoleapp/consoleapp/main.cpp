#include <iostream>
#include <string>

using namespace std;

int addNums(int a, int b)
{
    return a + b;
}

int main()
{
    int a = 0, b = 0;
    cin >> a;
    cin >> b;

    cout << addNums(a, b);

    return 0;
}
