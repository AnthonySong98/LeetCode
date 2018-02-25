vector<int> nextGreaterElements(vector<int>& nums) {
	int n = nums.size();
	vector<int> res(n, -1);
	vector<int> flag(n, 1);
	stack<int> index;
	stack<int> temp; index.push(0); temp.push(nums[0]);
	int i = 1; int pp = 3;
	while (flag[i] == 1)
	{
		if (nums[i] <= temp.top() && i != index.top())
		{
			temp.push(nums[i]);
			index.push(i);

		}
		else if (nums[i]>temp.top())
		{
			if (!temp.empty())
			{
				while (nums[i] > temp.top())
				{
					int t, s;
					temp.pop(); s = index.top(); index.pop(); res[s] = nums[i];
					flag[s] = 0;
					if (temp.empty()) break;
				}

				if (!temp.empty()&&temp.top() == nums[i] && i == index.top()) { temp.pop(); index.pop(); res[i] = -1; }// break;}
				else
				{
					temp.push(nums[i]);
					index.push(i);
				}
			}
		}
		i = (i + 1) % n;
	}

	return res;
}



int main() {
    std::vector<int> test;
    test[0]=3;
    test[1]=8;
    test[2]=0;
    test[3]=2;
    test[4]=2;
    test[5]=4;
    
    std::cout<<nextGreaterElements(test)[0];
    
    return 0;
}
