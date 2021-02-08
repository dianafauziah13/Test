// TUGAS BESAR TIC TAC TOE
/*
Deskripsi Aplikasi
1.	Modul Utama  ^^
2.	Modul Papan (3x3)  ^^
3.	Modul menu  
4.	Modul cek Kondisi Menang (3 deret untuk 3x3)
5.	Modul Pergantian dan waktu (Timer, Printf X/O)
6.	Modul Aturan Game
enam bermasalah, delapan
sembilan bermasalah
fungsi threading
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

//deklarasi modul
void board ();
int menu ();
void aturan();
int cekmenang();

	char kolom[10]= {'0','1','2','3','4','5','6','7','8','9'};
	int lanjut;
	int pick,i;
	char Pmark, Kmark;
	
int main (){		//modul utama
	//deklarasi
	int mainmenu =1, player = 1;

	//algoritma
	
	/*Menu*/
	while (mainmenu==1){
		system ("cls");
	printf ("Permainan TICTACTOE\n");
	printf ("\n MAIN MENU \n\n");
	printf ("ketik 'hayu' untuk memulai permainan\n");
	printf ("ketik 'aturan' jika anda kebingungan untuk bermain\n");
	printf ("ketik 'udahan' jika anda takut bermain tictactoe\n");
	printf ("\nsilahkan ketik disini : ");
	mainmenu = menu();
	if (mainmenu == 0){
		printf ("inputan anda salah!!\n");
		printf ("silahkan input angka secara bebas untuk lanjut\n");
		scanf ("%d", &lanjut);
		mainmenu = 1;
		continue;
	}
	else if (mainmenu == 2){
		system ("cls");
		aturan();
		mainmenu = 1;
		continue;
	}
	else if (mainmenu == 3){
		system ("cls");
		printf ("Yah anda payahhh!!! wkwkwkwk");
		return 0;
	}
	
	/*MULAI PERMAINAN*/
	do {
		board ();

			Pmark ='X';
			Kmark ='O';
		
		//Logika player 
		if (player == 1){
		printf ("player silahkan masukkan kolom yang anda pilih: ");
		scanf ("%d", &pick);
			if (pick == 1 && kolom[1] == '1'){
				kolom [1] = Pmark;
					player++;
			}
			else if (pick == 2 && kolom[2]=='2'){
				kolom[2]= Pmark;
					player++;
			}
			else if (pick == 3 && kolom[3]=='3'){
				kolom[3]=Pmark;
					player++;
			}
			else if (pick == 4 && kolom[4]=='4'){
				kolom[4]=Pmark;
					player++;
			}
			else if (pick == 5 && kolom[5]=='5'){
				kolom[5]=Pmark;
					player++;
			}
			else if (pick == 6 && kolom[6]=='6'){
				kolom[6]=Pmark;
					player++;
			}
			else if (pick == 7 && kolom[7]=='7'){
				kolom[7]=Pmark;
					player++;
			}
			else if (pick == 8 && kolom[8]=='8'){
				kolom[8]=Pmark;
					player++;
			}
			else if (pick == 9 && kolom[9]=='9'){
				kolom[9]=Pmark;
					player++;
			}
			else {
				printf ("input kamu salah, silahkan coba lagi :");
				getch();
				player++;
			}
		
	    }
	    
	    //logika Komputer
		else if (player == 2) {   
	    	if (kolom [1] == Pmark && kolom [2] =='2' && kolom[3] == '3' && kolom[4] =='4'&& kolom[7] =='7' && kolom[9] =='9' && kolom[5] =='5' ){   
			kolom [5] = Kmark;
				player--;
			}
			else if (kolom[1] == Pmark && kolom [2] == Pmark && kolom [3] == '3' ){   
			kolom [3] = Kmark;
				player--;
			}	
			else if (kolom[1] == Pmark && kolom [3] == Pmark && kolom [2] == '2'){   
			kolom [2] = Kmark;
				player--;
			}
			else if (kolom[1] == Pmark && kolom [4] == Pmark && kolom [7] == '7' ){   
			kolom [7] = Kmark;
				player--;
			}
			else if (kolom[1] == Pmark && kolom [7] == Pmark && kolom [4] == '4'){   
			kolom [4] = Kmark;
				player--;
			}
			else if (kolom[1] == Pmark && kolom [5] == Pmark && kolom [9] == '9'){   
			kolom [9] = Kmark;
				player--;
			}
			else if (kolom[1] == Pmark && kolom [9] == Pmark && kolom [5] == '5'){
			kolom[5] = Kmark;
				player--; //selesai
			}
			else if (kolom[2] == Pmark && kolom [1] == '1' && kolom [3] == '3' && kolom[5]== '5' && kolom[8]== '8'){
			kolom[5] = Kmark;
				player--;
			}
			else if (kolom[2] == Pmark && kolom [1] == Pmark && kolom [3] == '3' ){
			kolom[3] = Kmark;
				player--;
			}
			else if (kolom[2] == Pmark && kolom [3] == Pmark && kolom [1] == '1'){	 
			kolom[1] = Kmark;
				player--;
			}
			else if (kolom[2] == Pmark && kolom [5] == Pmark && kolom [8] == '8'){	
			kolom[8] = Kmark;
				player--;
			}
			else if (kolom[2] == Pmark && kolom [8] == Pmark && kolom [5] == '5'){	
			kolom[5] = Kmark;
				player--;
			}	//selesai
			else if (kolom[3] == Pmark && kolom [1]== '1' && kolom[2] == '2' && kolom[6] == '6' && kolom[9] == '9' && kolom[7] == '7' && kolom[5] == '5'){	
			kolom[5] = Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [2]== Pmark && kolom[1] == '1'){	
			kolom[1] = Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [1]== Pmark && kolom[2] == '2'){	
			kolom[2] = Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [6]== Pmark && kolom[9] == '9'){
			kolom[9]= Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [9]== Pmark && kolom[6] == '6'){
			kolom[6]= Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [5]== Pmark && kolom[7] == '7'){
			kolom[7]= Kmark;
				player--;
			}
			else if (kolom[3] == Pmark && kolom [7]== Pmark && kolom[5] == '5'){   
			kolom[5] = Kmark;
				player--; //selesai
			}
			else if (kolom[4] == Pmark && kolom [1] == '1' && kolom [7] == '7' && kolom[6]== '6' && kolom[5]== '5'){
			kolom[5]= Kmark;
				player--;
			}
			else if (kolom[4] == Pmark && kolom [1] == Pmark && kolom[7]== '7'){
			kolom[7]= Kmark;
				player--;
			}
			else if (kolom[4] == Pmark && kolom [7] == Pmark && kolom[1]== '1'){
			kolom[1]= Kmark;
				player--;
			}
			else if (kolom[4] == Pmark && kolom [5] == Pmark && kolom[6]== '6'){
			kolom[6]= Kmark;
				player--;
			}
			else if (kolom[4] == Pmark && kolom [6] == Pmark && kolom[5]== '5'){
			kolom[5]= Kmark;
				player--; 	//selesai
			}
			else if (kolom[5] == Pmark && kolom [1]=='1' && kolom [2]=='2' && kolom [3]=='3' && kolom [4]=='4' && kolom [6]=='6' && kolom [7]=='7' && kolom [8]=='8' && kolom [9]=='9'){
			kolom[4]= Kmark;
				player--;
			}
			else if (kolom[5] == Pmark && kolom [1] == Pmark && kolom[9]== '9'){
			kolom[9]= Kmark;
				player--;
			}
			else if (kolom[5] == Pmark && kolom [9] == Pmark && kolom[1]== '1'){
			kolom[1] = Kmark;
				player--;
			}	
			else if (kolom[5] == Pmark && kolom [3] == Pmark && kolom[7]== '7'){
			kolom[7]= Kmark;
				player--;
			}	
			else if (kolom[5] == Pmark && kolom [7] == Pmark && kolom[3]== '3'){
			kolom[3]= Kmark;
				player--;
			}
			else if (kolom[5] == Pmark && kolom [2] == Pmark && kolom[8]== '8'){
			kolom[8]= Kmark;
				player--;
			}
			else if (kolom[5] == Pmark && kolom [8] == Pmark && kolom[2]== '2'){
			kolom[2]= Kmark;
				player--;
			}		
			else if (kolom[5] == Pmark && kolom [4] == Pmark && kolom[6]== '6'){
			kolom[6]= Kmark;
				player--;
			}	
			else if (kolom[5] == Pmark && kolom [6] == Pmark && kolom[4]== '4'){
			kolom[4]= Kmark;
				player--; 	//selesai
			}
			else if (kolom[6] == Pmark && kolom [3] == '3' && kolom [9] == '9' && kolom[4]== '4' && kolom[5]== '5'){
			kolom[5]= Kmark;
				player--;
			}
			else if (kolom[6] == Pmark && kolom [3] == Pmark && kolom[9]== '9'){
			kolom[9]= Kmark;
				player--;
			}
			else if (kolom[6] == Pmark && kolom [9] == Pmark && kolom[3]== '3'){
			kolom[3]= Kmark;
				player--;
			}
			else if (kolom[6] == Pmark && kolom [5] == Pmark && kolom[4]== '4'){
			kolom[4]= Kmark;
				player--;
			}
			else if (kolom[6] == Pmark && kolom [4] == Pmark && kolom[5]== '5'){
			kolom[5]= Kmark;
				player--; 	//selesai
			}
		 	if (kolom [7] == Pmark && kolom [4] =='4' && kolom[1] == '1' && kolom[8] =='8'&& kolom[9] =='9' && kolom[3] =='3' && kolom[5] =='5' ){   //win
			kolom [5] = Kmark;
				player--;
			}
			else if (kolom[7] == Pmark && kolom [4] == Pmark && kolom [1] == '1' ){   
			kolom [1] = Kmark;
				player--;
			}	
			else if (kolom[7] == Pmark && kolom [1] == Pmark && kolom [4] == '4'){   
			kolom [4] = Kmark;
				player--;
			}
			else if (kolom[7] == Pmark && kolom [8] == Pmark && kolom [9] == '9' ){   
			kolom [9] = Kmark;
				player--;
			}
			else if (kolom[7] == Pmark && kolom [5] == Pmark && kolom [3] == '3'){   
			kolom [3] = Kmark;
				player--;
			}
			else if (kolom[7] == Pmark && kolom [3] == Pmark && kolom [5] == '5'){   
			kolom [5] = Kmark;
				player--;
			}
			else if (kolom[7] == Pmark && kolom [9] == Pmark && kolom [8] == '8'){
			kolom[8] = Kmark;
				player--; //selesai
			}
			else if (kolom[8] == Pmark && kolom [7] == '7' && kolom [9] == '9' && kolom[5]== '5' && kolom[2]== '2'){
			kolom[5] = Kmark;
				player--;
			}
			else if (kolom[8] == Pmark && kolom [7] == Pmark && kolom [9] == '9' ){
			kolom[9] = Kmark;
				player--;
			}
			else if (kolom[8] == Pmark && kolom [9] == Pmark && kolom [7] == '7'){	 //win	
			kolom[7] = Kmark;
				player--;
			}
			else if (kolom[8] == Pmark && kolom [5] == Pmark && kolom [2] == '2'){	
			kolom[2] = Kmark;
				player--;
			}
			else if (kolom[8] == Pmark && kolom [2] == Pmark && kolom [5] == '5'){	
			kolom[5] = Kmark;
				player--;
			}	//selesai
			else if (kolom[9] == Pmark && kolom [6]== '6' && kolom[3] == '3' && kolom[8] == '8' && kolom[7] == '7' && kolom[1] == '1' && kolom[5] == '5'){	
			kolom[5] = Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [6]== Pmark && kolom[3] == '3'){	
			kolom[3] = Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [3]== Pmark && kolom[6] == '6'){	
			kolom[6] = Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [8]== Pmark && kolom[7] == '7'){
			kolom[7]= Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [7]== Pmark && kolom[8] == '8'){
			kolom[8]= Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [5]== Pmark && kolom[1] == '1'){
			kolom[1]= Kmark;
				player--;
			}
			else if (kolom[9] == Pmark && kolom [1]== Pmark && kolom[5] == '5'){   
			kolom[5] = Kmark;
				player--; //selesai
			}
		}  
		i = cekmenang();
		
	}while (i == -1);
	
	board();
	
	if (i==1){
		printf ("wahhhh anda menang, selamat anda mendapat doorprize!!");
		printf ("\n klik angka secara bebas untuk kembali ke menu ");
		scanf ("%d");
	
	}else {
		printf ("ANDA KALAAHHH!! AYOO AMENG DEUII");
		printf ("\n klik angka secara bebas untuk kembali ke menu ");
		scanf ("%d");
	
	}
	}
	return 0;
}

