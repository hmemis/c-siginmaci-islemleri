/*
PROJE ODEVÝ
Ogrenci No:13253039
Hilal MEMÝS
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
}sýgýnmacý,sýgýnmacý_ekleme[BUFSIZ],sýgýnmacýgüncelleme[BUFSIZ],sýgýnmacýsildir[BUFSIZ],sýgýnmacý_listeleme[BUFSIZ],sýgýnmacý_arama[BUFSIZ];
struct kullanici
 {
	 char tc[11];
	 char ad[20];
	 char soyad[20];
	 char tel[11];
	 char adres[20];
	 char eposta[20];
	 char kullanici_adi[20];
	 char þifre[10];
	 char yetki_türü[20];
 }admin,sýgýnmacý_memuru,kullanýcý,üyesildir[BUFSIZ],üyegüncelleme[BUFSIZ];  
void üyesil();
void kullanýcýüyeol();
void sýgýnmacýekle();
void sýgýnmacýsil();
void üyearama();
void sýgýnmacýgüncelle();
void sýgýnmacýarama();
void sýgýnmacýlisteleme();
void ksifredegistir(char []);
void üyegüncelle();
void adminüyeol();
void sýgýnmacýmemuruüyeol();
void kullanýcýKBG();
void cagýrma();
int menü1();
int menü2();
int menü3();
int menü4();
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
FILE *Sýgýnmacý;
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
	secim1=menü1();	
	if (secim1==1)
	{
			//ADMÝNÝN Tc Kimlik Numarasi:12345678911 þifresi:12345
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
				
				burayagit : secim2=menü2();
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
						kullanýcýüyeol();
					}
					else if(secim==2)
					{
						sýgýnmacýekle();
					}
					else if(secim==3)
					{
                        sýgýnmacýmemuruüyeol();
					}
					else if(secim==4)
					{
                        adminüyeol();
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
                    sýgýnmacýsil();
					}
					else if(secim==2)
					{
					üyesil();
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
						sýgýnmacýgüncelle();
					}
					else if(secim==2)
					{
					üyegüncelle();
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
                    sýgýnmacýarama();
					}
					else if(secim==2)
					{
					üyearama();
					}
					else
					{
						printf("\nYANLIS SECIM YAPTINIZ\n");
						Sleep(1500);
						system("cls");
						goto buraya;
					}}				
				case 5 :
					sýgýnmacýlisteleme();
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
			//sýgýnmacý memurun Tc Kimlik Numarasi:12345678912 þifresi:12345
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
				tekrarr : secim2=menü4();
				switch (secim2)
				{
				case 1:
					system("cls");
					sýgýnmacýekle();
					break;
				case 2:
					sýgýnmacýsil();
					break;
				case 3:
					sýgýnmacýarama();
					break;
				case 4:
					sýgýnmacýgüncelle();
					break;
				case 5:
					sýgýnmacýlisteleme();
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
			//kullanýcýnýn Tc Kimlik Numarasi:12345678913 þifresi:12345
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
				tekrarrr : secim2=menü3();
				switch (secim2)
				{
				case 1:{
					system("cls");
					kullanýcýKBG();
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
int menü1()
{
	system("cls");
	int secim1;
	printf("Sisteme hangi statu ile erisimde bulunacaksiniz?\n\n");
	printf("1) ADMIN\n\n2) SIGINMACI MEMURU\n\n3) KULLANICI\n\n4) CIKIS\n\n");
	printf("\tSeciminiz : ");
	scanf_s("%d",&secim1);
	return secim1;
}

int menü2()
{
	system("cls");
	int secim2;
	printf("\n1-Ekleme Islemleri\n2-Silme Islemleri\n3-Guncelleme Islemleri\n4-Arama Islemleri \n5-Siginmaci Listeleme\n0-Cikis\n\n");
	printf("\tSeciminiz : ");
	scanf_s("%d",&secim2);
	return secim2;
}

int menü3()
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
int menü4()
{
	system("cls");
	int secim4;
	printf("\n1) Siginmaci Ekle\n2) Siginmaci Sil\n3) Siginmaci Arama\n4) Siginmaci Guncelleme\n5) Siginmaci Listeleme\n");
	printf("\n\tSeciminiz:");
	scanf_s("%d",&secim4);
	return secim4;
}
void üyesil()
{
	system("cls");
	char sil_ad2[25];
	int denetleyici=0;
	char cevap;
	printf("Silinecek kullanicinin adini giriniz: ");
	scanf("%s",&sil_ad2);
	Uye=fopen("kullanýcý uyeler.dat","r+");
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
		while(fscanf(Uye, "%s %s %s %s %s %s %s %s %s" , &kullanýcý.tc, &kullanýcý.ad, &kullanýcý.soyad, &kullanýcý.tel, &kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi, &kullanýcý.þifre, &kullanýcý.yetki_türü) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
			{
				if(strcmp(kullanýcý.ad,sil_ad2)==0)
				{	
					denetleyici=1;
					strcpy(üyesildir[i].tc," ");
					strcpy(üyesildir[i].ad," ");		
					strcpy(üyesildir[i].soyad," ");	
					strcpy(üyesildir[i].tel," ");	
					strcpy(üyesildir[i].adres," ");
					strcpy(üyesildir[i].eposta," ");	
					strcpy(üyesildir[i].kullanici_adi," ");	
					strcpy(üyesildir[i].þifre," ");	
					strcpy(üyesildir[i].yetki_türü," ");
				}
				else 
				{	
					strcpy(üyesildir[i].tc,kullanýcý.tc);		
					strcpy(üyesildir[i].ad,kullanýcý.ad);				//
					strcpy(üyesildir[i].soyad,kullanýcý.soyad);		//
							                                          //Eðer isim yoksa o i deðerine göre direk ismi üyesildir struct deðiþkenine kopyalar.
					strcpy(üyesildir[i].tel,kullanýcý.tel);
					strcpy(üyesildir[i].adres,kullanýcý.adres);
					strcpy(üyesildir[i].eposta,kullanýcý.eposta);	
					strcpy(üyesildir[i].kullanici_adi,kullanýcý.kullanici_adi);		//	
					strcpy(üyesildir[i].þifre,kullanýcý.þifre);
					strcpy(üyesildir[i].yetki_türü,kullanýcý.yetki_türü);
				}
				i++;
			}
			fclose(Uye);
			if (denetleyici==0)
			{
				printf("Rehberde %s TC Kimlik numarali bir uye bulunamadi.",sil_ad2);
				Sleep(1500);
				üyesil();
			}
			Uye=fopen("kullanýcý uyeler.dat","w");
			for(int j=0 ; j<i ; j++)
			{
				fprintf(Uye, "%s %s %s %s %s %s %s %s %s  \n",üyesildir[j].tc, üyesildir[j].ad, üyesildir[j].soyad, üyesildir[j].tel, üyesildir[j].adres, üyesildir[j].eposta, üyesildir[j].kullanici_adi, üyesildir[j].þifre, üyesildir[j].yetki_türü);
			}
			fclose(Uye);
			printf("%s TC Kimlik Numarali kisi basariyla silinmistir",sil_ad2);
			Sleep(2500);
			system("cls");
		
		denemek : printf("\n\n     Yeni bir kullanýcý daha silmek istiyor musunuz(e/h) : "); // baþka ekleme yapýp yapmayacaðýmýz sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			üyesil();				
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

void sýgýnmacýekle()
{
	system("cls");
	int denetleyici = 0;
	int x;
	char cevap;
	Sýgýnmacý=fopen("sýgýnmacýlar.dat","a");
	if(Sýgýnmacý==NULL)
		printf("Dosyaya erisilemiyor.");
	else 
	{
		rewind(Sýgýnmacý);
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tSIGINMACI EKLE\n");
		printf("********************************************************************************************************\n\n");
		printf("Kayit Edilecek Siginmacinin Bilgilerini Giriniz...\n\n");
		printf(" siginmaci no:");
		scanf("%s",&sýgýnmacý.siginmaci_no);
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.siginmaci_no);
		for(;;)
		{
			printf("\n Siginmaci ad: ");
			scanf("%s",&sýgýnmacý.ad);
			x=sorgulama10(sýgýnmacý.ad);
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
		fprintf(Sýgýnmacý,"%s  ",sýgýnmacý.ad);
		for(;;)
		{
			printf("\n Siginmacinin Soyadi: ");
			scanf("%s",&sýgýnmacý.soyad);
			x=sorgulama11(sýgýnmacý.soyad);
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
		fprintf(Sýgýnmacý,"%s  ",sýgýnmacý.soyad);
		for(;;)
		{
			printf("\n Siginmacinin Dogum Tarihi: ");
			scanf("%s",&sýgýnmacý.dogum_tarihi);
			x=sorgulama9(sýgýnmacý.dogum_tarihi);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.dogum_tarihi);
		for(;;)
		{
			printf("\n Siginmacinin dogum yeri: ");
			scanf("%s",&sýgýnmacý.dogum_yeri);
			x=sorgulama12(sýgýnmacý.dogum_yeri);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.dogum_yeri);
			for(;;)
		{
			printf("\n Siginmacinin cinsiyeti: ");
			scanf("%s",&sýgýnmacý.cinsiyet);
			x=sorgulama13(sýgýnmacý.cinsiyet);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.cinsiyet);
		for(;;)
		{
			printf("\n Siginmacinin uyrugu: ");
			scanf("%s",&sýgýnmacý.uyruk);
			x=sorgulama14(sýgýnmacý.uyruk);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.uyruk);
		for(;;)
		{
			printf("\n Siginmacinin meslegi: ");
			scanf("%s",&sýgýnmacý.meslek);
			x=sorgulama14(sýgýnmacý.meslek);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.meslek);
		for(;;)
		{
			printf("\n Siginmacinin egitim durumu: ");
			scanf("%s",&sýgýnmacý.egitim_durumu);
			x=sorgulama15(sýgýnmacý.egitim_durumu);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.egitim_durumu);
		for(;;)
		{
			printf("\n Siginmacinin telefon numarasi: ");
			scanf("%s",&sýgýnmacý.telefon);
			x=sorgulama(sýgýnmacý.telefon);
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
		fprintf(Sýgýnmacý,"%s  ",sýgýnmacý.telefon);
		for(;;)
		{
			printf("\n Siginmacinin yerlestirildigi adres: ");
			scanf("%s",&sýgýnmacý.yerlestirildigi_adres);
			x=sorgulama17(sýgýnmacý.yerlestirildigi_adres);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.yerlestirildigi_adres);
			for(;;)
		{
			printf("\n Siginmacinin geldigi sehir: ");
			scanf("%s",&sýgýnmacý.geldigi_sehir);
			x=sorgulama18(sýgýnmacý.geldigi_sehir);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.geldigi_sehir);
		for(;;)
		{
			printf("\n Siginmacinin Gelis Tarihi: ");
			scanf("%s",&sýgýnmacý.gelis_tarihi);
			x=sorgulama9(sýgýnmacý.gelis_tarihi);
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
		fprintf(Sýgýnmacý,"%s	",sýgýnmacý.gelis_tarihi);
		printf("Eposta adresiniz var mý? \n 1)evet \n 2)hayýr\n SECÝMÝNÝZ:");
		int secim;
		scanf("%d",&secim);
		if(secim==1)
		{
          printf("\n Siginmacinin eposta adresi:");
		_flushall();
		gets(sýgýnmacý.eposta);			
		fprintf(Sýgýnmacý,"%s	\n",sýgýnmacý.eposta);
		}
		else
		{
			fprintf(Sýgýnmacý,"%s	\n"," ");
		}
		
		fclose(Sýgýnmacý);
		printf("\n Girilen bilgiler dosyaya kaydediliyor...");
		Sleep(2500);
		system("cls");
		printf("\n\n     Yeni bir siginmaci daha eklemek istiyor musunuz(e/h) : "); // baþka ekleme yapýp yapmayacaðýmýz sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			sýgýnmacýekle();				
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
void sýgýnmacýsil()
{
	system("cls");
	char sil_sno[25];
	int denetleyici=0;
	char cevap;
	printf("Silinecek siginmacinin nosunu giriniz: ");
	scanf("%s",&sil_sno);
	Sýgýnmacý=fopen("sýgýnmacýlar.dat","r+");
	int i=0;
	if (Sýgýnmacý == NULL)
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tSIGINMACI SILME\n");
		printf("********************************************************************************************************\n\n");
		while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi, &sýgýnmacý.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{
			if(strcmp(sýgýnmacý.siginmaci_no,sil_sno)==0)
			{	
				denetleyici=1;
				strcpy(sýgýnmacýsildir[i].siginmaci_no," ");
				strcpy(sýgýnmacýsildir[i].ad," ");		
				strcpy(sýgýnmacýsildir[i].soyad," ");	
				strcpy(sýgýnmacýsildir[i].dogum_tarihi," ");	
				strcpy(sýgýnmacýsildir[i].dogum_yeri," ");	
				strcpy(sýgýnmacýsildir[i].cinsiyet," ");	
				strcpy(sýgýnmacýsildir[i].uyruk," ");	
				strcpy(sýgýnmacýsildir[i].meslek," ");		
				strcpy(sýgýnmacýsildir[i].egitim_durumu," ");	
				strcpy(sýgýnmacýsildir[i].telefon," ");	
				strcpy(sýgýnmacýsildir[i].yerlestirildigi_adres," ");	
				strcpy(sýgýnmacýsildir[i].geldigi_sehir," ");	
				strcpy(sýgýnmacýsildir[i].gelis_tarihi," ");
				strcpy(sýgýnmacýsildir[i].eposta," ");		
				

			}
			else 
			{	
				strcpy(sýgýnmacýsildir[i].ad,sýgýnmacý.siginmaci_no);
				strcpy(sýgýnmacýsildir[i].ad,sýgýnmacý.ad);				//
				strcpy(sýgýnmacýsildir[i].soyad,sýgýnmacý.soyad);		//
				strcpy(sýgýnmacýsildir[i].dogum_tarihi,sýgýnmacý.dogum_tarihi);		//
				strcpy(sýgýnmacýsildir[i].dogum_yeri,sýgýnmacý.dogum_yeri);		//Eðer isim yoksa o i deðerine göre direk ismi sýgýnmacýsildir struct deðiþkenine kopyalar.
				strcpy(sýgýnmacýsildir[i].cinsiyet,sýgýnmacý.cinsiyet);		//
				strcpy(sýgýnmacýsildir[i].uyruk,sýgýnmacý.uyruk);	
				strcpy(sýgýnmacýsildir[i].meslek,sýgýnmacý.meslek);				//
				strcpy(sýgýnmacýsildir[i].egitim_durumu,sýgýnmacý.egitim_durumu);		//
				strcpy(sýgýnmacýsildir[i].telefon,sýgýnmacý.telefon);		//
				strcpy(sýgýnmacýsildir[i].yerlestirildigi_adres,sýgýnmacý.yerlestirildigi_adres);		//Eðer isim yoksa o i deðerine göre direk ismi sýgýnmacýsildir struct deðiþkenine kopyalar.
				strcpy(sýgýnmacýsildir[i].geldigi_sehir,sýgýnmacý.geldigi_sehir);		//
				strcpy(sýgýnmacýsildir[i].gelis_tarihi,sýgýnmacý.gelis_tarihi);
				strcpy(sýgýnmacýsildir[i].eposta,sýgýnmacý.eposta);
			}
			i++;
		}
		fclose(Sýgýnmacý);
		if (denetleyici==0)
		{
			printf("Kayýtlarda %s numarali bir siginmaci bulunamadi.",sil_sno);
			Sleep(1500);
			system("cls");
			sýgýnmacýsil();
		}
		Sýgýnmacý=fopen("sýgýnmacýlar.dat","w");
		for(int j=0 ; j<i ; j++)
		{
			fprintf(Sýgýnmacý, "%s  %s  %s  %s  %s  %s%s%s%s%s%s%s%s%s  \n",sýgýnmacýsildir[j].siginmaci_no,sýgýnmacýsildir[j].ad, sýgýnmacýsildir[j].soyad, sýgýnmacýsildir[j].dogum_tarihi, sýgýnmacýsildir[j].dogum_yeri, sýgýnmacýsildir[j].cinsiyet, sýgýnmacýsildir[j].uyruk,sýgýnmacýsildir[j].meslek, sýgýnmacýsildir[j].egitim_durumu, sýgýnmacýsildir[j].telefon, sýgýnmacýsildir[j].yerlestirildigi_adres, sýgýnmacýsildir[j].geldigi_sehir, sýgýnmacýsildir[j].gelis_tarihi,sýgýnmacýsildir[j].eposta);
		}
		fclose(Sýgýnmacý);
		printf("%s  Numarali siginmaci basariyla silinmistir",sil_sno);
		Sleep(2500);
		system("cls");
		gel : printf("\n\n     Yeni bir siginmaci daha silmek istiyor musunuz(e/h) : "); // baþka ekleme yapýp yapmayacaðýmýz sorulur
		scanf("%s",&cevap);
		if(cevap=='h')	
		{
			main();				
		}
		if (cevap=='e')
		{
			sýgýnmacýsil();				
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
void adminüyeol()
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
				printf("\nLutfen sadece harf kullanýnýz");
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
				printf("\nLutfen sadece harf kullanýnýz");
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
		scanf("%s",&admin.þifre);
		fprintf(Uye,"%s  \n",admin.þifre);
		fclose(Uye);
		printf("\n Girilen bilgiler dosyaya kaydediliyor...");
		Sleep(2500);
		system("cls");
		main();
	}
}

void sýgýnmacýmemuruüyeol()
	{
int x;
	Uye=fopen("sýgýnmacý memur uyeler.dat","a");
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
			printf("\n adýnýz: ");
			scanf("%s",&sýgýnmacý_memuru.ad);
			x=sorgulama5(sýgýnmacý_memuru.ad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullanýnýz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.ad);
		for(;;)
		{
			printf("\n soyad: ");
			scanf("%s",&sýgýnmacý_memuru.soyad);
			x=sorgulama6(sýgýnmacý_memuru.soyad);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullanýnýz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.soyad);
		for(;;)
		{
			printf("\n TC Kimlik Numaraniz: ");
			scanf("%s",&sýgýnmacý_memuru.tc);
			x=sorgulama(sýgýnmacý_memuru.tc);
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
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.tc);
		printf("\n E-mail Adresiniz: ");
		scanf("%s",&sýgýnmacý_memuru.eposta);
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.eposta);
		for(;;)
		{
			printf("\n Telefon numaranýz: ");
			scanf("%s",&sýgýnmacý_memuru.tel);
			x=sorgulama8(sýgýnmacý_memuru.tel);
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
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.tel);
		for(;;)
		{
			printf("\n adres: ");
			scanf("%s",&sýgýnmacý_memuru.adres);
			x=sorgulama7(sýgýnmacý_memuru.adres);
			if (x==1)
			{
				printf("\nLutfen sadece harf kullanýnýz");
				Sleep(3000);
			}
			if (x==0)
			{
				break;
			}
		}		
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.adres);
		printf("\n kullanýcý adýnýz:");
		_flushall();
		gets(admin.kullanici_adi);	
		fprintf(Uye,"%s  ",sýgýnmacý_memuru.kullanici_adi);
		printf("\n Uyelik Sifreniz:");
		scanf("%s",&sýgýnmacý_memuru.þifre);
		fprintf(Uye,"%s  \n",sýgýnmacý_memuru.þifre);
		printf("\n yetki-türü:");
		scanf("%s",&sýgýnmacý_memuru.yetki_türü);
		fprintf(Uye,"%s  \n",sýgýnmacý_memuru.yetki_türü);
		fclose(Uye);
		printf("\n Sisteme basariyla uye oldunuz...");
		Sleep(2500);
		system("cls");
		main();
	}
}

void kullanýcýüyeol()
{
	char ad;
int x;
	Uye=fopen("kullanýcý uyeler.dat","a");
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
			scanf("%s",&kullanýcý.ad);
			x=sorgulama3(kullanýcý.ad);
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
		fprintf(Uye,"%s  ",kullanýcý.ad);
		for(;;)
		{
			printf("\n Soyadiniz: ");
			scanf("%s",&kullanýcý.soyad);
			x=sorgulama2(kullanýcý.soyad);
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
		fprintf(Uye,"%s  ",kullanýcý.soyad);
		for(;;)
		{
			printf("\n TC Kimlik Numaraniz: ");
			scanf("%s",&kullanýcý.tc);
			x=sorgulama(kullanýcý.tc);
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
		fprintf(Uye,"%s",kullanýcý.tc);
		printf("\n E-mail Adresiniz: ");
		scanf("%s",&kullanýcý.eposta);
		fprintf(Uye,"%s  ",kullanýcý.eposta);
		for(;;)
		{
			printf("\n Telefon Numaranýz: ");
			scanf("%s",&kullanýcý.tel);
			x=sorgulama8(kullanýcý.tel);
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
		fprintf(Uye,"%s  ",kullanýcý.tel);
		for(;;)
		{
			printf("\n Adresiniz: ");
			scanf("%s",&kullanýcý.adres);
			x=sorgulama4(kullanýcý.adres);
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
		fprintf(Uye,"%s  ",kullanýcý.adres);
		printf("\n Kullanici Adiniz:");
		_flushall();
		gets(kullanýcý.kullanici_adi);	
		fprintf(Uye,"%s  ",kullanýcý.kullanici_adi);
		printf("\n Uyelik Sifreniz:");
		scanf("%s",&kullanýcý.þifre);
		fprintf(Uye,"%s  \n",kullanýcý.þifre);
		printf("\n Yetki-Turunuz:");
		scanf("%s",&admin.yetki_türü);
		fprintf(Uye,"%s  \n",kullanýcý.yetki_türü);
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
	for (int i = 0; i < 11; i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(kullanýcý.soyad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(kullanýcý.ad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(kullanýcý.adres); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý_memuru.ad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý_memuru.soyad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý_memuru.adres); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < 11; i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
	for (int i = 0; i < 8; i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.ad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.soyad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.dogum_yeri); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.cinsiyet); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.uyruk); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.meslek); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.egitim_durumu); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.yerlestirildigi_adres); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(sýgýnmacý.geldigi_sehir); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(admin.ad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(admin.soyad); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
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
for (int i = 0; i < strlen(admin.adres); i++) //Girilen numaranýn 11 haneli olduðunu ve harf girilip girilmediðini kontrol eden kýsým
	{
         if (isalpha(x[i])==0)
		{
			a=1;
		}
		
	}
	return a;
}
void sýgýnmacýarama()
{
	char ad1[25];
	char soyad1[25];
	char uyruk1[15];
	char yasadýgýyer1[20];
	int Secim, denetleyici = 0;
	char Secim2;
	Sýgýnmacý=fopen("sýgýnmacýlar.dat","r");
	if (Sýgýnmacý == NULL)//Dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) NULL deðeri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else//Dosya daha önce varsa arama iþlemi yapýlabilir.
	{
		surayagitt : system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  SIGINMACI ARAMA\n");
		printf("********************************************************************************************************\n\n");
		printf(" 1-Ad ile arama\n");
		printf(" 2-soyad ile arama\n");
		printf(" 3-uyruk ile arama\n");
		printf(" 4-yasadigi yere göre arama\n\n");
		printf("Seciminiz : ");
		scanf("%d", &Secim);
		switch (Secim)
		{
		case 1:
			{
				system("cls");
				printf("Aradiginiz siginmacinin adini giriniz:");
				_flushall();
				gets(ad1); // scanf ile almýyor burda gets ile alýyor 
				printf("\n");
				rewind(Sýgýnmacý);
				while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi,&sýgýnmacý.eposta) != EOF)
				{
					if (strcmp(sýgýnmacý.ad, ad1)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("Siginmaci Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin adý:  %s\nsiginmacinin soyadý:  %s\nsiginmacinin dogum tarihi:  %s\nsýgýnmacýnýn dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",sýgýnmacý.siginmaci_no, sýgýnmacý.ad, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk,sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi,sýgýnmacý.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu isimde bir sýgýnmacý kayitli degil!\n\n");
				}
				break;
			}
		case 2:
			{
				system("cls");
				printf("Aradiginiz siginmacinin soyadýný giriniz:");
				_flushall();
				gets(soyad1); // scanf ile almýyor burda gets ile alýyor
				rewind(Sýgýnmacý);
				while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi,&sýgýnmacý.eposta) != EOF)
				{
					if (strcmp(sýgýnmacý.soyad, soyad1)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("sýgýnmacý Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin adý:  %s\nsiginmacinin soyadý:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsýgýnmacýnýn cinsiyeti:  %s\nsýgýnmacýnýn uyrugu:  %s\nsýgýnmacýnýn meslegi:  %s\nsýgýnmacýnýn egitim durumu:  %s\nsýgýnmacýnýn telefon:  %s\nsýgýnmacýnýn yerlestirildigi adres:  %s\nsýgýnmacýnýn geldigi sehir:  %s\nsýgýnmacýnýn geldigi tarih:  %s\nsýgýnmacýnýn eposta adresi:  %s\n\n\n",sýgýnmacý.siginmaci_no, sýgýnmacý.ad, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk,sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi,sýgýnmacý.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu soyad ile kayitli bir sýgýnmacý mevcut deðildir.\n\n");
				}
				break;
			}
		case 3:
			{
				system("cls");
				printf("Aradiginiz siginmacinin uyrugunu giriniz:");
				_flushall();
				gets(uyruk1); // scanf ile almýyor burda gets ile alýyor
				rewind(Sýgýnmacý);
				while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi,&sýgýnmacý.eposta) != EOF)
				{
					if (strcmp(sýgýnmacý.uyruk, uyruk1)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("siginmaci Bilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin adý:  %s\nsiginmacinin soyadý:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon numarasi:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",sýgýnmacý.siginmaci_no, sýgýnmacý.ad, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk,sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi,sýgýnmacý.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu uyrukta bir sýgýnmacý kayitli degil!\n\n");
				}
				break;
			}
		case 4:
			{
				system("cls");
				printf("Aradiginiz siginmacinin yasadýgý yeri giriniz:");
				_flushall();
				gets(yasadýgýyer1); // scanf ile almýyor burda gets ile alýyor
				rewind(Sýgýnmacý);
				while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi,&sýgýnmacý.eposta) != EOF)
				{
					if (strcmp(sýgýnmacý.yerlestirildigi_adres, yasadýgýyer1)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("sýgýnmacýBilgileri\n");
						printf("--------------\n");
						printf("siginmacinin nosu:  %s\nsiginmacinin adý:  %s\nsiginmacinin soyadý:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu:  %s\nsiginmacinin meslegi:  %s\nsiginmacinin egitim durumu:  %s\nsiginmacinin telefon:  %s\nsiginmacinin yerlestirildigi adres:  %s\nsiginmacinin geldigi sehir:  %s\nsiginmacinin geldigi tarih:  %s\nsiginmacinin eposta adresi:  %s\n\n\n",sýgýnmacý.siginmaci_no, sýgýnmacý.ad, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk,sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi,sýgýnmacý.eposta);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu yere ait siginmaci mevcut deðildir.\n\n");
				}
				break;			
			}
		default:{ printf("YANLIS SECÝM YAPTINIZ");
			goto surayagitt;
				}
				
		}
	}	
	printf("\n");//Ýþleme devam edip etmeyeceði sorgulandmýþtýr.
	geri : printf("Arama islemine devam etmek icin (A/a) tusuna basiniz\n");
	printf("Menuye donmek icin (M/m) tusuna basiniz \n");
	printf("Cikis  yapmak icin (C/c) tusuna basiniz\n\n");
	printf("Tercihiniz: ");
	scanf("%c", &Secim2); system("cls");
	if (Secim2 == 'a' || Secim2== 'A')
	{
		sýgýnmacýarama();
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
void sýgýnmacýgüncelle()
{
	system("cls");
	int denetleyici=0;
	int k=0,denetleyici2=0;
	char cevap,secimm;
	char guncelle_no[25];
	printf("\nGuncellenicek Siginmacinin Numarasini Giriniz:");
	scanf("%s",&guncelle_no);
	system("cls");
	Sýgýnmacý = fopen("sýgýnmacýlar.dat", "r+");
	if (Sýgýnmacý == NULL)
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else//Dosya daha önce varsa güncelleme iþlemi yapýlabilir.
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  SIGINMACI BILGISI GUNCELLEME\n");
		printf("********************************************************************************************************\n\n");
		while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s",&sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk,&sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi,&sýgýnmacý.eposta) != EOF) //Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{
			if (strcmp(sýgýnmacý.siginmaci_no, guncelle_no)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa bilgileri deðiþtiriyoruz
			{	
				//kiþi bilgileri deðiþtirilerek k deðerine göre olan struct deðiþkenine bilgilerimizi kaydediyoruz
				
				denetleyici2=1;
				printf("\n%s Numarali siginmaci hakkinda yeni bilgileri giriniz.\n",guncelle_no);
				printf("Kayit edilecek siginmacinin bilgilerini giriniz...\n\n");
				printf("\n siginmaci no:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].siginmaci_no);
				printf("  Ad:");
				scanf("%s",&sýgýnmacýgüncelleme[k].siginmaci_no);
				printf("\n Soyad:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].soyad);
				printf("\n Sýgýnmacýnýn Dogum Tarihi:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].dogum_tarihi);
				printf("\n Dogum Yeri:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].dogum_yeri);
				printf("\n Cinsiyet:");
				scanf("%s",&sýgýnmacýgüncelleme[k].cinsiyet);
				printf("\n Uyruk:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].uyruk);
				printf(" Meslek:");
				scanf("%s",&sýgýnmacýgüncelleme[k].meslek);
				printf("\n Egitim Durumu:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].egitim_durumu);
				printf("  Telefon:");
				scanf("%s",&sýgýnmacýgüncelleme[k].telefon);
				printf("\n Yerlestigi Adres:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].yerlestirildigi_adres);
				printf("  Geldigi Sehir:");
				scanf("%s",&sýgýnmacýgüncelleme[k].geldigi_sehir);
				printf("\n Geldigi Tarih:");
				_flushall();
				gets(sýgýnmacýgüncelleme[k].gelis_tarihi);
				printf("  Eposta:");
				scanf("%s",&sýgýnmacýgüncelleme[k].eposta);
				printf("\nSIGINMACI GUNCELLENMISTIR.\n\n");
				Sleep(2500);
				system("cls");
			}
			else
			{
				strcpy(sýgýnmacýgüncelleme[k].siginmaci_no,sýgýnmacý.siginmaci_no);
				strcpy(sýgýnmacýgüncelleme[k].ad,sýgýnmacý.ad);				//
				strcpy(sýgýnmacýgüncelleme[k].soyad,sýgýnmacý.soyad);		//
				strcpy(sýgýnmacýgüncelleme[k].dogum_tarihi,sýgýnmacý.dogum_tarihi);		//
				strcpy(sýgýnmacýgüncelleme[k].dogum_yeri,sýgýnmacý.dogum_yeri);		//Eðer isim yoksa o i deðerine göre direk ismi sýgýnmacýguncelle struct deðiþkenine kopyalar.
				strcpy(sýgýnmacýgüncelleme[k].cinsiyet,sýgýnmacý.cinsiyet);		//
				strcpy(sýgýnmacýgüncelleme[k].uyruk,sýgýnmacý.uyruk);	
				strcpy(sýgýnmacýgüncelleme[k].ad,sýgýnmacý.meslek);				//
				strcpy(sýgýnmacýgüncelleme[k].soyad,sýgýnmacý.egitim_durumu);		//
				strcpy(sýgýnmacýgüncelleme[k].dogum_tarihi,sýgýnmacý.yerlestirildigi_adres);		//
				strcpy(sýgýnmacýgüncelleme[k].dogum_yeri,sýgýnmacý.geldigi_sehir);		//
				strcpy(sýgýnmacýgüncelleme[k].cinsiyet,sýgýnmacý.gelis_tarihi);		//
				strcpy(sýgýnmacýgüncelleme[k].uyruk,sýgýnmacý.eposta);
			}
			k++;
		}
		fclose(Sýgýnmacý);
	}
	if(denetleyici2==0)
	{
		printf("Kayitlar arasinda %s  Numarali siginmaci bulunmamaktadir.",guncelle_no);
		Sleep(1500);
		sýgýnmacýgüncelle();
	}
	Sýgýnmacý=fopen("sýgýnmacýlar.dat","w");//dosyayý sýfýrdan açýp tekrar yazdýrmak için yazma modunda açýyoruz.
	for(int j=0 ; j<k ; j++)
	{			
		fprintf(Sýgýnmacý, "%s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s  %s \n",sýgýnmacýgüncelleme[j].siginmaci_no,sýgýnmacýgüncelleme[j].ad, sýgýnmacýgüncelleme[j].soyad, sýgýnmacýgüncelleme[j].dogum_tarihi, sýgýnmacýgüncelleme[j].dogum_yeri, sýgýnmacýgüncelleme[j].cinsiyet, sýgýnmacýgüncelleme[j].uyruk,sýgýnmacýgüncelleme[j].meslek, sýgýnmacýgüncelleme[j].egitim_durumu,sýgýnmacýgüncelleme[j].telefon, sýgýnmacýgüncelleme[j].yerlestirildigi_adres, sýgýnmacýgüncelleme[j].geldigi_sehir, sýgýnmacýgüncelleme[j].gelis_tarihi, sýgýnmacýgüncelleme[j].eposta);
	}
	fclose(Sýgýnmacý);
	system("cls");
	tekrarrr : printf("\n\n     Yeni bir siginmaci eklemek istiyor musunuz(e/h) : "); // baþka ekleme yapýp yapmayacaðýmýz sorulur
	scanf("%s",&cevap);
	if(cevap=='h')	
	{
		main();				
	}
	if (cevap=='e')
	{
		sýgýnmacýgüncelle();				
	}
	else
	{
		system("cls");
		printf("Yanlis bir secim girdiniz");
		Sleep(1500);				
		goto tekrarrr;
	}
}
void üyegüncelle()
{
	int x;
	system("cls");
	int denetleyici=0;
	int k=0,denetleyici2=0;
	char cevap;
	char guncelle_ad[11];
	char guncelle2_tc[11];
	int secim;
	printf("admin olarak güncelleme yapmak istiyorumusunuz?");
	printf("\n\n1) evet\n2) hayýr\n");
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
		Uye = fopen("kullanýcý uyeler.dat", "r+");//Dosyayý okuma+yazma modunda açýyoruz...
		if (Uye == NULL)//Dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) NULL deðeri gelir
		{
			printf("Dosya veya sunucu bulunamadi!\n");
		}
		else//Dosya daha önce varsa güncelleme iþlemi yapýlabilir.
		{
			system("cls");
			printf("********************************************************************************************************");
			printf("\n\t\t\t\t  KAYIT GUNCELLEME\n");
			printf("********************************************************************************************************\n\n");
			while (fscanf(Uye, "%s%s%s%s%s%s%s%s", &kullanýcý.ad, &kullanýcý.soyad, &kullanýcý.tc, &kullanýcý.eposta, &kullanýcý.tel, &kullanýcý.adres, &kullanýcý.kullanici_adi, &kullanýcý.þifre) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
			{
				if (strcmp(kullanýcý.ad, guncelle_ad)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa bilgileri deðiþtiriyoruz
				{	
					//kiþi bilgileri deðiþtirilerek k deðerine göre olan struct deðiþkenine bilgilerimizi kaydediyoruz
					denetleyici2=1;
					printf("\n%s TC Kimlik Numarali kisi hakkinda yeni bilgileri giriniz.\n",guncelle_ad);
					printf(" Adi:");
					scanf("%s",&üyegüncelleme[k].ad);	
					printf("\n Soyadi:");
					scanf("%s",&üyegüncelleme[k].soyad);				
					for(;;)
					{
						printf("\n TC Kimlik Numarasi: ");
						scanf("%s",&üyegüncelleme[k].tc);	
						x=sorgulama(üyegüncelleme[k].tc);
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
					scanf("%s",&üyegüncelleme[k].eposta);
					for(;;)
					{				

						printf("\n Telefon Numarasi:");
						scanf("%s",&üyegüncelleme[k].tel);
						x=sorgulama(üyegüncelleme[k].tel);
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
					gets(üyegüncelleme[k].adres);					
					printf("\n Kullanici Adi :");
					_flushall();
					gets(üyegüncelleme[k].kullanici_adi);
					printf("\n Uyelik Sifresi:");
					scanf("%s",&üyegüncelleme[k].þifre);
					printf("\nKisi guncellenmistir.\n\n");
					Sleep(2500);
					system("cls");
				}
				else
				{
					strcpy(üyegüncelleme[k].ad,kullanýcý.ad);			
					strcpy(üyegüncelleme[k].soyad,kullanýcý.soyad);		
					strcpy(üyegüncelleme[k].tc,kullanýcý.tc);
					strcpy(üyegüncelleme[k].eposta,kullanýcý.eposta);	
					strcpy(üyegüncelleme[k].tel,kullanýcý.tel);		
					strcpy(üyegüncelleme[k].adres,kullanýcý.adres);		
					strcpy(üyegüncelleme[k].kullanici_adi,kullanýcý.kullanici_adi);	
					strcpy(üyegüncelleme[k].þifre,kullanýcý.þifre);
				}
				k++;
			}
			fclose(Uye);
		}
		if(denetleyici2==0)
		{
			printf("Kayitlar arasinda %s TC Kimlik Numarali biri bulunmamaktadir.",guncelle_ad);
			Sleep(1500);
			üyegüncelle();
		}
		Uye=fopen("kullanýcý uyeler.dat","w");//dosyayý sýfýrdan açýp tekrar yazdýrmak için yazma modunda açýyoruz.
		for(int j=0 ; j<k ; j++)
		{			
			fprintf(Uye, "%s  %s  %s  %s  %s  %s  %s  %s\n",üyegüncelleme[j].ad, üyegüncelleme[j].soyad, üyegüncelleme[j].tc, üyegüncelleme[j].eposta, üyegüncelleme[j].tel, üyegüncelleme[j].adres, üyegüncelleme[j].kullanici_adi, üyegüncelleme[j].þifre);
		}
		fclose(Uye);
	}
	
	system("cls");
	dene : printf("\n\n     Yeni bir kisi daha guncellemek istiyor musunuz(e/h) : "); // baþka ekleme yapýp yapmayacaðýmýz sorulur
	scanf("%s",&cevap);
	if(cevap=='h')	
	{
		main();				
	}
	if (cevap=='e')
	{
		üyegüncelle();				
	}
	else
	{
		system("cls");
		printf("Yanlis bir secim girdiniz");
		Sleep(1500);				
		goto dene;
	}
}
void üyearama()
{
	char kad[11];
	char ad[25];
	char soyad[15];
	char posta[11];
	int Secim, denetleyici = 0;
	char Secim2;
	Uye = fopen("kullanýcý uyeler.dat","r");
	if (Uye == NULL)//Dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) NULL deðeri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}

	else//Dosya daha önce varsa arama iþlemi yapýlabilir.
	{
		giitt : system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  KULLANICI ARAMA\n");
		printf("********************************************************************************************************\n\n");
		printf(" 1-adres ile arama\n");
		printf(" 2-ad ile arama\n");
		printf(" 3-soyad ile arama\n");
		printf(" 4-epostaya göre arama\n\n");
		printf("Seciminiz : ");
		scanf("%d", &Secim);
		switch (Secim)
		{
		case 1:
			{
				system("cls");
				printf("Aradiginiz kullanicinin adresini giriniz:");
				_flushall();
				gets(kad); // scanf ile almýyor burda gets ile alýyor 
				printf("\n");
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s", &kullanýcý.tc, &kullanýcý.ad, &kullanýcý.soyad, &kullanýcý.tel, &kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi,&kullanýcý.þifre, &kullanýcý.yetki_türü) != EOF)
				{
					if (strcmp(kullanýcý.adres , kad)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("kullanici bilgileri\n");
						printf("--------------\n");
						printf("kullanýcýnýn tc:  %s\nkullanýcýnýn ad:  %s\n kullanýcýnýn soyad:  %s\nkullanýcýnýn telefon numarasi: %s\nkullanýcýnýn adresi:  %s\nkullanýcýnýn eposta adresi:  %s\nkullanýcýnýn kullanýcý adý:  %s\nkullanýcýnýn sifresi:  %s\nkullanýcýnýn yetki turu:  %s\n\n", kullanýcý.tc, kullanýcý.ad, kullanýcý.soyad,kullanýcý.tel, kullanýcý.adres, kullanýcý.eposta, kullanýcý.kullanici_adi, kullanýcý.þifre,kullanýcý.yetki_türü);
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
				gets(ad); // scanf ile almýyor burda gets ile alýyor
				rewind(Uye);
				while(fscanf(Uye, "%s %s %s %s %s %s %s %s %s",&kullanýcý.tc, &kullanýcý.ad, &kullanýcý.soyad,&kullanýcý.tel, &kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi,&kullanýcý.þifre, &kullanýcý.yetki_türü)  != EOF)
				{
					if (strcmp(kullanýcý.ad, ad)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("KULLANICI Bilgileri\n");
						printf("--------------\n");
						printf("kullanýcýnýn tc:  %s\n kullanýcýnýn ad:  %s\n kullanýcýnýn soyad:  %s\nkullanýcýnýn telefon numarasý: %s\nkullanýcýnýn adresi:  %s\nkullanýcýnýn eposta adresi:  %s\nkullanýcýnýn kullanýcý adý:  %s\nkullanýcýnýn sifresi:  %s\nkullanýcýnýn yetki turu:  %s\n\n", kullanýcý.tc, kullanýcý.ad, kullanýcý.soyad, kullanýcý.tel, kullanýcý.adres, kullanýcý.eposta, kullanýcý.kullanici_adi, kullanýcý.þifre, kullanýcý.yetki_türü);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu ad ile kayitli bir kullanýcý mevcut deðildir.\n\n");
				}
				break;
			}
		case 3:
			{
				system("cls");
				printf("Aradiginiz kullanýcýnýn soyadýný giriniz:");
				_flushall();
				gets(soyad); // scanf ile almýyor burda gets ile alýyor
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s",&kullanýcý.tc, &kullanýcý.ad, &kullanýcý.soyad,&kullanýcý.tel, &kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi,&kullanýcý.þifre, &kullanýcý.yetki_türü)  != EOF)
				{
					if (strcmp(kullanýcý.soyad, soyad)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("kullanýcý Bilgileri\n");
						printf("--------------\n");
						printf("kullanýcýnýn tc:  %s\nkullanýcýnýn ad:  %s\n kullanýcýnýn soyad:  %s\nkullanýcýnýn telefon numarasý: %s,kullanýcýnýn adresi:  %s\nkullanýcýnýn eposta adresi:  %s\nkullanýcýnýn kullanýcý adý:  %s\nkullanýcýnýn sifresi:  %s\nkullanýcýnýn yetki turu:  %s\n\n", kullanýcý.tc, kullanýcý.ad, kullanýcý.soyad,kullanýcý.tel, kullanýcý.adres, kullanýcý.eposta, kullanýcý.kullanici_adi,kullanýcý.þifre,kullanýcý.yetki_türü);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu soyad ile bir kullanýcý kayitli degil!\n\n");
				}
				break;
			}
		case 4:
			{
				system("cls");
				printf("Aradiginiz kullanýcýnýn telefon numarasýný giriniz:");
				_flushall();
				gets(posta); // scanf ile almýyor burda gets ile alýyor
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s%s%s",&kullanýcý.tc, &kullanýcý.ad, &kullanýcý.soyad,&kullanýcý.tel, &kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi,&kullanýcý.þifre,&kullanýcý.yetki_türü)  != EOF)
				{
					if (strcmp(kullanýcý.eposta, posta)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("kullanýcý Bilgileri\n");
						printf("--------------\n");
						printf("kullanýcýnýn tc:  %s\nkullanýcýnýn ad:  %s\n kullanýcýnýn soyad:  %s\nkullanýcýnýn telefon numarasý: %s\nkullanýcýnýn adresi:  %s\nkullanýcýnýn eposta adresi:  %s\nkullanýcýnýn kullanýcý adý:  %s\nkullanýcýnýn sifresi:  %s\nkullanýcýnýn yetki turu:  %s\n\n", kullanýcý.tc, kullanýcý.ad, kullanýcý.soyad,kullanýcý.tel, kullanýcý.adres, kullanýcý.eposta, kullanýcý.kullanici_adi, kullanýcý.þifre, kullanýcý.yetki_türü);
						denetleyici = 1;
					}
				}
				if (denetleyici == 0)
				{
					printf("\nBu epostaya ait kullanici mevcut deðildir.\n\n");
				}
				break;			
			}
		default:{
			printf("Yanlýs secim yaptiniz Tekrar deneyiniz");
			goto giitt;
			break;
				}
		}
	}	
	printf("\n");//Ýþleme devam edip etmeyeceði sorgulandmýþtýr.
	gerigel : printf("Arama islemine devam etmek icin (A/a) tusuna basiniz\n");
	printf("Menuye donmek icin (M/m) tusuna basiniz \n");
	printf("Cikis  yapmak icin (C/c) tusuna basiniz\n\n");
	printf("Tercihiniz: ");
	scanf("%c", &Secim2); system("cls");
	if (Secim2 == 'a' || Secim2== 'A')
	{
		üyearama();
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
		Uye = fopen("kullanýcý uyeler.dat", "r+");//Dosyayý okuma+yazma modunda açýyoruz...
		if (Uye == NULL)//Dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) NULL deðeri gelir
		{
			printf("Dosya veya sunucu bulunamadi!\n");
		}
		else//Dosya daha önce varsa güncelleme iþlemi yapýlabilir.
		{
			system("cls");
			printf("********************************************************************************************************");
			printf("\n\t\t\t\t  SIFRE DEGISTIRME\n");
			printf("********************************************************************************************************\n\n");
			while (fscanf(Uye,"%s%s%s%s%s%s%s%s",&kullanýcý.ad, &kullanýcý.soyad, &kullanýcý.tc,&kullanýcý.eposta, &kullanýcý.tel, &kullanýcý.adres, &kullanýcý.kullanici_adi, &kullanýcý.þifre)!=EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
			{
				if (strcmp(kullanýcý.þifre, x)==0)//Aranan isimle karþýlaþtýrma yaptýrýp doðruysa bilgileri deðiþtiriyoruz
				{
					denetleyici=1;
					strcpy(üyegüncelleme[k].ad,kullanýcý.ad);			
					strcpy(üyegüncelleme[k].soyad,kullanýcý.soyad);		
					strcpy(üyegüncelleme[k].tc,kullanýcý.tc);
					strcpy(üyegüncelleme[k].eposta,kullanýcý.eposta);
					strcpy(üyegüncelleme[k].tel,kullanýcý.tel);		
					strcpy(üyegüncelleme[k].adres,kullanýcý.adres);		
					strcpy(üyegüncelleme[k].kullanici_adi,kullanýcý.kullanici_adi);	
					printf("\n Yeni Uyelik Sifrenizi giriniz:");
					scanf("%s",&üyegüncelleme[k].þifre);
					
				}
				else
				{
					strcpy(üyegüncelleme[k].ad,kullanýcý.ad);			
					strcpy(üyegüncelleme[k].soyad,kullanýcý.soyad);		
					strcpy(üyegüncelleme[k].tc,kullanýcý.tc);
					strcpy(üyegüncelleme[k].eposta,kullanýcý.eposta);
					strcpy(üyegüncelleme[k].tel,kullanýcý.tel);		
					strcpy(üyegüncelleme[k].adres,kullanýcý.adres);		
					strcpy(üyegüncelleme[k].kullanici_adi,kullanýcý.kullanici_adi);	
					strcpy(üyegüncelleme[k].þifre,kullanýcý.þifre);
				}
				k++;
			}
			fclose(Uye);
		}
		if(denetleyici==0)
		{
			printf("\n\nBu sifre ile kayýtlý bir uye bulunamadi...");
			Sleep(1500);
			main();
		}
		Uye=fopen("kullanýcý uyeler.dat","w");//dosyayý sýfýrdan açýp tekrar yazdýrmak için yazma modunda açýyoruz.
		for(int j=0 ; j<k ; j++)
		{			
			fprintf(Uye, "%s  %s  %s  %s  %s  %s  %s  %s  \n",üyegüncelleme[j].ad, üyegüncelleme[j].soyad, üyegüncelleme[j].tc, üyegüncelleme[j].eposta, üyegüncelleme[j].tel, üyegüncelleme[j].adres, üyegüncelleme[j].kullanici_adi, üyegüncelleme[j].þifre);
		}
		fclose(Uye);
		printf("\n\n Sifreniz basariyla degistirilmistir...");
		Sleep(5500);
		main();
}
void sýgýnmacýlisteleme()
{
Sýgýnmacý = fopen("sýgýnmacýlar.dat", "r");	//Okuma modunda açýyoruz
	int Secim,secim1;
	if (Sýgýnmacý == NULL)//Dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) NULL deðeri gelir
	{
		printf("Dosya veya sunucu bulunamadi!\n");
	}
	else // Dosya önceden varsa kisi eklenebilir
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\tSÝGÝNMACÝ LÝSTESÝ\n");
		printf("********************************************************************************************************\n\n");
		printf("siginmacilari nasil listelemek istiyorsunuz\n\n1)siginmaci no\n2)siginmaci adi ile\n3)siginmaci soyadi ile\n");
		scanf("%d",&secim1);
		system("cls");
		if(secim1==1)
		{
		while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk, &sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi, &sýgýnmacý.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{	
			printf("siginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n", sýgýnmacý.siginmaci_no, sýgýnmacý.ad, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk, sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi, sýgýnmacý.eposta);
		}
		fclose(Sýgýnmacý);//Dosyayý kapatýyoruz		
		//Ýþleme devam edip etmeyeceði sorgulanmýþtýr.
		}
		else if(secim1==2)
		{
        while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk, &sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi, &sýgýnmacý.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{	
			printf("siginmacinin Adi:  %s\nsiginmaci NO:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n",  sýgýnmacý.ad,sýgýnmacý.siginmaci_no, sýgýnmacý.soyad, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk, sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi, sýgýnmacý.eposta);
		}
		fclose(Sýgýnmacý);
		}
		else if(secim1==3)
		{
        while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk, &sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi, &sýgýnmacý.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{	
			printf("siginmacinin soyadi:  %s\nsiginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin gelis tarihi :%s\nsiginmacinin eposta adresi :%s\n\n",sýgýnmacý.soyad,  sýgýnmacý.ad, sýgýnmacý.siginmaci_no, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk, sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon, sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.gelis_tarihi, sýgýnmacý.eposta);
		}
		}
		else
		{
			{
        while(fscanf(Sýgýnmacý, "%s%s%s%s%s%s%s%s%s%s%s%s%s%s", &sýgýnmacý.siginmaci_no, &sýgýnmacý.ad, &sýgýnmacý.soyad, &sýgýnmacý.dogum_tarihi, &sýgýnmacý.dogum_yeri, &sýgýnmacý.cinsiyet, &sýgýnmacý.uyruk, &sýgýnmacý.meslek, &sýgýnmacý.egitim_durumu, &sýgýnmacý.telefon, &sýgýnmacý.yerlestirildigi_adres, &sýgýnmacý.geldigi_sehir, &sýgýnmacý.gelis_tarihi, &sýgýnmacý.eposta) != EOF)//Dosya sonu belirteci EOF a kadar okunur ve istenilen iþlemlere geçilir.
		{	
			printf("siginmacinin gelis tarihi :%s\nsiginmaci NO:  %s\nsiginmacinin Adi:  %s\nsiginmacinin soyadi:  %s\nsiginmacinin dogum tarihi:  %s\nsiginmacinin dogum yeri:  %s\nsiginmacinin cinsiyeti:  %s\nsiginmacinin uyrugu: %s\nsiginmacinin meslegi :%s\nsiginmacinin egitim durumu :%s\nsiginmacinin telefon numarasi :%s\nsiginmacinin yerlestirildigi adres :%s\nsiginmacinin geldigi sehir :%s\nsiginmacinin eposta adresi :%s\n\n", sýgýnmacý.gelis_tarihi,sýgýnmacý.ad,sýgýnmacý.soyad,sýgýnmacý.siginmaci_no, sýgýnmacý.dogum_tarihi, sýgýnmacý.dogum_yeri, sýgýnmacý.cinsiyet, sýgýnmacý.uyruk, sýgýnmacý.meslek, sýgýnmacý.egitim_durumu, sýgýnmacý.telefon , sýgýnmacý.yerlestirildigi_adres, sýgýnmacý.geldigi_sehir, sýgýnmacý.eposta);
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
			
			main(); //Ana fonksiyona gönderilir				
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
void kullanýcýKBG()
{
    char adres[11];
	int secim, denetleyici = 0;
	char secim2;
	Uye = fopen("kullanýcý uyeler.dat","r");
	if (Uye == NULL)//dosya açýlmassa(daha önce açýlmýþ ve silinmiþse veya açma iþlemi gerçekleþtirilmemiþse) null deðeri gelir
	{
		printf("dosya veya sunucu bulunamadi!\n");
	}
	else//dosya daha önce varsa arama iþlemi yapýlabilir.
	{
		system("cls");
		printf("********************************************************************************************************");
		printf("\n\t\t\t\t  BILGI GORUNTULEME\n");
		printf("********************************************************************************************************\n\n");
				system("cls");
				printf(" Adresinizi Giriniz:");
				_flushall();
				gets(adres); // scanf ile almýyor burda gets ile alýyor 
				printf("\n");
				rewind(Uye);
				while(fscanf(Uye, "%s%s%s%s%s%s%s",  &kullanýcý.ad, &kullanýcý.soyad,&kullanýcý.tc, &kullanýcý.tel,&kullanýcý.adres, &kullanýcý.eposta, &kullanýcý.kullanici_adi, &kullanýcý.þifre, &kullanýcý.yetki_türü) != EOF)
				{
					if (strcmp(kullanýcý.adres, adres)==0)//aranan isimle karþýlaþtýrma yaptýrýp doðruysa ekrana yazýdýrýyoruz. 
					{
						printf("Kullanici Bilgileri\n");
						printf("--------------\n");
						printf("Kullanicinin Adi:  %s\n Kullanicinin Soyadi:  %s\nKullanicinin Tc Kimlik Numarasi:  %s\nKullanicinin Telefon Numarasi: %s\nKullanicinin Adresi:  %s\nKullanicinin Eposta Adresi:  %s\nKullanýcýnýn Kullanici Adi:  %s\nKullanicinin Sifresi:  %s\n Kullanicinin Yetký-Turu:  %s\n\n",  kullanýcý.ad, kullanýcý.soyad,kullanýcý.tc,kullanýcý.tel, kullanýcý.adres, kullanýcý.eposta, kullanýcý.kullanici_adi,kullanýcý.þifre,kullanýcý.yetki_türü);
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
			main(); //ana fonksiyona gönderilir				
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