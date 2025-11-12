#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    //------ declaration of vector ------

    // vector<int> arr;

    // ---- declaration with size -----

    // vector<int> arr(5);

    //----- declaration with value -----

    vector<int> arr = {1,2,3,4,5};

    //----- Adding value in vector -------
    // arr.push_back(10);
    // arr.push_back(30);
    // arr.push_back(50);
    // arr.push_back(70);
    // arr.push_back(90);

    // ---- Deleting value from vector ----
    // arr.pop_back();


    // int n = arr.size();

    // ----- Basic operation in vector -----

    int maxElement = *max_element(arr.begin(), arr.end());

    int minElement = *min_element(arr.begin(), arr.end());

    int sum = accumulate(arr.begin(), arr.end(), 0);

    // --- sort vector ----

    sort(arr.begin(), arr.end());

    // ---- Reverse vector ----

    reverse(arr.begin(), arr.end());


    // -- sort in Descending order ----

    sort(arr.begin(), arr.end(), greater<int>());

    cout << sum << endl;
    cout << minElement << endl;
    cout << maxElement << endl;

    return 0;
}