#include<iostream>
using namespace std;

void pyramid(int n, int i = 1)
{
    if (i > n)
        return;

    for (int j = 1; j <= n - i; j++)
        cout << " ";

    for (int k = 1; k <= 2 * i - 1; k++)
        cout << "*";

    cout << endl;

    pyramid(n, i + 1);
}

int main()
{
    int n;
    cin >> n;
    pyramid(n);
}
