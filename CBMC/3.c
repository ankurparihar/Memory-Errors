int binsearch(int x)
{
	int a[16];
	int low = 0, high = 16;
	int middle;
	while (low < high)
	{
		middle = low + ((high - low) >> 1);

		if(a[middle] < x)
			low = middle;
		else if(a[middle] > x)
			high = middle;
		else
			return middle;
	}
	
	return -1;
}