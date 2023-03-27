#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
low mid and high
all zero before low
all 2 after high
all 1 between low and mid

*/

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {

        int n = nums.size();
        int low = 0, high = n - 1, mid = 0;
        while (mid <= high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else if (nums[mid] == 2)
            {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

int main()
{
    Solution sol;
    vector<int> a;
    a.push_back(2);
    a.push_back(0);
    a.push_back(2);
    a.push_back(1);
    a.push_back(1);
    a.push_back(0);

    sol.sortColors(a);
    printVec(a, 6);
    cout << '\n';
    return 0;
}