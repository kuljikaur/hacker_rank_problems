#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int alice = 0;
    int bob = 0;

    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) alice++;
        else if (a[i] < b[i]) bob++;
    }

    vector<int> result;
    result.push_back(alice);
    result.push_back(bob);
    return result;
}

int main() {
    vector<int> a(3), b(3);
    if (!(cin >> a[0] >> a[1] >> a[2])) return 0;
    if (!(cin >> b[0] >> b[1] >> b[2])) return 0;

    vector<int> result = compareTriplets(a, b);
    cout << result[0] << " " << result[1] << "\n";
    return 0;
}




