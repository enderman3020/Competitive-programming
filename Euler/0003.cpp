#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

bool a[3000000];

int main(){
	
	int N = 3000000;
	
	for(int i = 0; i < N; i++){
		a[i] = true;
	}
	
	a[0] = false;
	a[1] = false;
	
	for(int i = 2; i < N; i++){
		if(a[i]){
			for(int j = i * 2; j < N; j += i){
				a[j] = false;
			}
		}
	}
	
	long long int hoge = 600851475143;
	
	int ans = 0;
	
	for(int i = 2; i < 3000000; i++){
		if(hoge % i == 0 && a[i]){
			ans = i;
		}
	}
	
	cout << ans << endl;
	
	return 0;
}

