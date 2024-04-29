#include <iostream>
#include<vector>
#include "gtest/gtest.h"
using namespace std;

TEST()
{
	vector<int> vv{1, 2, 3};
	vector<int> vv1{2, 3, 4};
	vv = vvv(vv, 1);
	ASSERT_TRUE(vv == vv1);
}