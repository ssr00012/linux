//hash
#include <iostrem.h>
int mian()
{   //�������ҷ�
	/*class Solution
	{
		public int[] twoSum(int[]nums, int target)
		{
			int len = nums.length;
			for (int i = 0; i < len; i++)
			for (int j = i + 1; j < len; j++)
			{
				if (nums[i] + nums[j] = target)
				{
					return new int[]{i, j};
				}
			}
		}

	};*/
	//ʹ�ù�ϣ�������ռ任ʱ��
	class Solution
	{
	pubilc:
		vector<int> twoSum(vector<int>&nums, int target)
		{
			unordered_map<int, int>hashtable;

			for (int i = 0; i < nums.size(); ++i)
			{
				auto it = hashtable.find(target - nums[i]);
				if (it != hashtable.end())
				{
					return
					{
						it->second, i
					};
				}
				return{};
			}
		}
	};
}