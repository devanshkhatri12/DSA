//  In this question Count number of pairs.

// Codestudio Quetion
// link : https://www.codingninjas.com/studio/problems/pair-sum_1171154


int pairSum(vector<int> &arr, int n, int target)
{
     int start =0 ;
	 int end =n-1;
	 int count = 0;

	while(start < end)
	{
		int sum = arr[start] + arr[end];

		if(sum == target)
		{
			count++;
			start++;
			end--;
		}
		else if( sum > target)
		{
			end--;
		}
		else
		{
			start++;
		}
	}

	if( count > 0)
	return count;

	else
	return -1;
}