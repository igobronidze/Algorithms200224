#include <iostream>
#include <cmath>
using namespace std;

int thirdMax(vector<int>& nums) {
	int n = nums.size();
	long long firstMax = pow(2, 32) * -1;
	long long secondMax = pow(2, 32) * -1;
	long long thirdMax = pow(2, 32) * -1;

	for (int j = 0; j < n; j++) {
		if (nums[j] > firstMax) {
			firstMax = nums[j];
		}
	}
	
	for (int j = 0; j < n; j++) {
		if (nums[j] > secondMax && nums[j] != firstMax) {
			secondMax = nums[j];
		}
	}
	
	for (int j = 0; j < n; j++) {
		if (nums[j] > thirdMax && nums[j] != firstMax && nums[j] != secondMax) {
			thirdMax = nums[j];
		}
	}
	
	if (thirdMax == pow(2, 32) * -1) {
		return firstMax;
	} else {
		return thirdMax;
	}
}

int main () {
	int arr[] = {2, 2, 3, 1};
	
	cout << thirdMax(arr, 4) << endl;
	
	return 0;
}
