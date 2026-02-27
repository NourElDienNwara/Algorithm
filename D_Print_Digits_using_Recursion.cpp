#include<iostream>
using namespace std;

void printDigits(long long n)
{
    if (n == 0)
        return;
    printDigits(n / 10);
    cout << n % 10 << " ";
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        printDigits(num);
        cout << endl;
    }
}