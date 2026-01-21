#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int low = 0, high = n - 1;
    int floorVal = -1, ceilVal = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (a[mid] == x) {
            return {a[mid], a[mid]};
        }
        else if (a[mid] <= x) {
            floorVal = a[mid];   // possible floor
            low = mid + 1;       // move right
        }
        else {
            ceilVal = a[mid];    // possible ceil
            high = mid - 1;      // move left
        }
    }

    return {floorVal, ceilVal};
}

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    pair<int, int> ans = getFloorAndCeil(a, n, x);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}

// int main() {
//     int n, x;
//     cin >> n >> x;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int low = 0, high = n - 1;
//     int floorVal = -1, ceilVal = -1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (a[mid] == x) {
//             floorVal = a[mid];
//             ceilVal = a[mid];
//             break;
//         }
//         else if (a[mid] < x) {
//             floorVal = a[mid];     // possible floor
//             low = mid + 1;         // move right
//         }
//         else {
//             ceilVal = a[mid];      // possible ceil
//             high = mid - 1;        // move left
//         }
//     }

//     cout << floorVal << " " << ceilVal << endl;
//     return 0;
// }
