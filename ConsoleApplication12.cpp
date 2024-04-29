#include <iostream>
#include<vector>
using namespace std;

vector<int> vvv(vector<int> vv, int n)
{
	for (int &i : vv)
	{
		i += n;
	}
	return vv;
}