/********************************************
    ������: ����f(x)=sinx+ln(1+x^2)��x0=0���ĵ���
    ��  Ȩ: ���
    ��  ��: ����Զ
    ��  ��: 2024-10-23 11:04
    ˵  ��: C����ѭ���������
*********************************************/
#include <stdio.h>
#include <math.h>
#define error 1e-6

int main() {
	double x0, h = 0.01, f1, f2 = 0, er = 0.5, y0;
	printf("���������ֵx0=");
	scanf("%lf", &x0);
	y0 = sin(x0) + log(1 + x0 * x0) ;
	while (er >= error) {
		f1 = f2;
		f2 = sin(x0 + h) + log(1 + (x0 + h) * (x0 + h)) - y0;
		f2 = f2 / h;
		printf("%18.15lf\t%18.15lf\n", x0 + h, f2);
		er = fabs(f2 - f1);
		h = h / 5;
	}
	printf("\n������ֵ��;%18.15lf\n", f2);
	y0 = cos(x0) + 2 * x0 / (1 + x0 * x0) ;
	printf("���۵���ֵ:%18.15lf\n", y0 );
	printf("��ֵ�������۽�Ĳ��죺%18.15lf", y0 - f2);
	return 0;
}
