/*
PROJE ODEV�
Ogrenci No:13253039
Hilal MEM�S
*/


#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <ctype.h>
struct siginmaci
{
	char siginmaci_no[11];
	char ad[20];
	char soyad[20];
	char dogum_tarihi[10];
	char dogum_yeri[20];
	char cinsiyet[10];
	char uyruk[20];
	char meslek[20];
	char egitim_durumu[20];
	char telefon[11];
	char yerlestirildigi_adres[20];
	char geldigi_sehir[10];
	char gelis_tarihi[10];
	char eposta[20];
}s�g�nmac�,s�g�nmac�_ekleme[BUFSIZ],s�g�nmac�g�ncelleme[BUFSIZ],s�g�nmac�sildir[BUFSIZ],s�g�nmac�_listeleme[BUFSIZ],s�g�nmac�_arama[BUFSIZ];
struct kullanici
 {
	 char tc[11];
	 char ad[20];
	 char soyad[20];
	 char tel[11];
	 char adres[20];
	 char eposta[20];
	 char kullanici_adi[20];
	 char �ifre[10];
	 char yetki_t�r�[20];
 }admin,s�g�nmac�_memuru,kullan�c�,�yesildir[BUFSIZ],�yeg�ncelleme[BUFSIZ];  
void �yesil();
void kullan�c��yeol();
void s�g�nmac�ekle();
void s�g�nmac�sil();
void �yearama();
void s�g�nmac�g�ncelle();
void s�g�nmac�arama();
void s�g�nmac�listeleme();
void ksifredegistir(char []);
void �yeg�ncelle();
void admin�yeol();
void s�g�nmac�memuru�yeol();
void kullan�c�KBG();
void cag�rma();
int men�1();
int men�2();
int men�3();
int men�4();
int sorgulama(char []);
int sorgulama2(char []);
int sorgulama3(char []);
int sorgulama4(char []);
int sorgulama5(char []);
int sorgulama6(char []);
int sorgulama7(char []);
int sorgulama8(char []);
int sorgulama9(char []);
int sorgulama10(char []);
int sorgulama11(char []);
int sorgulama12(char []);
int sorgulama13(char []);
int sorgulama14(char []);
int sorgulama15(char []);
int sorgulama16(char []);
int sorgulama17(char []);
int sorgulama18(char []);
int sorgulama19(char []);
int sorgulama20(char []);
int sorgulama21(char []);
FILE *S�g�nmac�;
FILE *Uye;
int sayac=0;
char sifreiste[6];
char sifre[6]={'1','2','3','4','5'};
int main()
{
	char ksifre[15];
	char cevap;
	int x;
	char tc[11];
	int secim1,secim2,secim3,secim4,secim;
	system("color 3E"); 
	secim1=men�1();	
	if (secim1==1)
	{
			//ADM�N�N Tc Kimlik Numarasi:12345678911 �ifresi:12345
			for(;;)
			{
				system("cls");
				printf("\nTC Kimlik Numarasi: ");
				scanf("%s",&tc);
				x=sorgulama(tc);
				if (x==1)
				{
					printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
					Sleep(3000);
				}
				if (x==0)
				{
					break;
				}
			}
			printf("\nSifreniz:");
			sifreiste[0]=getch(); printf("*");
			sifreiste[1]=getch(); printf("*");
			sifreiste[2]=getch(); printf("*");
			sifreiste[3]=getch(); printf("*");
			sifreiste[4]=getch(); printf("*");
			sifreiste[5]='\0'; 
				
            if(sifreiste[0]==sifre[0] && sifreiste[1]==sifre[1] && sifreiste[2]==sifre[2] && sifreiste[3]==sifre[3] && sifreiste[4]==sifre[4] )
			{
			if ((strcmp(tc, "12345678911")==0) && (strcmp(sifre, "12345")==0))
			{
				
				burayagit : secim2=men�2();
				switch (secim2)
				{
				case 1:
					{
					system("cls");
					surayagit: printf("Hangi uyeyi kayit ediceksiniz?");
					printf("\n\n1) Kullanici\n2) Siginmaci\n3) Siginmaci Memuru\n 4)Admin\n");
					printf("\tSeciminiz : ");
					scanf_s("%d",&secim);
					if (secim==1)
					{
						kullan�c��yeol();
					}
					else if(secim==2)
					{
						s�g�nmac�ekle();
					}
					else if(secim==3)
					{
                        s�g�nmac�memuru�yeol();
					}
					else if(secim==4)
					{
                        admin�yeol();
					}
					else
					{
						printf("\nYANLIS SECIM YAPTINIZ\n");
						Sleep(1500);
						system("cls");
						goto surayagit;
					}}
				case 2:
					{
					system("cls");
					tekraret : printf("Hangi Uyeyi Sileceksiniz");
					printf("\n\n1) Siginmaci Sil\n2) Kullanici Sil\n");
					printf("Seciminiz : ");
					scanf_s("%d",&secim);
					if (secim==1)
					{
                    s�g�nmac�sil();
					}
					else if(secim==2)
					{
					�yesil();
					}
					else
					{
						printf("\nYANLIS SECIM YAPTINIZ\n");
						Sleep(1500);
						system("cls");
						goto tekraret;
					}}
				case 3:{
					system("cls");
					calis : printf("Hangi Uyeyi Guncelleyeceksiniz");
					printf("\n\n1) Siginmaci Guncelleme\n2) Kullanici Guncelleme\n");
					printf("Seciminiz : ");
					scanf_s("%d",&secim);
					if (secim==1)
					{
						s�g�nmac�g�ncelle();
					}
					else if(secim==2)
					{
					�yeg�ncelle();
					}
					else
					{
						printf("\nYANLIS SECIM YAPTINIZ\n");
						Sleep(1500);
						system("cls");
						goto calis;
					}}
				case 4:
					{
					system("cls");
					buraya : printf("Hangi Uyeyi Aratacaksiniz");
					printf("\n\n1) Siginmaci Arama\n2) Kullanici Arama\n");
					printf("Seciminiz : ");
					scanf_s("%d",&secim);
					if (secim==1)
					{
                    s�g�nmac�arama();
					}
					else if(secim==2)
					{
					�yearama();
					}
					else
					{
						printf("\nYANLIS SECIM YAPTINIZ\n");
						Sleep(1500);
						system("cls");
						goto buraya;
					}}				
				case 5 :
					s�g�nmac�listeleme();
					break;
				case 0:
					exit(1);
					break;
				default:{printf("YANLIS SECIM YAPTINIZ.");
					Sleep(1500);
					goto burayagit;}						
				}
			}
	}

	}
	else if(secim1==2)
	{
			//s�g�nmac� memurun Tc Kimlik Numarasi:12345678912 �ifresi:12345
			for(;;)
			{
				system("cls");
				printf("\nTC Kimlik Numarasi: ");
				scanf("%s",&tc);
				x=sorgulama(tc);
				if (x==1)
				{
					printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
					Sleep(3000);
				}
				if (x==0)
				{
					break;
				}
			}
			printf("\nSifreniz:");
			sifreiste[0]=getch(); printf("*");
			sifreiste[1]=getch(); printf("*");
			sifreiste[2]=getch(); printf("*");
			sifreiste[3]=getch(); printf("*");
			sifreiste[4]=getch(); printf("*");
			sifreiste[5]='\0'; 
				
            if(sifreiste[0]==sifre[0] && sifreiste[1]==sifre[1] && sifreiste[2]==sifre[2] && sifreiste[3]==sifre[3] && sifreiste[4]==sifre[4] )
			{
			if ((strcmp(tc, "12345678912")==0) && (strcmp(sifre, "12345")==0))
			{
				tekrarr : secim2=men�4();
				switch (secim2)
				{
				case 1:
					system("cls");
					s�g�nmac�ekle();
					break;
				case 2:
					s�g�nmac�sil();
					break;
				case 3:
					s�g�nmac�arama();
					break;
				case 4:
					s�g�nmac�g�ncelle();
					break;
				case 5:
					s�g�nmac�listeleme();
				case 0:
					exit(1);
					break;
				default:{printf("YANLIS SECIM YAPTINIZ.");
					Sleep(1500);
					goto tekrarr;}						
				}
				}
			}}
		
	else if(secim1==3)
	{
       if(sayac==0)
		{
			//kullan�c�n�n Tc Kimlik Numarasi:12345678913 �ifresi:12345
			for(;;)
			{
				system("cls");
				printf("\nTC Kimlik Numarasi: ");
				scanf("%s",&tc);
				x=sorgulama(tc);
				if (x==1)
				{
					printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
					Sleep(3000);
				}
				if (x==0)
				{
					break;
				}
			}
			printf("\nSifreniz:");
			sifreiste[0]=getch(); printf("*");
			sifreiste[1]=getch(); printf("*");
			sifreiste[2]=getch(); printf("*");
			sifreiste[3]=getch(); printf("*");
			sifreiste[4]=getch(); printf("*");
			sifreiste[5]='\0'; 
				
            if(sifreiste[0]==sifre[0] && sifreiste[1]==sifre[1] && sifreiste[2]==sifre[2] && sifreiste[3]==sifre[3] && sifreiste[4]==sifre[4] )
			{
			if ((strcmp(tc, "12345678913")==0) && (strcmp(sifre, "12345")==0))
			{
				tekrarrr : secim2=men�3();
				switch (secim2)
				{
				case 1:{
					system("cls");
					kullan�c�KBG();
					break;}
				case 2:
					{
					printf("Eski Sifrenizi Giriniz : ");
				scanf("%s",&ksifre);
				ksifredegistir(ksifre);
				break;}
				case 0:
					exit(1);
					break;
				default:{printf("YANLIS SECIM YAPTINIZ.");
					Sleep(1500);
					goto tekrarrr;}
				}
			}
		}
	
	}}
	else if(secim1==4)
	{
		exit(1);
	}

	else
	   {
		   printf("YANLIS SECIM YAPTINIZ");
		   Sleep(1500);
		   main();   
	}
	}
