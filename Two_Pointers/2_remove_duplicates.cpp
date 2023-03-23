using namespace std;

#include <iostream>
#include <vector>

class RemoveDuplicates {
 public:
  static int remove(vector<int>& arr) {
	  int j = 1;
	  for(int i = 1 ; i < arr.size() ; i++) {
		  if(arr[i] != arr[j-1]) {
			  arr[j] = arr[i];
			  j++;
		  }
	  }
	  return j;
  }
  static void printArray(vector<int>& arr, int n) {
	  for(int i = 0 ; i < n ; i++)
		  cout << arr[i] << " ";
	  cout << endl;
  }
};

int main(int argc, char* argv[]) {
  vector<int> arr = {2, 3, 3, 3, 6, 9, 9};
  RemoveDuplicates::printArray(arr, RemoveDuplicates::remove(arr));

  arr = vector<int>{2, 2, 2, 11};
  RemoveDuplicates::printArray(arr, RemoveDuplicates::remove(arr));

}
