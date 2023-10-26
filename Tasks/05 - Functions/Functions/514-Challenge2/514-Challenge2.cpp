#include <iostream>
#include <vector>
using namespace std;

int sumVector(vector<int> nums)
{
    int total = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        total += nums[i];
    }

    return total;
}

int main()
{
    vector<int> nums = { 12, 5, 77, 23, 102, 42, 98, 64, 17, 59 };

    cout << "Total = " << sumVector(nums);
}