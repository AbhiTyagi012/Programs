#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int isAutomorphic(int num){
	int square = num * num;
	while(num!=0){
		if(num%10!=square%10)
			return 0;
	num = num/10;
	square = square/10;
	}
	return 1;
}
int main() {
	int num;
	cin>>num;
	int sq = num*num;
	if(isAutomorphic(num))
        cout << "Num: "<< num << ", Square: " << sq << " - is Automorphic";
    else
        cout << "Num: "<< num << ", Square: " << sq << " - is not Automorphic";
	return 0;
}
