#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double main()
{
	double n;
    double x;
    float tSeries=0.0;        //連加的過程，不斷儲存回這個容器裡 
    double t2;                 //分母 
    double t1;                 //分子 
    double result;
    
	printf("請輸入一個x值以計算ln(1+x)");
	do
	{
		printf("(該值需 > -1, 最大為 1 ):");
		scanf("%lf", &x);
	}while(x <= -1 | x > 1);
	
	for (n = 1; n < 99999; n++){
		
		t1 = pow((-1), (n-1)) * pow(x, n);
		t2 = t1 / n;
		tSeries += t2;
	}
	
	result = log(1+x);
	
	printf("若x值為%lf, 則ln(1+x)值為:%f \n", x, tSeries);
	printf("若用ln(1+x)函數直接計算則其值為: %lf", result);
		
	return 0;
	
}

/*
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
using namespace std;

double main()
{
	int inf = 10000;
	int n=1;
	double x = 0;
	cout << "請輸入一個x值以計算ln(1+x)"";
	cin >> x;
	double result = 0.0;
	for (n; n<inf; n++){
		result += pow((-1), (n-1)) * pow(x, n)/n;
	}
	printf("若x值為%lf, 則ln(1+x)值為:%lf \n", x, result);
	printf("若用ln(1+x)函數直接計算則其值為: %lf", exp(1+x));
}
*/
