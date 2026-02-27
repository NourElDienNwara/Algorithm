#include <iostream>
using namespace std;

void printFrom1ToN(int n) 
{
    if (n == 0) return;
    printFrom1ToN(n - 1);
    cout << n << endl;
}

int main() 
{
    int n;
    cin >> n;
    printFrom1ToN(n);
}