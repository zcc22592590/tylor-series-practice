#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double main()
{
	double n;
    double x;
    float tSeries=0.0;        //�s�[���L�{�A���_�x�s�^�o�Ӯe���� 
    double t2;                 //���� 
    double t1;                 //���l 
    double result;
    
	printf("�п�J�@��x�ȥH�p��ln(1+x)");
	do
	{
		printf("(�ӭȻ� > -1, �̤j�� 1 ):");
		scanf("%lf", &x);
	}while(x <= -1 | x > 1);
	
	for (n = 1; n < 99999; n++){
		
		t1 = pow((-1), (n-1)) * pow(x, n);
		t2 = t1 / n;
		tSeries += t2;
	}
	
	result = log(1+x);
	
	printf("�Yx�Ȭ�%lf, �hln(1+x)�Ȭ�:%f \n", x, tSeries);
	printf("�Y��ln(1+x)��ƪ����p��h��Ȭ�: %lf", result);
		
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
	cout << "�п�J�@��x�ȥH�p��ln(1+x)"";
	cin >> x;
	double result = 0.0;
	for (n; n<inf; n++){
		result += pow((-1), (n-1)) * pow(x, n)/n;
	}
	printf("�Yx�Ȭ�%lf, �hln(1+x)�Ȭ�:%lf \n", x, result);
	printf("�Y��ln(1+x)��ƪ����p��h��Ȭ�: %lf", exp(1+x));
}
*/
