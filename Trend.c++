#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

void loading()
{
    system("cls");
    char a = 177, b = 219;
    cout << "\t\t\t\t\tLoading ... \n";
    cout << "\t\t\t\t";
    for (int i = 0; i < 26; i++)
        cout << a;
    cout << "\r";
    cout << "\t\t\t\t";
    for (int i = 0; i < 26; i++)
    {
        cout << b;
        Sleep(100);
    }
    cout << endl;
}

int main()
{
    string line;
    loading();
    Sleep(100);
    system("cls");
    ifstream FILE("Trend.txt");
    while (!FILE.eof())
    {
        getline(FILE, line);
        cout << line << endl;
        Sleep(50);
    }
}