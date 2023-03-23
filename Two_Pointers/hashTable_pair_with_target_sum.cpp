using namespace std;

#include <iostream>
#include <unordered_map>
#include <vector>

class PairWithTargetSum {
 public:
  static pair<int, int> search(const vector<int>& arr, int targetSum) {
	  unordered_map<int, int> nums;
	  int toFind;
	  for(int i = 0 ; i < arr.size() ; i++) {
		  if(nums.find(targetSum - arr[i]) != nums.end())
			return make_pair(nums[targetSum - arr[i]], i);
		  else
			nums[arr[i]] = i;
	  }
	  return make_pair(-1, -1);
  }
};

int main(int argc, char* argv[]) {
  auto result = PairWithTargetSum::search(vector<int>{1, 2, 3, 4, 6}, 6);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" << endl;
  result = PairWithTargetSum::search(vector<int>{2, 5, 9, 11}, 11);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" << endl;
}



