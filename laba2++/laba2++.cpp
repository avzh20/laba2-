#include <iostream>
#include <math.h>

using namespace std;

int max_num();
void print(int max)
{
    cout << max;
}

int main()
{
    int max = max_num();
    print(max);
    system("pause");
    return 0;
}

int max_num()
{
    int x, y;
    cin >> x >> y;
    if (x >= y)
    {
        return x;
    }
    else
    return y;
}