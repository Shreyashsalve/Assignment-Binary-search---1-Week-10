#include <iostream>
#include <vector>
using namespace std;
int firstOneIndex(const vector<int>& row) {
    int lo = 0, hi = row.size() - 1;
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        if (row[mid] == 1 && (mid == 0 || row[mid - 1] == 0)) {
            return mid;
        } else if (row[mid] == 0) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1; 
}

int rowWithMaxOnes(const vector<vector<int>>& matrix) {
    int maxOnesRow = -1;
    int maxOnesCount = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        int index = firstOneIndex(matrix[i]);
        if (index != -1) {
            int countOnes = matrix[i].size() - index;
            if (countOnes > maxOnesCount) {
                maxOnesCount = countOnes;
                maxOnesRow = i;
            }
        }
    }
    return maxOnesRow;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 0, 0, 1},
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1}
    };

    int row = rowWithMaxOnes(matrix);
    if (row != -1) {
        cout << "The row with the maximum number of 1's is: " << row << endl;
    } else {
        cout << "No 1's found in the matrix." << endl;
    }

    return 0;
}
