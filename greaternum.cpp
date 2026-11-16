// tp find the next greater number in an array using stack the next greater number is the first number that is greater than the current number in the array on the right side of the current number
// in the array if there is no greater number on the right side of the current number then we will return -1 for that number in the array

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        if (!s.empty()) {
            result[i] = s.top();
        }
        s.push(nums[i]);
    }

    return result;
}
int main() {
    vector<int> nums = {2,0,5,7,9};
    vector<int> result = nextGreaterElement(nums);

    cout << "Next greater elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
