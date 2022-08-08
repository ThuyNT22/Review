#include <stdio.h>
int main(){
	int n;
	printf("Nhap gia tri nguyen duong n =");
	scanf("%d",&n);

	float S=0;
	for(int i=1;i<=n;i++){
		S=S+1.0/i;
	}
	printf("Gia tri tong S la: %f",S);
}
