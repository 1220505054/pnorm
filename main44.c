#include <stdio.h>
#include <stdlib.h>

int main() {
char ogrenci[20]= "	Melek Oral"; 
	char ogrencinum [20] = "1220505054";
	
	printf("********Kullanicidan p ve N sayilarini alan ve p-normlarini yazdiran bir C programi********\n\n\n");
	
	printf("ogrenci adi:%s\n",ogrenci);
	printf("ogrenci numarasi: %s\n\n",ogrencinum);
	
	
	int p , N;
	int x;
	//kullancidan sayilari alir
	printf("Lutfen p sayisini giriniz: ");
	scanf("%d", &p );
	
	printf("Lutfen N sayisini giriniz: ");
	scanf("%d", &N );
	
	printf("(");
	//for dongusu kullanarak girilen sayilarin p normlara donusumu saglanir 
	for(x=1; x<=N ; x++)
	{
		printf("|x%d|^%d", x , p);
	}
	//sondaki bolme islemi bu fonksiyon sayesinde yapilir
	printf(")1/%d", p);
	
}
