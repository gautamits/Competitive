#include <stdio.h>
int main(){
	int x,y;
	while(1){
		scanf("%d%d",&x,&y);
		if(x==0 && y==0) break;
		int min1;
		scanf("%d",&min1);
		int i;
		int temp;
		for(i=1;i<x;i++){
			scanf("%d",&temp);
			if(temp<min1) min1=temp;
		}
		int count=0;
		for(i=0;i<y;i++){
			scanf("%d",&temp);
			if(temp<=min1) count++;
		}
		if(count >= 2) printf("N\n");
		else printf("Y\n");
	}

	return 0;
}