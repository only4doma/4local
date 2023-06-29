#include<bits/stdc++.h>
using namespace std;

double giveRoot(int num) {
	int lt = 0, rt = num;
	double ans = 0;
	
	while(lt <= rt){
		int mid = lt + (rt - lt) / 2;
		if((mid * mid) == num){
			return mid;
		}
		if((mid * mid) < num){
			ans = mid;
			lt = mid + 1;
		}
		else {
			rt = mid - 1;
		}
	}
	
	double dec = 0.1;
	
	for(int i = 1; i <= 10; ++i){
		while((ans * ans) <= num){
			ans += dec;
		}
		ans -= dec;
		dec /= 10;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	
	printf("%0.10lf", giveRoot(n));
	return 0;
}
