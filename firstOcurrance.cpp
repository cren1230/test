#include <iostream>
#include <vector>
#include <map>

using namespace std;
// Declaration
int firstOcurrance(vector<int>& arr) {
    map<int, int> m;
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (m.find(arr[i]) != m.end()) {
            return m[arr[i]];
        }
        m[arr[i]] = i;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    int index = firstOcurrance(arr);
    cout << index << endl;
    return 0;
}