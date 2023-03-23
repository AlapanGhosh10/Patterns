using namespace std;

#include <iostream>
#include <vector>

class PairWithTargetSum {
 public:
  static pair<int, int> search(const vector<int>& arr, int targetSum) {
    // TODO: Write your code here
    int lp, rp, sum;
    lp = 0;
    rp = arr.size() - 1;
    while(lp < rp) {
	    sum = arr[lp] + arr[rp];
	    if(sum > targetSum)
		    rp--;
	    else if(sum < targetSum)
		    lp++;
	    else
		    return make_pair(lp, rp);
    }
    return make_pair(-1, -1);
  }
};

int main(int argc, char *argv[]) {
  auto result = PairWithTargetSum::search(vector<int>{1, 2, 3, 4, 6}, 6);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" << endl;
  result = PairWithTargetSum::search(vector<int>{2, 5, 9, 11}, 11);
  cout << "Pair with target sum: [" << result.first << ", " << result.second << "]" << endl;
}
