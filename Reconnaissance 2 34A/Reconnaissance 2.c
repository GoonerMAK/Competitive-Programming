#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, min;
	scanf("%d", &n);
	int height[n];
	int pos1 = 1, pos2 = n;

	for(i=0 ; i<n ; i++)
	{
		scanf("%d", &height[i]);
	}

	min = abs( height[0] - height[n-1] );

	for(i=0 ; i<n-1 ; i++)
	{
		if(min > abs(height[i]-height[i+1]))
		{
			min  = abs(height[i]-height[i+1]);
			pos1 = i+1;
			pos2 = i+2;
		}

	}
	printf("%d %d", pos1, pos2);
	return 0;

}
