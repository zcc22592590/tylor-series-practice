/* �쪩��(�i����) 
#include <stdio.h>
#include <math.h>

double main()
{
	double x, result;
	printf("�п�J�@��x�ȥH�p��arctan(�ϥ���)");
	do
	{
		printf("(�ӭȻݤ���-1~1, �i�]�t-1��1): ");
		scanf("%lf", &x);
	}while(x < -1 | x > 1);
	
	result = atan(x);   //atan()�Omath.h�̭�����ƥΨӪ��arctan(x)
						//�]�N�Otan^-(1)x���ȡA���O�o�Ӥ��Otan���˼� 
	printf("�ϥ����Ȭ�: %lf", result);
	
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

	printf("�п�J�@��x�ȥH�p��arctan(�ϥ���)");
	do
	{
		printf("(�ӭȻݤ���-1~1, �i�]�t-1��1): ");
		scanf("%lf", &x);
	}while(x < -1 | x > 1);
	

	for (n = 0; n <= 10000; n++) {            //���T�wn�b���l�̪��N��, ���o�{n�ȶV�j, �h����ȹG��{�׶V�� 
    	t1 = (pow(x, 2 * n + 1)) * pow(-1, n);
    	t2 = t1 / (2 * n + 1);
    	tSeries += t2;
    }
    printf("arctan(%lf)=%lf \n�Y������arctan��ƭp��h��Ȭ�: %lf\n", x, tSeries, atan(x));

  	return 0;
}

























