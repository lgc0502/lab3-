#include <algorithm>
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<fstream>

using namespace std;

int main(){
	ifstream inFile("file.in",ios::in);

	int num,i;
	int weight;
	int ans=0;
	int j=0;

	inFile>> num;

	vector<int> v(num);
	while(inFile>>weight){
		v[j]=weight;
		j++;
	}

	sort(v.begin(),v.end());

	for(i=num-1;i>num-6;i--){
		ans=ans+v[i];
	}

	cout<<ans<<endl;

	return 0;
}
