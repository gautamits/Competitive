//Once, after a stressful day, Chef decided to relax and visit a casino near his house to gamble. He feels lucky and he's going to bet almost all of his money.

//The game Chef is going to play in the casino consists of tossing a die with N faces twice. There is a number written on each face of the die (these numbers are not necessarily distinct). In order to win, Chef must get the number A on the first toss and the number B on the second toss of the die.


//The excited viewers want to know the probability that Chef will win the game. Can you help them find that number? Assume that Chef gets each face of the die with the same probability on each toss and that tosses are mutually independent.
#include <stdio.h>
int main(){
	int t;;
	scanf("%d",&t);
	while(t--){
		double n,a,b;
		scanf("%lf%lf%lf",&n,&a,&b);
		int cnta=0, cntb=0;
		int i;
		for(i=0;i<n;i++){
			double temp;
			scanf("%lf",&temp);
			if(temp==a) cnta+=1;
			if (temp==b) cntb+=1;
			//prdoublef("%d %d\n",cnta, cntb);
		}
		printf("%lf\n",(cnta/n)*(cntb/n));
	}
}