//Modul menu
int menu (){
	char menu[300];
	scanf("%s",&menu);
	if (strcmp(menu,"hayu")==0){
		return 1;
	}
	else if (strcmp(menu,"aturan")==0){
		return 2;
	}
	else if (strcmp(menu,"udahan")==0){
		return 3;
	}
	return 0;
}

//modul papan permainan
void board (){
	system ("cls");
	
	printf ("Player (user) : 'X'   VS     Komputer : 'O'\n");
	printf ("       |       |        \n");
	printf ("   %c   |   %c   |   %c     \n", kolom[1], kolom[2],kolom[3]);
	printf ("       |       |        \n");
	printf ("-----------------------\n");
	printf ("       |       |        \n");
	printf ("   %c   |   %c   |   %c     \n", kolom[4], kolom[5],kolom[6]);
	printf ("       |       |        \n");
	printf ("-----------------------\n");
	printf ("       |       |        \n");
	printf ("   %c   |   %c   |   %c     \n", kolom[7], kolom[8],kolom[9]);
	printf ("       |       |        \n");
}

//modul aturan
void aturan(){
	int b;
	system ("cls");
	printf ("1.  User hanya dapat memakai satu simbol yaitu 'X'. User tidak dapat mengganti simbol karena bersifat permanen. \n");
	printf ("2.  User memiliki tujuan memenangkan permainan dengan membuat garis lurus (vertikal, horizontal, diagonal) \n    serta mampu melebihi jumlah poin yang diperoleh komputer.\n");
	printf ("3.  Untuk memulai permainan, user diharuskan untuk mengklik menu 'Mulai'.\n");
	printf ("4.  User diberikan kesempatan bermain pertama dalam setiap putaran permainan\n");
	printf ("5.  Tidak ada batasan waktu untuk giliran pertama.\n");
	printf ("6.  User diberikan waktu 3 detik untuk meletakkan simbol dimulai dari giliran kedua bagi user. \n");
	printf ("7.  Jika tidak meletakkan simbol selama 3 detik, secara otomatis komputer akan mengisi kotak kosong \n    dalam papan permainan.\n");
	printf ("8.  Score awal adalah 0 dan otomatis akan bertambah ketika berhasil membuat satu garis lurus.\n");
	printf ("9.  Setiap satu garis lurus, akan memperoleh score sebanyak 10 poin\n");
	printf ("10. Permainan selesai ketika papan permainan telah terisi penuh.\n\n");
	printf("\nsilahkan input angka secara bebas untuk kembali ke manu \n");
	scanf ("%d",&b);
}

