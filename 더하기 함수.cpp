#include<stdio.h>
int a(int b, int c){
	return b+c;
}
int main(){
	int d=10;
	int e=2;
	printf("%d\n",a(d,e));
	printf("%d",a(2,3));
}
