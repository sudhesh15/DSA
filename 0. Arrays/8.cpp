//union & Intersection of 2 Arrays
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void findUnionAndIntersection(const vector<int>& arr1, const vector<int>& arr2, vector<int>& unionResult, vector<int>& intersectionResult) {
    
    for (int i = 0, int j = 0; i < arr1.size() && j < arr2.size();) {
        if (arr1[i] < arr2[j]) {
            unionResult.push_back(arr1[i]);
            i++;
        } else if (arr1[i] > arr2[j]) {
            unionResult.push_back(arr2[j]);
            j++;
        } else {
            unionResult.push_back(arr1[i]);
            intersectionResult.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    // Add the remaining elements from arr1, if any
    for (; i < arr1.size(); i++) {
        unionResult.push_back(arr1[i]);
    }

    // Add the remaining elements from arr2, if any
    for (; j < arr2.size(); j++) {
        unionResult.push_back(arr2[j]);
    }
}

int main() {
    vector<int> arr1 = {1, 3, 4, 5, 7};
    vector<int> arr2 = {2, 3, 5, 6};
    vector<int> unionResult, intersectionResult;

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    findUnionAndIntersection(arr1, arr2, unionResult, intersectionResult);

    cout << "Union: ";
    for (int i = 0; i < unionResult.size(); i++) {
        cout << unionResult[i] << " ";
    }
    cout << endl;

    cout << "Intersection: ";
    for (int i = 0; i < intersectionResult.size(); i++) {
        cout << intersectionResult[i] << " ";
    }
  
    return 0;
}
