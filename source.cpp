#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int size;
    cin >> size;

    vector<int> ints(size);

    for (int i = 0; i < size; i++)
    {
        cin >> ints[i];
    }

    reverse(ints.begin(), ints.end());

    for (int i = 0; i < size; i++)
    {
        cout << ints[i] << " ";
    }

    return 0;
}
