#include <iostream>
#include <vector>
using namespace std;
// 二分法，不会修改原始数组

int main() {
	int n;
	cin >> n;
	std::vector<int> nums(n);
	int ans = -1;
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int left = 0, right = n - 1, mid;
	int count = 0;
	while (left < right) {
		count = 0;
		mid = left + (right - left) >> 1;
		for (int i: nums) {
			if (i <= mid) count++;
		}
		if (count > mid - left) right = mid;
		else left = mid + 1;
	}
	ans = left;
	cout << ans << endl;
	return 0;
}
