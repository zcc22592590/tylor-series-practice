#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double main()
{
	double result;
	double n;
    double x;
    double tSeries=0.0;        //�s�[���L�{�A���_�x�s�^�o�Ӯe���� 
    double t1;
	printf("�п�J�@��x�ȥH�p��\"1/(1-x)\"");
	do
	{
		printf("(�ӭȻݤ���-1~1�B���t-1�M1):");
		scanf("%lf", &x);
	}while(x <= -1 | x >= 1);

	for (n = 0; n < 99999; n++){
		
		t1 = pow(x, n);
		tSeries += t1;
		
	}
	
	result = 1/ (1-x);
	
	printf("��x�Ȭ�%lf, �䵲�G��: %lf\n", x, tSeries);
	printf("�Y�����p���Ȭ�: %lf\n", result);
	
	return 0;
}