int men�1()
{
	system("cls");
	int secim1;
	printf("Sisteme hangi statu ile erisimde bulunacaksiniz?\n\n");
	printf("1) ADMIN\n\n2) SIGINMACI MEMURU\n\n3) KULLANICI\n\n4) CIKIS\n\n");
	printf("\tSeciminiz : ");
	scanf_s("%d",&secim1);
	return secim1;
}

int men�2()
{
	system("cls");
	int secim2;
	printf("\n1-Ekleme Islemleri\n2-Silme Islemleri\n3-Guncelleme Islemleri\n4-Arama Islemleri \n5-Siginmaci Listeleme\n0-Cikis\n\n");
	printf("\tSeciminiz : ");
	scanf_s("%d",&secim2);
	return secim2;
}

int men�3()
{
	system("cls");
	int secim3;
	printf("\n1-Bilgi Goruntuleme\n");
	printf("\n2-Sifre Degistirme\n");
	printf("\n3-Cikis\n\n");
	printf("\tSeciminiz : ");
	scanf_s("%d",&secim3);
	return secim3;
}
int men�4()
{
	system("cls");
	int secim4;
	printf("\n1) Siginmaci Ekle\n2) Siginmaci Sil\n3) Siginmaci Arama\n4) Siginmaci Guncelleme\n5) Siginmaci Listeleme\n");
	printf("\n\tSeciminiz:");
	scanf_s("%d",&secim4);
	return secim4;
}
void �yesil()
{
	system("cls");
	char sil_ad2[25];
	int denetleyici=0;
	char cevap;
	printf("Silinecek kullanicinin adini giriniz: ");
	scanf("%s",&sil_ad2);
	Uye=fopen("kullan�c� uyeler.dat","r+");
	int i=0;
	if (Uye== NULL)
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tKULLANICI SILME\n");
		printf("********************************************************************************************************\n\n");
		while(fscanf(Uye, "%s %s %s %s %s %s %s %s %s" , &kullan�c�.tc, &kullan�c�.ad, &kullan�c�.soyad, &kullan�c�.tel, &kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi, &kullan�c�.�ifre, &kullan�c�.yetki_t�r�) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
			{
				if(strcmp(kullan�c�.ad,sil_ad2)==0)
				{	
					denetleyici=1;
					strcpy(�yesildir[i].tc," ");
					strcpy(�yesildir[i].ad," ");		
					strcpy(�yesildir[i].soyad," ");	
					strcpy(�yesildir[i].tel," ");	
					strcpy(�yesildir[i].adres," ");
					strcpy(�yesildir[i].eposta," ");	
					strcpy(�yesildir[i].kullanici_adi," ");	
					strcpy(�yesildir[i].�ifre," ");	
					strcpy(�yesildir[i].yetki_t�r�," ");
				}
				else 
				{	
					strcpy(�yesildir[i].tc,kullan�c�.tc);		
					strcpy(�yesildir[i].ad,kullan�c�.ad);				//
					strcpy(�yesildir[i].soyad,kullan�c�.soyad);		//
							                                          //E�er isim yoksa o i de�erine g�re direk ismi �yesildir struct de�i�kenine kopyalar.
					strcpy(�yesildir[i].tel,kullan�c�.tel);
					strcpy(�yesildir[i].adres,kullan�c�.adres);
					strcpy(�yesildir[i].eposta,kullan�c�.eposta);	
					strcpy(�yesildir[i].kullanici_adi,kullan�c�.kullanici_adi);		//	
					strcpy(�yesildir[i].�ifre,kullan�c�.�ifre);
					strcpy(�yesildir[i].yetki_t�r�,kullan�c�.yetki_t�r�);
				}
				i++;
			}
			fclose(Uye);
			if (denetleyici==0)
			{
				printf("Rehberde %s TC Kimlik numarali bir uye bulunamadi.",sil_ad2);
				Sleep(1500);
				�yesil();
			}
			Uye=fopen("kullan�c� uyeler.dat","w");
			for(int j=0 ; j<i ; j++)
			{
				fprintf(Uye, "%s %s %s %s %s %s %s %s %s  \n",�yesildir[j].tc, �yesildir[j].ad, �yesildir[j].soyad, �yesildir[j].tel, �yesildir[j].adres, �yesildir[j].eposta, �yesildir[j].kullanici_adi, �yesildir[j].�ifre, �yesildir[j].yetki_t�r�);
			}
			fclose(Uye);
			printf("%s TC Kimlik Numarali kisi basariyla silinmistir",sil_ad2);
			Sleep(2500);
			system("cls");
		
		denemek : printf("\n\n     Yeni bir kullan�c� daha silmek istiyor musunuz(e/h) : "); // ba�ka ekleme yap�p yapmayaca��m�z sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			�yesil();				
		}
		else
		{
			system("cls");
			printf("Yanlis bir secim girdiniz");
			Sleep(1500);				
			goto denemek;
		}
	}
}

