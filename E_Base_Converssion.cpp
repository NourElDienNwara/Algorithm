#include<iostream>
using namespace std;

void convert(int n)
{
    if (n == 0)
        return;
    convert(n/2);
    cout << n%2;
}

int main()
{
    int n;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        int num;
        cin >> num;
        convert(num);
        cout << endl;
    }
}