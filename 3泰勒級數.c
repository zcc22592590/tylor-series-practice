/* 原版本(可忽略) 
#include <stdio.h>
#include <math.h>

double main()
{
	double x, result;
	printf("請輸入一個x值以計算arctan(反正切)");
	do
	{
		printf("(該值需介於-1~1, 可包含-1或1): ");
		scanf("%lf", &x);
	}while(x < -1 | x > 1);
	
	result = atan(x);   //atan()是math.h裡面的函數用來表示arctan(x)
						//也就是tan^-(1)x的值，切記這個不是tan的倒數 
	printf("反正切值為: %lf", result);
	
}
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double main(void)
{
	double n;
	double x;
	double tSeries = 0.0;
	double t2;
	double t1;

	printf("請輸入一個x值以計算arctan(反正切)");
	do
	{
		printf("(該值需介於-1~1, 可包含-1或1): ");
		scanf("%lf", &x);
	}while(x < -1 | x > 1);
	

	for (n = 0; n <= 10000; n++) {            //不確定n在式子裡的意思, 但發現n值越大, 則近似值逼近程度越高 
    	t1 = (pow(x, 2 * n + 1)) * pow(-1, n);
    	t2 = t1 / (2 * n + 1);
    	tSeries += t2;
    }
    printf("arctan(%lf)=%lf \n若直接用arctan函數計算則其值為: %lf\n", x, tSeries, atan(x));

  	return 0;
}

























