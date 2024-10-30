#include<iostream>
using namespace std;
int main() {
	long sum,test_case,x,y;
	cin>>test_case;
	
    if(test_case>=1&&test_case<=1000){
        for(int i = 0 ;i<test_case;i++){
            cin>>sum;
            if(sum>=0&&sum<=1000000000){
                for(x=0;x<2000000000;x++){
                	y=sum-x;
                int p=(x*y);
                    if(p<0){
                        cout<<x*y<<"\n";
                        break;
                    }
                }
            }
        }
    }
	return 0;
}