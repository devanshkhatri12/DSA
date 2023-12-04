

// Codestudio question
// link :  https://bit.ly/3Il0c7n


vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;

    int i=0 , j=0;

	while(i<n && j<m)
	{
		if(arr1[i] < arr2[j])
		{
            i++;
		}

		else if(arr1[i] == arr2[j])
		{
			ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	return ans;
}