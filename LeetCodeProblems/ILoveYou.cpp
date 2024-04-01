#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main()
{
    int i, j;

    // Print 'I'
    for (i = -5; i <= 5; i++)
    {
        for (j = -5; j <= 5; j++)
        {
            if (j == 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Print 'Heart'
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if ((i <= 4 && (j % 2 == 0 || (i + j == 4) || (j - i == 4))))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // Print 'U'
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (((j == 0 || j == 14) && i < 5) || (i == 5 && j > 0 && j < 14))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
