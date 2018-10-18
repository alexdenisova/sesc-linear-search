#include <stdio.h>

int main()
{
    int i =0, k, first = -1, last = -1, n;
	scanf("%d", &n);
	scanf("%d", &k);
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
  for(i=0; i<n; i++){
    if((first==-1) && (arr[i]==k)){
      first = i;
    }
    if((first!=-1) && (arr[i]==k)){
      last = i;
    }
  }
	printf("%d %d", first, last);
	

    return 0;
}