//modul cekmenang
int cekmenang(){

	if (kolom[1]== 'X' && kolom[1] == kolom [2] && kolom[2]==kolom[3]){
		return 1;
	}else if (kolom[4]== 'X' && kolom[4] == kolom [5] && kolom[5]==kolom[6] ){
		return 1;
	}else if (kolom[7]== 'X' && kolom[7] == kolom [8] && kolom[8]==kolom[9] ){
		return 1;
	}else if (kolom[1]== 'X' && kolom[1] == kolom [4] && kolom[4]==kolom[7] ){
		return 1;
	}else if (kolom[2]== 'X' && kolom[2] == kolom [5] && kolom[5]==kolom[8] ){
		return 1;
	}else if (kolom[3]== 'X' && kolom[3] == kolom [6] && kolom[6]==kolom[9] ){
		return 1;
	}else if (kolom[1]== 'X' && kolom[1] == kolom [5] && kolom[5]==kolom[9] ){
		return 1;
	}else if (kolom[3]== 'X' && kolom[3] == kolom [5] && kolom[5]==kolom[7] ){
		return 1;
	}else if ( kolom [1] != '1' && kolom [2]!= '2' && kolom [3] != '3' && kolom [4]!= '4' && kolom [5] != '5' && kolom [6]!= '6' && kolom [7] != '7' && kolom [8]!= '8' && kolom [9] != '9' ){
		return 0;
	}else if (kolom[4]== 'O' && kolom[4] == kolom [5] && kolom[5]==kolom[6] ){
		return 0;
	}else if (kolom[7]== 'O' && kolom[7] == kolom [8] && kolom[8]==kolom[9] ){
		return 0;
	}else if (kolom[1]== 'O' && kolom[1] == kolom [4] && kolom[4]==kolom[7] ){
		return 0;
	}else if (kolom[2]== 'O' && kolom[2] == kolom [5] && kolom[5]==kolom[8] ){
		return 0;
	}else if (kolom[3]== 'O' && kolom[3] == kolom [6] && kolom[6]==kolom[9] ){
		return 0;
	}else if (kolom[1]== 'O' && kolom[1] == kolom [5] && kolom[5]==kolom[9] ){
		return 0;
	}else if (kolom[3]== 'O' && kolom[3] == kolom [5] && kolom[5]==kolom[7] ){
		return 0;
	}else {
		return -1;
	}
}



