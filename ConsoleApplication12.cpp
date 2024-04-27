#include <iostream>
#include<vector>
using namespace std;

vector<int> vvv(vector<int> vv, int n)
{
	vector<int> vv1 = vv;
	for (int i : vv)
	{
		i += n;
	}
	return vv;
	return vv1;
}