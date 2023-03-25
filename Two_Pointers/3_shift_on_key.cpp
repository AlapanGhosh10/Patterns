/* Given unsorted array of numbers and a target key, 
remove all instances if key in-place and return the new length of array */

using namespace std;

#include <iostream>
#include <vector>

class RemoveElement {
 public:
  	static int remove(vector<int>& arr, int key) {
		int j = 0;
		for(int i = 0 ; i < arr.size() ; i++) {
			if(arr[i] != key) {
				arr[j] = arr[i];
				j++;
			} 
		}
		return j;
	}
};

int main(int argc, char* argv[]) {
  vector<int> arr = {3, 2, 3, 6, 3, 10, 9, 3};
  cout << "Array new length: " << RemoveElement::remove(arr, 3) << endl;
  for(int i = 0 ; i < arr.size() ; i++)
	  cout << arr[i] << " ";
  cout << endl;
  arr = vector<int>{2, 11, 2, 2, 1};
  cout << "Array new length: " << RemoveElement::remove(arr, 2) << endl;
}
