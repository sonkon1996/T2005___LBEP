#include <stdio.h>

int main(){
	int n, tong = 0;
	printf ("Nhap so luong mang:");
	scanf ("%d", &n);
	int ary[n];
	int i;
	for (i=0;i<n;i++){
		printf("Nhap gia tri cho mang:\n");
		scanf("%d", &ary[i]);
		tong = tong + ary[i];
	}
	float ketQua = (float) tong / n;
	printf ("Gia tri trung binh cac phan tu trong mang la: %.2f", ketQua);
	return 0;
}
