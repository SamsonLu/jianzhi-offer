#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
	if (nums[i] == i) continue;
	if (nums[i] == nums[nums[i]]) {
	    ans = nums[i];
	    break;
	}
	swap(nums[i], nums[nums[i]]);
    }
    cout << ans << endl;
    return 0;
}

