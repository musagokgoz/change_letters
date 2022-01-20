#include <stdio.h>

int main(){
	char kelime[20];
	char harf;
	char yeniKelime;
	int i=0;
	
	printf("kelimeyi giriniz.. ");
	scanf("%s",kelime);
	
	fflush(stdin);
	
    printf("degistirilecek harfi giriniz.. ");
	scanf("%c",&harf);
	
	fflush(stdin);
	
	printf("hangi harf ile degissin.. ");
	scanf("%c",&yeniKelime);
	
	while(kelime[i]!='\0'){
		
		if(kelime[i]==harf){
			
			kelime[i]=yeniKelime;
			
		}
		i++;
	}
	printf("%s",kelime);
	
	return 0;
}
