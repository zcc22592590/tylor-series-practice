#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double main()
{
	double result;
	double n;
    double x;
    double tSeries=0.0;        //連加的過程，不斷儲存回這個容器裡 
    double t1;
	printf("請輸入一個x值以計算\"1/(1-x)\"");
	do
	{
		printf("(該值需介於-1~1且不含-1和1):");
		scanf("%lf", &x);
	}while(x <= -1 | x >= 1);

	for (n = 0; n < 99999; n++){
		
		t1 = pow(x, n);
		tSeries += t1;
		
	}
	
	result = 1/ (1-x);
	
	printf("當x值為%lf, 其結果為: %lf\n", x, tSeries);
	printf("若直接計算其值為: %lf\n", result);
	
	return 0;
}