void s�g�nmac�ekle()
{
	system("cls");
	int denetleyici = 0;
	int x;
	char cevap;
	S�g�nmac�=fopen("s�g�nmac�lar.dat","a");
	if(S�g�nmac�==NULL)
		printf("Dosyaya erisilemiyor.");
	else 
	{
		rewind(S�g�nmac�);
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tSIGINMACI EKLE\n");
		printf("********************************************************************************************************\n\n");
		printf("Kayit Edilecek Siginmacinin Bilgilerini Giriniz...\n\n");
		printf(" siginmaci no:");
		scanf("%s",&s�g�nmac�.siginmaci_no);
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.siginmaci_no);
		for(;;)
		{
			printf("\n Siginmaci ad: ");
			scanf("%s",&s�g�nmac�.ad);
			x=sorgulama10(s�g�nmac�.ad);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(S�g�nmac�,"%s  ",s�g�nmac�.ad);
		for(;;)
		{
			printf("\n Siginmacinin Soyadi: ");
			scanf("%s",&s�g�nmac�.soyad);
			x=sorgulama11(s�g�nmac�.soyad);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(S�g�nmac�,"%s  ",s�g�nmac�.soyad);
		for(;;)
		{
			printf("\n Siginmacinin Dogum Tarihi: ");
			scanf("%s",&s�g�nmac�.dogum_tarihi);
			x=sorgulama9(s�g�nmac�.dogum_tarihi);
			if (x==1)
			{
				printf("\nLutfen sadece rakam giriniz ve sizden 07071995 seklinde yazmaniz isteniyor");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.dogum_tarihi);
		for(;;)
		{
			printf("\n Siginmacinin dogum yeri: ");
			scanf("%s",&s�g�nmac�.dogum_yeri);
			x=sorgulama12(s�g�nmac�.dogum_yeri);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.dogum_yeri);
			for(;;)
		{
			printf("\n Siginmacinin cinsiyeti: ");
			scanf("%s",&s�g�nmac�.cinsiyet);
			x=sorgulama13(s�g�nmac�.cinsiyet);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.cinsiyet);
		for(;;)
		{
			printf("\n Siginmacinin uyrugu: ");
			scanf("%s",&s�g�nmac�.uyruk);
			x=sorgulama14(s�g�nmac�.uyruk);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.uyruk);
		for(;;)
		{
			printf("\n Siginmacinin meslegi: ");
			scanf("%s",&s�g�nmac�.meslek);
			x=sorgulama14(s�g�nmac�.meslek);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}			
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.meslek);
		for(;;)
		{
			printf("\n Siginmacinin egitim durumu: ");
			scanf("%s",&s�g�nmac�.egitim_durumu);
			x=sorgulama15(s�g�nmac�.egitim_durumu);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.egitim_durumu);
		for(;;)
		{
			printf("\n Siginmacinin telefon numarasi: ");
			scanf("%s",&s�g�nmac�.telefon);
			x=sorgulama(s�g�nmac�.telefon);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(S�g�nmac�,"%s  ",s�g�nmac�.telefon);
		for(;;)
		{
			printf("\n Siginmacinin yerlestirildigi adres: ");
			scanf("%s",&s�g�nmac�.yerlestirildigi_adres);
			x=sorgulama17(s�g�nmac�.yerlestirildigi_adres);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.yerlestirildigi_adres);
			for(;;)
		{
			printf("\n Siginmacinin geldigi sehir: ");
			scanf("%s",&s�g�nmac�.geldigi_sehir);
			x=sorgulama18(s�g�nmac�.geldigi_sehir);
			if (x==1)
			{
				printf("\nLutfen sadece harf giriniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.geldigi_sehir);
		for(;;)
		{
			printf("\n Siginmacinin Gelis Tarihi: ");
			scanf("%s",&s�g�nmac�.gelis_tarihi);
			x=sorgulama9(s�g�nmac�.gelis_tarihi);
			if (x==1)
			{
				printf("\nLutfen sadece rakam giriniz ve sizden 07071995 seklinde yazmaniz isteniyor");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(S�g�nmac�,"%s	",s�g�nmac�.gelis_tarihi);
		printf("Eposta adresiniz var m�? \n 1)evet \n 2)hay�r\n SEC�M�N�Z:");
		int secim;
		scanf("%d",&secim);
		if(secim==1)
		{
          printf("\n Siginmacinin eposta adresi:");
		_flushall();
		gets(s�g�nmac�.eposta);			
		fprintf(S�g�nmac�,"%s	\n",s�g�nmac�.eposta);
		}
		else
		{
			fprintf(S�g�nmac�,"%s	\n"," ");
		}
		
		fclose(S�g�nmac�);
		printf("\n Girilen bilgiler dosyaya kaydediliyor...");
		Sleep(2500);
		system("cls");
		printf("\n\n     Yeni bir siginmaci daha eklemek istiyor musunuz(e/h) : "); // ba�ka ekleme yap�p yapmayaca��m�z sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			s�g�nmac�ekle();				
		}
		else
		{
			system("cls");
			printf("Yanlis bir secim girdiniz");
			Sleep(1500);				
			exit(1);
		}
	}
}
void s�g�nmac�sil()
{
	system("cls");
	char sil_sno[25];
	int denetleyici=0;
	char cevap;
	printf("Silinecek siginmacinin nosunu giriniz: ");
	scanf("%s",&sil_sno);
	S�g�nmac�=fopen("s�g�nmac�lar.dat","r+");
	int i=0;
	if (S�g�nmac� == NULL)
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tSIGINMACI SILME\n");
		printf("********************************************************************************************************\n\n");
		while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi, &s�g�nmac�.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{
			if(strcmp(s�g�nmac�.siginmaci_no,sil_sno)==0)
			{	
				denetleyici=1;
				strcpy(s�g�nmac�sildir[i].siginmaci_no," ");
				strcpy(s�g�nmac�sildir[i].ad," ");		
				strcpy(s�g�nmac�sildir[i].soyad," ");	
				strcpy(s�g�nmac�sildir[i].dogum_tarihi," ");	
				strcpy(s�g�nmac�sildir[i].dogum_yeri," ");	
				strcpy(s�g�nmac�sildir[i].cinsiyet," ");	
				strcpy(s�g�nmac�sildir[i].uyruk," ");	
				strcpy(s�g�nmac�sildir[i].meslek," ");		
				strcpy(s�g�nmac�sildir[i].egitim_durumu," ");	
				strcpy(s�g�nmac�sildir[i].telefon," ");	
				strcpy(s�g�nmac�sildir[i].yerlestirildigi_adres," ");	
				strcpy(s�g�nmac�sildir[i].geldigi_sehir," ");	
				strcpy(s�g�nmac�sildir[i].gelis_tarihi," ");
				strcpy(s�g�nmac�sildir[i].eposta," ");		
				

			}
			else 
			{	
				strcpy(s�g�nmac�sildir[i].ad,s�g�nmac�.siginmaci_no);
				strcpy(s�g�nmac�sildir[i].ad,s�g�nmac�.ad);				//
				strcpy(s�g�nmac�sildir[i].soyad,s�g�nmac�.soyad);		//
				strcpy(s�g�nmac�sildir[i].dogum_tarihi,s�g�nmac�.dogum_tarihi);		//
				strcpy(s�g�nmac�sildir[i].dogum_yeri,s�g�nmac�.dogum_yeri);		//E�er isim yoksa o i de�erine g�re direk ismi s�g�nmac�sildir struct de�i�kenine kopyalar.
				strcpy(s�g�nmac�sildir[i].cinsiyet,s�g�nmac�.cinsiyet);		//
				strcpy(s�g�nmac�sildir[i].uyruk,s�g�nmac�.uyruk);	
				strcpy(s�g�nmac�sildir[i].meslek,s�g�nmac�.meslek);				//
				strcpy(s�g�nmac�sildir[i].egitim_durumu,s�g�nmac�.egitim_durumu);		//
				strcpy(s�g�nmac�sildir[i].telefon,s�g�nmac�.telefon);		//
				strcpy(s�g�nmac�sildir[i].yerlestirildigi_adres,s�g�nmac�.yerlestirildigi_adres);		//E�er isim yoksa o i de�erine g�re direk ismi s�g�nmac�sildir struct de�i�kenine kopyalar.
				strcpy(s�g�nmac�sildir[i].geldigi_sehir,s�g�nmac�.geldigi_sehir);		//
				strcpy(s�g�nmac�sildir[i].gelis_tarihi,s�g�nmac�.gelis_tarihi);
				strcpy(s�g�nmac�sildir[i].eposta,s�g�nmac�.eposta);
			}
			i++;
		}
		fclose(S�g�nmac�);
		if (denetleyici==0)
		{
			printf("Kay�tlarda %s numarali bir siginmaci bulunamadi.",sil_sno);
			Sleep(1500);
			system("cls");
			s�g�nmac�sil();
		}
		S�g�nmac�=fopen("s�g�nmac�lar.dat","w");
		for(int j=0 ; j<i ; j++)
		{
			fprintf(S�g�nmac�, "%s  %s  %s  %s  %s  %s%s%s%s%s%s%s%s%s  \n",s�g�nmac�sildir[j].siginmaci_no,s�g�nmac�sildir[j].ad, s�g�nmac�sildir[j].soyad, s�g�nmac�sildir[j].dogum_tarihi, s�g�nmac�sildir[j].dogum_yeri, s�g�nmac�sildir[j].cinsiyet, s�g�nmac�sildir[j].uyruk,s�g�nmac�sildir[j].meslek, s�g�nmac�sildir[j].egitim_durumu, s�g�nmac�sildir[j].telefon, s�g�nmac�sildir[j].yerlestirildigi_adres, s�g�nmac�sildir[j].geldigi_sehir, s�g�nmac�sildir[j].gelis_tarihi,s�g�nmac�sildir[j].eposta);
		}
		fclose(S�g�nmac�);
		printf("%s  Numarali siginmaci basariyla silinmistir",sil_sno);
		Sleep(2500);
		system("cls");
		gel : printf("\n\n     Yeni bir siginmaci daha silmek istiyor musunuz(e/h) : "); // ba�ka ekleme yap�p yapmayaca��m�z sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			s�g�nmac�sil();				
		}
		else
		{
			system("cls");
			printf("Yanlis bir secim girdiniz");
			Sleep(1500);				
			goto gel;
		}
	}
}
void admin�yeol()
{
	int x;
	Uye=fopen("admin uyeler.dat","a");
	if(Uye==NULL)
		printf("Dosyaya erisilemiyor.");
	else 
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  UYE OL\n");
		printf("********************************************************************************************************\n\n");
		printf("Lutfen belirtilen sira ile bilgileri giriniz...\n\n");
		for(;;)
		{
			printf("\n Adiniz: ");
			scanf("%s",&admin.ad);
			x=sorgulama19(admin.ad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullan�n�z");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",admin.ad);
		for(;;)
		{
			printf("\n soyad: ");
			scanf("%s",&admin.soyad);
			x=sorgulama20(admin.soyad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullan�n�z");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",admin.soyad);
		for(;;)
		{
			printf("\n TC Kimlik Numaraniz: ");
			scanf("%s",&admin.tc);
			x=sorgulama(admin.tc);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(Uye,"%s	",admin.tc);
		printf("\n E-mail Adresiniz: ");
		scanf("%s",&admin.eposta);
		fprintf(Uye,"%s	",admin.eposta);
		for(;;)
		{
			printf("\n Telefon Numaraniz: ");
			scanf("%s",&admin.tel);
			x=sorgulama8(admin.tel);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		fprintf(Uye,"%s	",admin.tel);
		for(;;)
		{
			printf("\n adresiniz: ");
			scanf("%s",&admin.adres);
			x=sorgulama21(admin.adres);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s	",admin.adres);
		printf("\n Kullanici Adiniz:");
		_flushall();
		gets(admin.kullanici_adi);	
		fprintf(Uye,"%s  ",admin.kullanici_adi);
		printf("\n Uyelik Sifreniz");
		scanf("%s",&admin.�ifre);
		fprintf(Uye,"%s  \n",admin.�ifre);
		fclose(Uye);
		printf("\n Girilen bilgiler dosyaya kaydediliyor...");
		Sleep(2500);
		system("cls");
		main();
	}
}

void s�g�nmac�memuru�yeol()
	{
int x;
	Uye=fopen("s�g�nmac� memur uyeler.dat","a");
	if(Uye==NULL)
		printf("Dosyaya erisilemiyor.");
	else 
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t UYE OL\n");
		printf("********************************************************************************************************\n\n");
		printf("Lutfen belirtilen sira ile bilgileri giriniz...\n\n");
		for(;;)
		{
			printf("\n ad�n�z: ");
			scanf("%s",&s�g�nmac�_memuru.ad);
			x=sorgulama5(s�g�nmac�_memuru.ad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullan�n�z");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.ad);
		for(;;)
		{
			printf("\n soyad: ");
			scanf("%s",&s�g�nmac�_memuru.soyad);
			x=sorgulama6(s�g�nmac�_memuru.soyad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullan�n�z");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.soyad);
		for(;;)
		{
			printf("\n TC Kimlik Numaraniz: ");
			scanf("%s",&s�g�nmac�_memuru.tc);
			x=sorgulama(s�g�nmac�_memuru.tc);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.tc);
		printf("\n E-mail Adresiniz: ");
		scanf("%s",&s�g�nmac�_memuru.eposta);
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.eposta);
		for(;;)
		{
			printf("\n Telefon numaran�z: ");
			scanf("%s",&s�g�nmac�_memuru.tel);
			x=sorgulama8(s�g�nmac�_memuru.tel);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.tel);
		for(;;)
		{
			printf("\n adres: ");
			scanf("%s",&s�g�nmac�_memuru.adres);
			x=sorgulama7(s�g�nmac�_memuru.adres);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullan�n�z");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.adres);
		printf("\n kullan�c� ad�n�z:");
		_flushall();
		gets(admin.kullanici_adi);	
		fprintf(Uye,"%s  ",s�g�nmac�_memuru.kullanici_adi);
		printf("\n Uyelik Sifreniz:");
		scanf("%s",&s�g�nmac�_memuru.�ifre);
		fprintf(Uye,"%s  \n",s�g�nmac�_memuru.�ifre);
		printf("\n yetki-t�r�:");
		scanf("%s",&s�g�nmac�_memuru.yetki_t�r�);
		fprintf(Uye,"%s  \n",s�g�nmac�_memuru.yetki_t�r�);
		fclose(Uye);
		printf("\n Sisteme basariyla uye oldunuz...");
		Sleep(2500);
		system("cls");
		main();
	}
}

void kullan�c��yeol()
{
	char ad;
int x;
	Uye=fopen("kullan�c� uyeler.dat","a");
	if(Uye==NULL)
		printf("Dosyaya erisilemiyor.");
	else 
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t UYE OL\n");
		printf("********************************************************************************************************\n\n");
		printf("Lutfen belirtilen sira ile bilgileri giriniz...\n\n");
		for(;;)
		{
			printf("\n Adiniz: ");
			scanf("%s",&kullan�c�.ad);
			x=sorgulama3(kullan�c�.ad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullaniniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",kullan�c�.ad);
		for(;;)
		{
			printf("\n Soyadiniz: ");
			scanf("%s",&kullan�c�.soyad);
			x=sorgulama2(kullan�c�.soyad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullaniniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",kullan�c�.soyad);
		for(;;)
		{
			printf("\n TC Kimlik Numaraniz: ");
			scanf("%s",&kullan�c�.tc);
			x=sorgulama(kullan�c�.tc);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s",kullan�c�.tc);
		printf("\n E-mail Adresiniz: ");
		scanf("%s",&kullan�c�.eposta);
		fprintf(Uye,"%s  ",kullan�c�.eposta);
		for(;;)
		{
			printf("\n Telefon Numaran�z: ");
			scanf("%s",&kullan�c�.tel);
			x=sorgulama8(kullan�c�.tel);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",kullan�c�.tel);
		for(;;)
		{
			printf("\n Adresiniz: ");
			scanf("%s",&kullan�c�.adres);
			x=sorgulama4(kullan�c�.adres);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullaniniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",kullan�c�.adres);
		printf("\n Kullanici Adiniz:");
		_flushall();
		gets(kullan�c�.kullanici_adi);	
		fprintf(Uye,"%s  ",kullan�c�.kullanici_adi);
		printf("\n Uyelik Sifreniz:");
		scanf("%s",&kullan�c�.�ifre);
		fprintf(Uye,"%s  \n",kullan�c�.�ifre);
		printf("\n Yetki-Turunuz:");
		scanf("%s",&admin.yetki_t�r�);
		fprintf(Uye,"%s  \n",kullan�c�.yetki_t�r�);
		fclose(Uye);
		printf("\n Sisteme basariyla uye oldunuz...");
		Sleep(2500);
		system("cls");
		main();
	}
}

int sorgulama(char x[30])
{
	int a=0;
	for (int i = 0; i < 11; i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
		if (isdigit(x[i])==0)
		{
			a=1;
		}
	}
	return a;
}
int sorgulama2(char x[30])
{
int a=0;
for (int i = 0; i < strlen(kullan�c�.soyad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama3(char x[30])
{
int a=0;
for (int i = 0; i < strlen(kullan�c�.ad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama4(char x[30])
{
int a=0;
for (int i = 0; i < strlen(kullan�c�.adres); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama5(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�_memuru.ad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama6(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�_memuru.soyad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama7(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�_memuru.adres); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama8(char x[30])
{
int a=0;
for (int i = 0; i < 11; i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isdigit(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama9(char x[30])
{
	int a=0;
	for (int i = 0; i < 8; i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
		if (isdigit(x[i])==0)
		{
			a=1;
		}
	}
	return a;
}
int sorgulama10(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.ad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama11(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.soyad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama12(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.dogum_yeri); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama13(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.cinsiyet); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama14(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.uyruk); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama15(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.meslek); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama16(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.egitim_durumu); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama17(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.yerlestirildigi_adres); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama18(char x[30])
{
int a=0;
for (int i = 0; i < strlen(s�g�nmac�.geldigi_sehir); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama19(char x[30])
{
int a=0;
for (int i = 0; i < strlen(admin.ad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama20(char x[30])
{
int a=0;
for (int i = 0; i < strlen(admin.soyad); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
int sorgulama21(char x[30])
{
int a=0;
for (int i = 0; i < strlen(admin.adres); i++) //Girilen numaran�n 11 haneli oldu�unu ve harf girilip girilmedi�ini kontrol eden k�s�m
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
void s�g�nmac�arama()
{
	char ad1[25];
	char soyad1[25];
	char uyruk1[15];
	char yasad�g�yer1[20];
	int Secim, denetleyici = 0;
	char Secim2;
	S�g�nmac�=fopen("s�g�nmac�lar.dat","r");
	if (S�g�nmac� == NULL)//Dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) NULL de�eri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else//Dosya daha �nce varsa arama i�lemi yap�labilir.
	{
		surayagitt : system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  SIGINMACI ARAMA\n");
		printf("********************************************************************************************************\n\n");
		printf(" 1-Ad ile arama\n");
		printf(" 2-soyad ile arama\n");
		printf(" 3-uyruk ile arama\n");
		printf(" 4-yasadigi yere g�re arama\n\n");
		printf("Seciminiz : ");
		scanf("%d", &Secim);
		switch (Secim)
		{
		case 1:
			{
				system("cls");
				printf("Aradiginiz siginmacinin adini giriniz:");
				_flushall();
				gets(ad1); // scanf ile alm�yor burda gets ile al�yor 
				printf("\n");
				rewind(S�g�nmac�);
				while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi,&s�g�nmac�.eposta) != EOF)
				{
					if (strcmp(s�g�nmac�.ad, ad1)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("Siginmaci Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin ad�:  %s\nsiginmacinin soyad�:  %s\nsiginmacinin dogum tarihi:  %s\ns�g�nmac�n�n dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",s�g�nmac�.siginmaci_no, s�g�nmac�.ad, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk,s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi,s�g�nmac�.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu isimde bir s�g�nmac� kayitli degil!\n\n");
				}
				break;
			}
		case 2:
			{
				system("cls");
				printf("Aradiginiz siginmacinin soyad�n� giriniz:");
				_flushall();
				gets(soyad1); // scanf ile alm�yor burda gets ile al�yor
				rewind(S�g�nmac�);
				while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi,&s�g�nmac�.eposta) != EOF)
				{
					if (strcmp(s�g�nmac�.soyad, soyad1)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("s�g�nmac� Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin ad�:  %s\nsiginmacinin soyad�:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\ns�g�nmac�n�n cinsiyeti:  %s\ns�g�nmac�n�n uyrugu:  %s\ns�g�nmac�n�n meslegi:  %s\ns�g�nmac�n�n egitim durumu:  %s\ns�g�nmac�n�n telefon:  %s\ns�g�nmac�n�n yerlestirildigi adres:  %s\ns�g�nmac�n�n geldigi sehir:  %s\ns�g�nmac�n�n geldigi tarih:  %s\ns�g�nmac�n�n eposta adresi:  %s\n\n\n",s�g�nmac�.siginmaci_no, s�g�nmac�.ad, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk,s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi,s�g�nmac�.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu soyad ile kayitli bir s�g�nmac� mevcut de�ildir.\n\n");
				}
				break;
			}
		case 3:
			{
				system("cls");
				printf("Aradiginiz siginmacinin uyrugunu giriniz:");
				_flushall();
				gets(uyruk1); // scanf ile alm�yor burda gets ile al�yor
				rewind(S�g�nmac�);
				while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi,&s�g�nmac�.eposta) != EOF)
				{
					if (strcmp(s�g�nmac�.uyruk, uyruk1)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("siginmaci Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin ad�:  %s\nsiginmacinin soyad�:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon numarasi:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",s�g�nmac�.siginmaci_no, s�g�nmac�.ad, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk,s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi,s�g�nmac�.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu uyrukta bir s�g�nmac� kayitli degil!\n\n");
				}
				break;
			}
		case 4:
			{
				system("cls");
				printf("Aradiginiz siginmacinin yasad�g� yeri giriniz:");
				_flushall();
				gets(yasad�g�yer1); // scanf ile alm�yor burda gets ile al�yor
				rewind(S�g�nmac�);
				while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi,&s�g�nmac�.eposta) != EOF)
				{
					if (strcmp(s�g�nmac�.yerlestirildigi_adres, yasad�g�yer1)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("s�g�nmac�Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin ad�:  %s\nsiginmacinin soyad�:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",s�g�nmac�.siginmaci_no, s�g�nmac�.ad, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk,s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi,s�g�nmac�.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu yere ait siginmaci mevcut de�ildir.\n\n");
				}
				break;			
			}
		default:{ printf("YANLIS SEC�M YAPTINIZ");
			goto surayagitt;
				}
				
		}
	}	
	printf("\n");//��leme devam edip etmeyece�i sorgulandm��t�r.
	geri : printf("Arama islemine devam etmek icin (A/a) tusuna basiniz\n");
	printf("Menuye donmek icin (M/m) tusuna basiniz \n");
	printf("Cikis  yapmak icin (C/c) tusuna basiniz\n\n");
	printf("Tercihiniz: ");
	scanf("%c", &Secim2); system("cls");
	if (Secim2 == 'a' || Secim2== 'A')
	{
		s�g�nmac�arama();
	}
	else if (Secim2 == 'm' || Secim2 == 'M')
	{
		sayac++;
		main();
	}
	else if (Secim2 == 'c' || Secim2 == 'C')
	{
		exit(1);
	}
	else
	{
		printf("\nYanlis secim yaptiniz!Lutfen belirtilen tuslari kullaniniz\n");
		Sleep(2500);
		goto geri;
	}	
}
void s�g�nmac�g�ncelle()
{
	system("cls");
	int denetleyici=0;
	int k=0,denetleyici2=0;
	char cevap,secimm;
	char guncelle_no[25];
	printf("\nGuncellenicek Siginmacinin Numarasini Giriniz:");
	scanf("%s",&guncelle_no);
	system("cls");
	S�g�nmac� = fopen("s�g�nmac�lar.dat", "r+");
	if (S�g�nmac� == NULL)
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else//Dosya daha �nce varsa g�ncelleme i�lemi yap�labilir.
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  SIGINMACI BILGISI GUNCELLEME\n");
		printf("********************************************************************************************************\n\n");
		while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk,&s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi,&s�g�nmac�.eposta) != EOF) //Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{
			if (strcmp(s�g�nmac�.siginmaci_no, guncelle_no)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa bilgileri de�i�tiriyoruz
			{	
				//ki�i bilgileri de�i�tirilerek k de�erine g�re olan struct de�i�kenine bilgilerimizi kaydediyoruz
				
				denetleyici2=1;
				printf("\n%s Numarali siginmaci hakkinda yeni bilgileri giriniz.\n",guncelle_no);
				printf("Kayit edilecek siginmacinin bilgilerini giriniz...\n\n");
				printf("\n siginmaci no:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].siginmaci_no);
				printf("  Ad:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].siginmaci_no);
				printf("\n Soyad:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].soyad);
				printf("\n S�g�nmac�n�n Dogum Tarihi:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].dogum_tarihi);
				printf("\n Dogum Yeri:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].dogum_yeri);
				printf("\n Cinsiyet:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].cinsiyet);
				printf("\n Uyruk:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].uyruk);
				printf(" Meslek:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].meslek);
				printf("\n Egitim Durumu:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].egitim_durumu);
				printf("  Telefon:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].telefon);
				printf("\n Yerlestigi Adres:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].yerlestirildigi_adres);
				printf("  Geldigi Sehir:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].geldigi_sehir);
				printf("\n Geldigi Tarih:");
				_flushall();
				gets(s�g�nmac�g�ncelleme[k].gelis_tarihi);
				printf("  Eposta:");
				scanf("%s",&s�g�nmac�g�ncelleme[k].eposta);
				printf("\nSIGINMACI GUNCELLENMISTIR.\n\n");
				Sleep(2500);
				system("cls");
			}
			else
			{
				strcpy(s�g�nmac�g�ncelleme[k].siginmaci_no,s�g�nmac�.siginmaci_no);
				strcpy(s�g�nmac�g�ncelleme[k].ad,s�g�nmac�.ad);				//
				strcpy(s�g�nmac�g�ncelleme[k].soyad,s�g�nmac�.soyad);		//
				strcpy(s�g�nmac�g�ncelleme[k].dogum_tarihi,s�g�nmac�.dogum_tarihi);		//
				strcpy(s�g�nmac�g�ncelleme[k].dogum_yeri,s�g�nmac�.dogum_yeri);		//E�er isim yoksa o i de�erine g�re direk ismi s�g�nmac�guncelle struct de�i�kenine kopyalar.
				strcpy(s�g�nmac�g�ncelleme[k].cinsiyet,s�g�nmac�.cinsiyet);		//
				strcpy(s�g�nmac�g�ncelleme[k].uyruk,s�g�nmac�.uyruk);	
				strcpy(s�g�nmac�g�ncelleme[k].ad,s�g�nmac�.meslek);				//
				strcpy(s�g�nmac�g�ncelleme[k].soyad,s�g�nmac�.egitim_durumu);		//
				strcpy(s�g�nmac�g�ncelleme[k].dogum_tarihi,s�g�nmac�.yerlestirildigi_adres);		//
				strcpy(s�g�nmac�g�ncelleme[k].dogum_yeri,s�g�nmac�.geldigi_sehir);		//
				strcpy(s�g�nmac�g�ncelleme[k].cinsiyet,s�g�nmac�.gelis_tarihi);		//
				strcpy(s�g�nmac�g�ncelleme[k].uyruk,s�g�nmac�.eposta);
			}
			k++;
		}
		fclose(S�g�nmac�);
	}
	if(denetleyici2==0)
	{
		printf("Kayitlar arasinda %s  Numarali siginmaci bulunmamaktadir.",guncelle_no);
		Sleep(1500);
		s�g�nmac�g�ncelle();
	}
	S�g�nmac�=fopen("s�g�nmac�lar.dat","w");//dosyay� s�f�rdan a��p tekrar yazd�rmak i�in yazma modunda a��yoruz.
	for(int j=0 ; j<k ; j++)
	{			
		fprintf(S�g�nmac�, "%s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s \n",s�g�nmac�g�ncelleme[j].siginmaci_no,s�g�nmac�g�ncelleme[j].ad, s�g�nmac�g�ncelleme[j].soyad, s�g�nmac�g�ncelleme[j].dogum_tarihi, s�g�nmac�g�ncelleme[j].dogum_yeri, s�g�nmac�g�ncelleme[j].cinsiyet, s�g�nmac�g�ncelleme[j].uyruk,s�g�nmac�g�ncelleme[j].meslek, s�g�nmac�g�ncelleme[j].egitim_durumu,s�g�nmac�g�ncelleme[j].telefon, s�g�nmac�g�ncelleme[j].yerlestirildigi_adres, s�g�nmac�g�ncelleme[j].geldigi_sehir, s�g�nmac�g�ncelleme[j].gelis_tarihi, s�g�nmac�g�ncelleme[j].eposta);
	}
	fclose(S�g�nmac�);
	system("cls");
	tekrarrr : printf("\n\n     Yeni bir siginmaci eklemek istiyor musunuz(e/h) : "); // ba�ka ekleme yap�p yapmayaca��m�z sorulur
	scanf("%s",&cevap);
	if(cevap=='h')	
	{
		main();				
	}
	if (cevap=='e')
	{
		s�g�nmac�g�ncelle();				
	}
	else
	{
		system("cls");
		printf("Yanlis bir secim girdiniz");
		Sleep(1500);				
		goto tekrarrr;
	}
}
void �yeg�ncelle()
{
	int x;
	system("cls");
	int denetleyici=0;
	int k=0,denetleyici2=0;
	char cevap;
	char guncelle_ad[11];
	char guncelle2_tc[11];
	int secim;
	printf("admin olarak g�ncelleme yapmak istiyorumusunuz?");
	printf("\n\n1) evet\n2) hay�r\n");
	printf("Seciminiz : ");
	scanf_s("%d",&secim);
	if (secim==1)
	{		
		for(;;)
		{
			printf("\nGuncellenicek kisinin adini giriniz:");
			scanf("%s",&guncelle_ad);
			x=sorgulama3(guncelle_ad);
			if (x==1)
			{
				printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}
		system("cls");
		Uye = fopen("kullan�c� uyeler.dat", "r+");//Dosyay� okuma+yazma modunda a��yoruz...
		if (Uye == NULL)//Dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) NULL de�eri gelir
		{
			printf("Dosya veya sunucu bulunamadi!\n");
		}
		else//Dosya daha �nce varsa g�ncelleme i�lemi yap�labilir.
		{
			system("cls");
			printf("********************************************************************************************************");
			printf("\n\t\t\t\t  KAYIT GUNCELLEME\n");
			printf("********************************************************************************************************\n\n");
			while (fscanf(Uye, "%s%s%s%s%s%s%s%s", &kullan�c�.ad, &kullan�c�.soyad, &kullan�c�.tc, &kullan�c�.eposta, &kullan�c�.tel, &kullan�c�.adres, &kullan�c�.kullanici_adi, &kullan�c�.�ifre) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
			{
				if (strcmp(kullan�c�.ad, guncelle_ad)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa bilgileri de�i�tiriyoruz
				{	
					//ki�i bilgileri de�i�tirilerek k de�erine g�re olan struct de�i�kenine bilgilerimizi kaydediyoruz
					denetleyici2=1;
					printf("\n%s TC Kimlik Numarali kisi hakkinda yeni bilgileri giriniz.\n",guncelle_ad);
					printf(" Adi:");
					scanf("%s",&�yeg�ncelleme[k].ad);	
					printf("\n Soyadi:");
					scanf("%s",&�yeg�ncelleme[k].soyad);				
					for(;;)
					{
						printf("\n TC Kimlik Numarasi: ");
						scanf("%s",&�yeg�ncelleme[k].tc);	
						x=sorgulama(�yeg�ncelleme[k].tc);
						if (x==1)
						{
							printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
							Sleep(3000);
						}
						if (x==0)
						{
							break;
						}
					}			
					printf("\n E-mail Adresi: ");
					scanf("%s",&�yeg�ncelleme[k].eposta);
					for(;;)
					{				

						printf("\n Telefon Numarasi:");
						scanf("%s",&�yeg�ncelleme[k].tel);
						x=sorgulama(�yeg�ncelleme[k].tel);
						if (x==1)
						{
							printf("\nLutfen 11 basamakli numara giriniz veya harf kullanmayiniz");
							Sleep(3000);
						}
						if (x==0)
						{
							break;
						}
					}				
					printf("\n Adresi:");
					_flushall();
					gets(�yeg�ncelleme[k].adres);					
					printf("\n Kullanici Adi :");
					_flushall();
					gets(�yeg�ncelleme[k].kullanici_adi);
					printf("\n Uyelik Sifresi:");
					scanf("%s",&�yeg�ncelleme[k].�ifre);
					printf("\nKisi guncellenmistir.\n\n");
					Sleep(2500);
					system("cls");
				}
				else
				{
					strcpy(�yeg�ncelleme[k].ad,kullan�c�.ad);			
					strcpy(�yeg�ncelleme[k].soyad,kullan�c�.soyad);		
					strcpy(�yeg�ncelleme[k].tc,kullan�c�.tc);
					strcpy(�yeg�ncelleme[k].eposta,kullan�c�.eposta);	
					strcpy(�yeg�ncelleme[k].tel,kullan�c�.tel);		
					strcpy(�yeg�ncelleme[k].adres,kullan�c�.adres);		
					strcpy(�yeg�ncelleme[k].kullanici_adi,kullan�c�.kullanici_adi);	
					strcpy(�yeg�ncelleme[k].�ifre,kullan�c�.�ifre);
				}
				k++;
			}
			fclose(Uye);
		}
		if(denetleyici2==0)
		{
			printf("Kayitlar arasinda %s TC Kimlik Numarali biri bulunmamaktadir.",guncelle_ad);
			Sleep(1500);
			�yeg�ncelle();
		}
		Uye=fopen("kullan�c� uyeler.dat","w");//dosyay� s�f�rdan a��p tekrar yazd�rmak i�in yazma modunda a��yoruz.
		for(int j=0 ; j<k ; j++)
		{			
			fprintf(Uye, "%s  %s  %s  %s  %s  %s  %s  %s\n",�yeg�ncelleme[j].ad, �yeg�ncelleme[j].soyad, �yeg�ncelleme[j].tc, �yeg�ncelleme[j].eposta, �yeg�ncelleme[j].tel, �yeg�ncelleme[j].adres, �yeg�ncelleme[j].kullanici_adi, �yeg�ncelleme[j].�ifre);
		}
		fclose(Uye);
	}
	
	system("cls");
	dene : printf("\n\n     Yeni bir kisi daha guncellemek istiyor musunuz(e/h) : "); // ba�ka ekleme yap�p yapmayaca��m�z sorulur
	scanf("%s",&cevap);
	if(cevap=='h')	
	{
		main();				
	}
	if (cevap=='e')
	{
		�yeg�ncelle();				
	}
	else
	{
		system("cls");
		printf("Yanlis bir secim girdiniz");
		Sleep(1500);				
		goto dene;
	}
}
void �yearama()
{
	char kad[11];
	char ad[25];
	char soyad[15];
	char posta[11];
	int Secim, denetleyici = 0;
	char Secim2;
	Uye = fopen("kullan�c� uyeler.dat","r");
	if (Uye == NULL)//Dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) NULL de�eri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}

	else//Dosya daha �nce varsa arama i�lemi yap�labilir.
	{
		giitt : system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  KULLANICI ARAMA\n");
		printf("********************************************************************************************************\n\n");
		printf(" 1-adres ile arama\n");
		printf(" 2-ad ile arama\n");
		printf(" 3-soyad ile arama\n");
		printf(" 4-epostaya g�re arama\n\n");
		printf("Seciminiz : ");
		scanf("%d", &Secim);
		switch (Secim)
		{
		case 1:
			{
				system("cls");
				printf("Aradiginiz kullanicinin adresini giriniz:");
				_flushall();
				gets(kad); // scanf ile alm�yor burda gets ile al�yor 
				printf("\n");
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s", &kullan�c�.tc, &kullan�c�.ad, &kullan�c�.soyad, &kullan�c�.tel, &kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi,&kullan�c�.�ifre, &kullan�c�.yetki_t�r�) != EOF)
				{
					if (strcmp(kullan�c�.adres , kad)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("kullanici bilgileri\n");
						printf("--------------\n");
						printf("kullan�c�n�n tc:  %s\nkullan�c�n�n ad:  %s\n kullan�c�n�n soyad:  %s\nkullan�c�n�n telefon numarasi: %s\nkullan�c�n�n adresi:  %s\nkullan�c�n�n eposta adresi:  %s\nkullan�c�n�n kullan�c� ad�:  %s\nkullan�c�n�n sifresi:  %s\nkullan�c�n�n yetki turu:  %s\n\n", kullan�c�.tc, kullan�c�.ad, kullan�c�.soyad,kullan�c�.tel, kullan�c�.adres, kullan�c�.eposta, kullan�c�.kullanici_adi, kullan�c�.�ifre,kullan�c�.yetki_t�r�);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu eposta ile bir kullanici kayitli degil!\n\n");
				}
				break;
			}
		case 2:
			{
				system("cls");
				printf("Aradiginiz kullanicinin adini giriniz:");
				_flushall();
				gets(ad); // scanf ile alm�yor burda gets ile al�yor
				rewind(Uye);
				while(fscanf(Uye, "%s %s %s %s %s %s %s %s %s",&kullan�c�.tc, &kullan�c�.ad, &kullan�c�.soyad,&kullan�c�.tel, &kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi,&kullan�c�.�ifre, &kullan�c�.yetki_t�r�)  != EOF)
				{
					if (strcmp(kullan�c�.ad, ad)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("KULLANICI Bilgileri\n");
						printf("--------------\n");
						printf("kullan�c�n�n tc:  %s\n kullan�c�n�n ad:  %s\n kullan�c�n�n soyad:  %s\nkullan�c�n�n telefon numaras�: %s\nkullan�c�n�n adresi:  %s\nkullan�c�n�n eposta adresi:  %s\nkullan�c�n�n kullan�c� ad�:  %s\nkullan�c�n�n sifresi:  %s\nkullan�c�n�n yetki turu:  %s\n\n", kullan�c�.tc, kullan�c�.ad, kullan�c�.soyad, kullan�c�.tel, kullan�c�.adres, kullan�c�.eposta, kullan�c�.kullanici_adi, kullan�c�.�ifre, kullan�c�.yetki_t�r�);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu ad ile kayitli bir kullan�c� mevcut de�ildir.\n\n");
				}
				break;
			}
		case 3:
			{
				system("cls");
				printf("Aradiginiz kullan�c�n�n soyad�n� giriniz:");
				_flushall();
				gets(soyad); // scanf ile alm�yor burda gets ile al�yor
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s",&kullan�c�.tc, &kullan�c�.ad, &kullan�c�.soyad,&kullan�c�.tel, &kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi,&kullan�c�.�ifre, &kullan�c�.yetki_t�r�)  != EOF)
				{
					if (strcmp(kullan�c�.soyad, soyad)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("kullan�c� Bilgileri\n");
						printf("--------------\n");
						printf("kullan�c�n�n tc:  %s\nkullan�c�n�n ad:  %s\n kullan�c�n�n soyad:  %s\nkullan�c�n�n telefon numaras�: %s,kullan�c�n�n adresi:  %s\nkullan�c�n�n eposta adresi:  %s\nkullan�c�n�n kullan�c� ad�:  %s\nkullan�c�n�n sifresi:  %s\nkullan�c�n�n yetki turu:  %s\n\n", kullan�c�.tc, kullan�c�.ad, kullan�c�.soyad,kullan�c�.tel, kullan�c�.adres, kullan�c�.eposta, kullan�c�.kullanici_adi,kullan�c�.�ifre,kullan�c�.yetki_t�r�);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu soyad ile bir kullan�c� kayitli degil!\n\n");
				}
				break;
			}
		case 4:
			{
				system("cls");
				printf("Aradiginiz kullan�c�n�n telefon numaras�n� giriniz:");
				_flushall();
				gets(posta); // scanf ile alm�yor burda gets ile al�yor
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s",&kullan�c�.tc, &kullan�c�.ad, &kullan�c�.soyad,&kullan�c�.tel, &kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi,&kullan�c�.�ifre,&kullan�c�.yetki_t�r�)  != EOF)
				{
					if (strcmp(kullan�c�.eposta, posta)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("kullan�c� Bilgileri\n");
						printf("--------------\n");
						printf("kullan�c�n�n tc:  %s\nkullan�c�n�n ad:  %s\n kullan�c�n�n soyad:  %s\nkullan�c�n�n telefon numaras�: %s\nkullan�c�n�n adresi:  %s\nkullan�c�n�n eposta adresi:  %s\nkullan�c�n�n kullan�c� ad�:  %s\nkullan�c�n�n sifresi:  %s\nkullan�c�n�n yetki turu:  %s\n\n", kullan�c�.tc, kullan�c�.ad, kullan�c�.soyad,kullan�c�.tel, kullan�c�.adres, kullan�c�.eposta, kullan�c�.kullanici_adi, kullan�c�.�ifre, kullan�c�.yetki_t�r�);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu epostaya ait kullanici mevcut de�ildir.\n\n");
				}
				break;			
			}
		default:{
			printf("Yanl�s secim yaptiniz Tekrar deneyiniz");
			goto giitt;
			break;
				}
		}
	}	
	printf("\n");//��leme devam edip etmeyece�i sorgulandm��t�r.
	gerigel : printf("Arama islemine devam etmek icin (A/a) tusuna basiniz\n");
	printf("Menuye donmek icin (M/m) tusuna basiniz \n");
	printf("Cikis  yapmak icin (C/c) tusuna basiniz\n\n");
	printf("Tercihiniz: ");
	scanf("%c", &Secim2); system("cls");
	if (Secim2 == 'a' || Secim2== 'A')
	{
		�yearama();
	}
	else if (Secim2 == 'm' || Secim2 == 'M')
	{
		
		main();
	}
	else if (Secim2 == 'c' || Secim2 == 'C')
	{
		exit(1);
	}
	else
	{
		printf("\nYanlis secim yaptiniz!Lutfen belirtilen tuslari kullaniniz\n");
		Sleep(2500);
		goto gerigel;
	}	
}
void ksifredegistir(char x[15])
{
		int k=0;
		int denetleyici = 0;
		char yenisifre[15];
		Uye = fopen("kullan�c� uyeler.dat", "r+");//Dosyay� okuma+yazma modunda a��yoruz...
		if (Uye == NULL)//Dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) NULL de�eri gelir
		{
			printf("Dosya veya sunucu bulunamadi!\n");
		}
		else//Dosya daha �nce varsa g�ncelleme i�lemi yap�labilir.
		{
			system("cls");
			printf("********************************************************************************************************");
			printf("\n\t\t\t\t  SIFRE DEGISTIRME\n");
			printf("********************************************************************************************************\n\n");
			while (fscanf(Uye,"%s%s%s%s%s%s%s%s",&kullan�c�.ad, &kullan�c�.soyad, &kullan�c�.tc,&kullan�c�.eposta, &kullan�c�.tel, &kullan�c�.adres, &kullan�c�.kullanici_adi, &kullan�c�.�ifre)!=EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
			{
				if (strcmp(kullan�c�.�ifre, x)==0)//Aranan isimle kar��la�t�rma yapt�r�p do�ruysa bilgileri de�i�tiriyoruz
				{
					denetleyici=1;
					strcpy(�yeg�ncelleme[k].ad,kullan�c�.ad);			
					strcpy(�yeg�ncelleme[k].soyad,kullan�c�.soyad);		
					strcpy(�yeg�ncelleme[k].tc,kullan�c�.tc);
					strcpy(�yeg�ncelleme[k].eposta,kullan�c�.eposta);
					strcpy(�yeg�ncelleme[k].tel,kullan�c�.tel);		
					strcpy(�yeg�ncelleme[k].adres,kullan�c�.adres);		
					strcpy(�yeg�ncelleme[k].kullanici_adi,kullan�c�.kullanici_adi);	
					printf("\n Yeni Uyelik Sifrenizi giriniz:");
					scanf("%s",&�yeg�ncelleme[k].�ifre);
					
				}
				else
				{
					strcpy(�yeg�ncelleme[k].ad,kullan�c�.ad);			
					strcpy(�yeg�ncelleme[k].soyad,kullan�c�.soyad);		
					strcpy(�yeg�ncelleme[k].tc,kullan�c�.tc);
					strcpy(�yeg�ncelleme[k].eposta,kullan�c�.eposta);
					strcpy(�yeg�ncelleme[k].tel,kullan�c�.tel);		
					strcpy(�yeg�ncelleme[k].adres,kullan�c�.adres);		
					strcpy(�yeg�ncelleme[k].kullanici_adi,kullan�c�.kullanici_adi);	
					strcpy(�yeg�ncelleme[k].�ifre,kullan�c�.�ifre);
				}
				k++;
			}
			fclose(Uye);
		}
		if(denetleyici==0)
		{
			printf("\n\nBu sifre ile kay�tl� bir uye bulunamadi...");
			Sleep(1500);
			main();
		}
		Uye=fopen("kullan�c� uyeler.dat","w");//dosyay� s�f�rdan a��p tekrar yazd�rmak i�in yazma modunda a��yoruz.
		for(int j=0 ; j<k ; j++)
		{			
			fprintf(Uye, "%s  %s  %s  %s  %s  %s  %s  %s  \n",�yeg�ncelleme[j].ad, �yeg�ncelleme[j].soyad, �yeg�ncelleme[j].tc, �yeg�ncelleme[j].eposta, �yeg�ncelleme[j].tel, �yeg�ncelleme[j].adres, �yeg�ncelleme[j].kullanici_adi, �yeg�ncelleme[j].�ifre);
		}
		fclose(Uye);
		printf("\n\n Sifreniz basariyla degistirilmistir...");
		Sleep(5500);
		main();
}
void s�g�nmac�listeleme()
{
S�g�nmac� = fopen("s�g�nmac�lar.dat", "r");	//Okuma modunda a��yoruz
	int Secim,secim1;
	if (S�g�nmac� == NULL)//Dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) NULL de�eri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else // Dosya �nceden varsa kisi eklenebilir
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tS�G�NMAC� L�STES�\n");
		printf("********************************************************************************************************\n\n");
		printf("siginmacilari nasil listelemek istiyorsunuz\n\n1)siginmaci no\n2)siginmaci adi ile\n3)siginmaci soyadi ile\n");
		scanf("%d",&secim1);
		system("cls");
		if(secim1==1)
		{
		while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk, &s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi, &s�g�nmac�.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{	
			printf("siginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n", s�g�nmac�.siginmaci_no, s�g�nmac�.ad, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk, s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi, s�g�nmac�.eposta);
		}
		fclose(S�g�nmac�);//Dosyay� kapat�yoruz		
		//��leme devam edip etmeyece�i sorgulanm��t�r.
		}
		else if(secim1==2)
		{
        while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk, &s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi, &s�g�nmac�.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{	
			printf("siginmacinin Adi:  %s\nsiginmaci NO:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n",  s�g�nmac�.ad,s�g�nmac�.siginmaci_no, s�g�nmac�.soyad, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk, s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi, s�g�nmac�.eposta);
		}
		fclose(S�g�nmac�);
		}
		else if(secim1==3)
		{
        while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk, &s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi, &s�g�nmac�.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{	
			printf("siginmacinin soyadi:  %s\nsiginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n",s�g�nmac�.soyad,  s�g�nmac�.ad, s�g�nmac�.siginmaci_no, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk, s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon, s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.gelis_tarihi, s�g�nmac�.eposta);
		}
		}
		else
		{
			{
        while(fscanf(S�g�nmac�, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &s�g�nmac�.siginmaci_no, &s�g�nmac�.ad, &s�g�nmac�.soyad, &s�g�nmac�.dogum_tarihi, &s�g�nmac�.dogum_yeri, &s�g�nmac�.cinsiyet, &s�g�nmac�.uyruk, &s�g�nmac�.meslek, &s�g�nmac�.egitim_durumu, &s�g�nmac�.telefon, &s�g�nmac�.yerlestirildigi_adres, &s�g�nmac�.geldigi_sehir, &s�g�nmac�.gelis_tarihi, &s�g�nmac�.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen i�lemlere ge�ilir.
		{	
			printf("siginmacinin gelis tarihi :%s\nsiginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin eposta adresi :%s\n\n", s�g�nmac�.gelis_tarihi,s�g�nmac�.ad,s�g�nmac�.soyad,s�g�nmac�.siginmaci_no, s�g�nmac�.dogum_tarihi, s�g�nmac�.dogum_yeri, s�g�nmac�.cinsiyet, s�g�nmac�.uyruk, s�g�nmac�.meslek, s�g�nmac�.egitim_durumu, s�g�nmac�.telefon , s�g�nmac�.yerlestirildigi_adres, s�g�nmac�.geldigi_sehir, s�g�nmac�.eposta);
		}
		}

		}
	}
	    Sleep(3000);
		printf("\n");
		git : printf("Menuye donmek icin 1 tusuna basin \n");
		printf("Cikis  yapmak icin 2 tusuna basin \n\n");
		printf("Tercihiniz: ");
		scanf("%d",&Secim);
		system("cls");
		if(Secim==1)
		{
			
			main(); //Ana fonksiyona g�nderilir				
		}
		else if(Secim==2)
		{
			exit(1);//proje sonlandirilir
		}
		else 
		{
			printf("\n");
		printf("\nYanlis secim yaptiniz!Lutfen belirtilen tuslari kullaniniz\n");
		goto git;
		}
	}
void kullan�c�KBG()
{
    char adres[11];
	int secim, denetleyici = 0;
	char secim2;
	Uye = fopen("kullan�c� uyeler.dat","r");
	if (Uye == NULL)//dosya a��lmassa(daha �nce a��lm�� ve silinmi�se veya a�ma i�lemi ger�ekle�tirilmemi�se) null de�eri gelir
	{
		printf("dosya veya sunucu bulunamadi!\n");
	}
	else//dosya daha �nce varsa arama i�lemi yap�labilir.
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  BILGI GORUNTULEME\n");
		printf("********************************************************************************************************\n\n");
				system("cls");
				printf(" Adresinizi Giriniz:");
				_flushall();
				gets(adres); // scanf ile alm�yor burda gets ile al�yor 
				printf("\n");
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s",  &kullan�c�.ad, &kullan�c�.soyad,&kullan�c�.tc, &kullan�c�.tel,&kullan�c�.adres, &kullan�c�.eposta, &kullan�c�.kullanici_adi, &kullan�c�.�ifre, &kullan�c�.yetki_t�r�) != EOF)
				{
					if (strcmp(kullan�c�.adres, adres)==0)//aranan isimle kar��la�t�rma yapt�r�p do�ruysa ekrana yaz�d�r�yoruz. 
					{
						printf("Kullanici Bilgileri\n");
						printf("--------------\n");
						printf("Kullanicinin Adi:  %s\n Kullanicinin Soyadi:  %s\nKullanicinin Tc Kimlik Numarasi:  %s\nKullanicinin Telefon Numarasi: %s\nKullanicinin Adresi:  %s\nKullanicinin Eposta Adresi:  %s\nKullan�c�n�n Kullanici Adi:  %s\nKullanicinin Sifresi:  %s\n Kullanicinin Yetk�-Turu:  %s\n\n",  kullan�c�.ad, kullan�c�.soyad,kullan�c�.tc,kullan�c�.tel, kullan�c�.adres, kullan�c�.eposta, kullan�c�.kullanici_adi,kullan�c�.�ifre,kullan�c�.yetki_t�r�);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu isimde bir kullanici kayitli degil!\n\n");
				}
				
			}

				
		printf("\n");
		dikkat : printf("menuye donmek icin 1 tusuna basin \n");
		printf("cikis  yapmak icin 2 tusuna basin \n\n");
		printf("Tercihiniz: ");
		scanf("%d",&secim);
		system("cls");
		if (secim == 1)
		{
			main(); //ana fonksiyona g�nderilir				
		}
		else if (secim == 2)
		{
			exit(1);//proje sonlandirilir
		}
		else
		{
			printf("\n");
		printf("\nYanlis Secim Yaptiniz!Lutfen Belirtilen Tuslari Kullaniniz\n");
		goto dikkat;
	}
	}