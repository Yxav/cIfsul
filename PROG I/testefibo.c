#include <stdio.h>
#include <math.h>

main(){
	int x,y,r,quant,i;
	x = 0;
	y = 1;
	scanf("%d",&quant);
	for( i = 0; i<quant;i++){
		r = x + y;
		printf("%d + %d = %d\n",x,y,r)	;
		x = y;
		y = r;
		
	}
	system("pause");
}
