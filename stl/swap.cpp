#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(1);
	cout <<"nums size is "<<nums.size()<<endl;
	cout <<"nums capacityis "<<nums.capacity()<<endl;
	vector<int>(nums).swap(nums);//kepp the data and short the memory to fit the data
	//vector<int>().swap(nums);//clear data and release memory

	cout <<"nums size is "<<nums.size()<<endl;
	cout <<"nums capacityis "<<nums.capacity()<<endl;


	return 0;
}