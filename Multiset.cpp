//multiset , overflow - constraints
//https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	//cout << "Input number is " << num << endl;	// Writing output to STDOUT
	
	while(num--)
	{
		long long candies,n,k;
		cin>>n>>k;
		multiset<long long>bags;
		for(int i=0;i<n;i++)
		{
		cin>>candies;
		bags.insert(candies);
		}
		long long total=0;
		for(int i=0;i<k;i++)
		{
			auto it=--bags.end();
			total+=(*it);
			long long k=(*it)/2;
			bags.erase(it);
			bags.insert(k);
		}
		cout<<total<<endl;
	} 
}
