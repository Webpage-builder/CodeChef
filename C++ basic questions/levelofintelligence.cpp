// program to print chart for level of intelligence.
#include <iostream>
using namespace std;
int main()
{
    float i, y, x;

    for (y = 1; y <= 6; y++)
    {
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            i = 2 + (y + 0.5 * x);
            cout << "when i is " << i << " and x is " << x << "then level of intelligence is: " << y << endl;
        }
    }
    return 0;
}