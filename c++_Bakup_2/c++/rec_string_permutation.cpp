#include<iostream>
#include<vector>
#include<string>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	#endif
}

class Solution{
private:
	void solve(vector<char> nums, vector<vector<char>>& ans, int index){
		//base case
		if(index >= nums.size()){
			ans.push_back(nums);
			return;
		}
		for(int j=index; j<nums.size(); j++){
			swap(nums[index], nums[j]);
			solve(nums,ans,index);
			//backtrack
			swap(nums[index], nums[j]);
		}
	}
public:
	std::vector<std::vector<char>> permute(std::vector<char>& nums){
		vector<vector<char>> ans;
		int index = 0;
		solve(nums,ans,index);
		return ans;
	}
};

int main()
{
    std::string s;
    cin>>s;
 
    std::vector<char> v(s.begin(), s.end());
 
 	Solution sol;
 	sol.permute(v);

    for (const char &c: v) {
        std::cout << c;
    }
    return 0;
}