#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int target, pair = 0, i, j, k;
    vector<int> vec = {3, 1, 2, 4, 0, 6};
    cin >> target;
    for (i = 0; i < 6; i++)
    {
        for (j = i + 1; j < 6; j++)
        {
            for (k = j + 1; k < 6; k++)
            {
                if (vec[i] + vec[j] + vec[k] == target)
                {
                    pair++;
                }
            }
        }
    }
    cout << pair;
    return 0;
}