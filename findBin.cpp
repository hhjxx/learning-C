int findBin(int a[],int n ,int key)
{
	int low = 0;
	int high = n - 1;
	int mid ;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key == a[mid])
		{
			return mid;
		}
		if (key < a[mid])
			high = mid;
		if (key > a[mid])
			low = mid;
	}
	return -1;
}