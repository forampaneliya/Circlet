#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < i; k++)
        {
            cout << "  ";
        }

        for (int j = 0; j < (rows - i); j++)
        {
            if (j % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }

    return 0;
}