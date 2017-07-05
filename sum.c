#include "sum.h"

int sum(int n){
	//return value of sum ;range 1 to n
	int res=0;
	int i;
	for(i=1;i<=n;i++)
		res += i;
	return res;
}