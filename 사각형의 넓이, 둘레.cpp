#include<stdio.h>
int main(){
	double w;
	double h;
	double area;
	double perimeter;
	w=10.0;
	h=5.0;
	area=w*h;
	perimeter=2*(w+h);
	printf("�簢���� ����: %lf\n",area);
	printf("�簢���� �ѷ�: %lf\n",perimeter);
	printf("�簢���� ����: %lf\t",area);
	printf("�簢���� �ѷ�: %lf",perimeter);
	return 0;
}
