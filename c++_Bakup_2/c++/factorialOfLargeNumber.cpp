#include <iostream>
#include<vector>
using namespace std;

int factOf(int n){
	vector<int> res;
	res.push_back(1);
	for(int x = 2;x<=n;x++){
		int car = 0;
		for(int i=0;i<res.size();i++){
			int val = res[i]*x + car;
			res[i] = va;%10;
			car = val/10;
		}
		while(car!=0){
			res.push_back(car%10);
			car/=10;
		}
	}
	reverse(res.begin(),res.end());
	return  res;
}

int main()
{
	int n;
	cin>>n;
	cout<<factOf(n)<<endl;
	return 0;
}