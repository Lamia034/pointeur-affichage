#include<stdio.h>
int main(){
	int a,b,s;
	int *pa,*pb,*ps;
	pa=&a;
	pb=&b;
	ps=&s;
	printf("donner deux entiers:\n");
	scanf("%d%d",pa,pb);
	*ps=*pa + *pb;
	printf("le resultat est: %d",s);//*ps
}
