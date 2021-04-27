/* smtgh */

// A function which checks whether an element is present in array or not
// binary search works only if array is sorted

int binary_search(int Arr[], int l, int r, int target) {
	while(l <= r) {
		int mid = l + (r-l)/2;

		// if we find the target value then return its index
		if(Arr[mid] == target) {
			return mid;
		}

		// if the value is less then target then 
		// move towards the right side of the array

		else if(Arr[mid] < target) {
			l++;
		}

		// else move towards the left side of the array
		else {
			r--;
		}
	}

	// if the element is not present in the array
	return -1;
}
