#include <iostream>
#include <Windows.h>
#include <string>
#include <cstring>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include "parametry.h"
#include <cstdlib>
#include <sstream>
#include <ctime>

 
using namespace std;


// DATA PLIKU
//------------------------------------------------------------------------------
const string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y.%m.%d  %X", &tstruct);

    return buf;
}


// GODZINA PLIKU
//------------------------------------------------------------------------------
const string currentDateTimeGodzina() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%X", &tstruct);

    return buf;
}


// DATA FOLDERU
//------------------------------------------------------------------------------
const string currentDateTimeFolder() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y.%m.%d", &tstruct);

    return buf;
}


// POPRAWNOŒÆ ZNAKÓW
//------------------------------------------------------------------------------
bool isRight()
{
    if (cin.rdstate() != 0)
    {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "Niepoprawny znak. Wpisz ponownie: ";
        return false;   
    }   
    
    return true;
    
}


// PAUZA: 1 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_1_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


// PAUZA: 1 + CZAS_PAUZY_2
//------------------------------------------------------------------------------
void pauza_1_2(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci )
{
    pauza++;
	Sleep (CZAS_PAUZY_2);
}

}


// PAUZA: 2 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_2_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci*2 )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


// PAUZA: 3 + CZAS_PAUZY_2
//------------------------------------------------------------------------------
void pauza_bompos() {
          
int pauza = 1;
int max_czynnosci = 1;

while( pauza <= max_czynnosci*3 )
{; 
	cout<<pauza<<" "; 
	pauza++;
    Sleep (CZAS_PAUZY_BOMPOS);	 	
} 

}


// PAUZA: 4 + CZAS_PAUZY_1
//------------------------------------------------------------------------------
void pauza_4_1(int max_czynnosci) {
                 
int pauza = 1;

while( pauza <= max_czynnosci*4 )
{
    pauza++; 
	Sleep (CZAS_PAUZY_1);
}

}


int main ()
{       
         
    
setlocale( LC_ALL, "Polish" ); 
   
string x;   
int max_czynnosci;   
int a;
int b;
int c;
int os_x;
int os_y;
int max_bompos = 1;
int licznik;

string linia_0;
string rodzaj_indeksu;  
string indeks_nowy;
string klasa_nowy;
string indeks_nazwa;
string indeks_nowa_nazwa;
string indeks_nowa_nazwa_klasy;
string linia_1;
string dlugosc;
string szerokosc;
string wysokosc;
string jednostka;
string objetosc;
string waga;
string linia_2;
string abs_1;
string abs_2;
string abs_3;
string abs_4;
string wymiar_na_gotowo;
string hierarchia_1;
string hierarchia_2;
string hierarchia_3;
string hierarchia_4;
string hierarchia_5;
string linia_3;
string nazwa_rysunku;
string nazwa_rodziny;
string dl_frez_fdolno;
string il_wiercen;
string dl_frez_dia;
string dl_frez_pila;
string dl_oprosto;
string il_oprosto;
string dl_okrzywo;
string il_okrzywo; 
string opracowane_pakowanie_1; 
string opracowane_pakowanie_1_napis = "OPRACOWANE_PAKOWANIE_1";

string linia_indeks;
string linia;

string jezyk;

string enter;


string indeks_nowy_auto_szukanie_sap;
string indeks_nowy_auto_szukanie_plik;


string data_start = currentDateTime();

string szukanie_indeksow_40 = "0002";
string szukanie_indeksow_50 = "0001";

int rozdzielczosc_ekranu;
string rozdzielczosc;
string skalowanie;

int height;
int width;

int height_virtual;
int width_virtual;

do {
          

//ROZPOZNAWANIE ROZDZIELCZOŒCI EKRANU
//==============================================================================          
do {

HDC hdc = GetDC(NULL); // get the desktop device context
HDC hDest = CreateCompatibleDC(hdc); // create a device context to use yourself

// get the height && width of the screen
height_virtual = GetSystemMetrics(SM_CYSCREEN); //(SM_CYVIRTUALSCREEN);
width_virtual = GetSystemMetrics(SM_CXSCREEN);  //(SM_CXVIRTUALSCREEN)

height = GetSystemMetrics(SM_CYSCREEN);
width = GetSystemMetrics(SM_CXSCREEN);


if (height_virtual == 864) {
 
skalowanie = "125%";     

height = height_virtual * 125 / 100;
width = width_virtual * 125 / 100;      
          
}

if (height_virtual == 1080) {
 
skalowanie = "100%";  

height = height_virtual * 100 / 100;
width = width_virtual * 125 / 100;          
          
}


} while (height_virtual == 0);
//==============================================================================  
//ROZPOZNAWANIE ROZDZIELCZOŒCI EKRANU


//SPRAWDZANIE PO£O¯ENIA OKNA SAP 
//==============================================================================  
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = PASEK_POLA_GLOWNEGO_OS_X;
os_y = PASEK_POLA_GLOWNEGO_OS_Y;


do {
          

    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
system( "cls" );

cout<<"TWORZENIE SPECYFIKACJI MATERIA£OWEJ: SPRAWDZANIE PO£O¯ENIA OKNA SAP"<<endl;
cout<<"==========================================================================="<<endl;   
cout << a <<" " << b << " " << c << endl;


Sleep (1000);
    

if (KOLOR_NIEBIESKI_2_RGB_2) {    
         
cout<<"==========================================================================="<<endl;
cout<<"PRAWID£OWO PO£O¯ENE OKNA SAP. POTWIERD (t): ";
cin>>enter;

}


}   while (KOLOR_NIEBIESKI_2_RGB_1); 
//==============================================================================
//SPRAWDZANIE PO£O¯ENIA OKNA SAP 


system( "cls" ); 


cout<<"ZMIANA SPECYFIKACJI MATERIA£OWEJ: "<<width<<"x"<<height<<" - "<<width_virtual<<"x"<<height_virtual<<" - "<<skalowanie<<endl;
cout<<"==========================================================================="<<endl;


// WPROWADZANIE DANYCH DO KONSOLI
//------------------------------------------------------------------------------

string tworzenie_pliku;
cout<<"1. Tworzenie pliku: PLIK.TXT (t/n): ";
cin>>tworzenie_pliku;

while (tworzenie_pliku != "t" && tworzenie_pliku != "n") {
cout<<"1. Niepoprawny znak. Wpisz ponownie: "; 
cin>>tworzenie_pliku;
} 


// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
if (tworzenie_pliku == "t") {
          

cout<<"==========================================================================="<<endl;
          
          
// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
fstream przechwyt_indeks; //obiekt typu fstream (uchwyt do pliku)
przechwyt_indeks.open("indeksy.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)       


fstream plik1; 

string plik1_caly = "plik.txt";
plik1.open(plik1_caly.c_str(), ios::out);


getline(przechwyt_indeks, linia_0);


licznik = 1;


do {


getline(przechwyt_indeks, linia);


if (linia != "") {


int dlugosc_wiersza = 0;
int xx;
int licznik_znakow;
int licznik_znakow_tab;
string znak;

for( xx = 0; xx < linia.length(); xx++ )
{

dlugosc_wiersza++;

}

//cout<<"DLUGOSC WIERSZA: "<<dlugosc_wiersza<<endl;


//ZMIANA ZMIENNEJ - RODZAJ MATERIA£U
//==============================================================================
znak = "a";

licznik_znakow = 0;

do {
          
znak = linia.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	");

 
//cout<<i<<endl;
  

string rodzaj_indeksu_poczatek = linia;
rodzaj_indeksu_poczatek.erase (licznik_znakow,dlugosc_wiersza);

rodzaj_indeksu = rodzaj_indeksu_poczatek;
  
//cout<<"RODZAJ MATERIALU: "<<rodzaj_indeksu<<endl;  
//==============================================================================
  

//ZMIANA ZMIENNEJ - INDEKS NOWY
//==============================================================================
string indeks_nowy_poczatek = linia;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nowy_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nowy_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  
string indeks_nowy_koniec = indeks_nowy_poczatek;
indeks_nowy_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nowy = indeks_nowy_koniec;
  
//cout<<"INDEKS NOWY: "<<indeks_nowy<<endl;  
//==============================================================================
  

//ZMIANA ZMIENNEJ - INDEKS NAZWA
//==============================================================================
string indeks_nazwa_poczatek = indeks_nowy_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nazwa_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nazwa_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_nazwa_koniec = indeks_nazwa_poczatek; 
indeks_nazwa_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nazwa = indeks_nazwa_koniec;
  
//cout<<"INDEKS NAZWA: "<<indeks_nazwa<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - INDEKS NOWA NAZWA
//==============================================================================
string indeks_nowa_nazwa_poczatek = indeks_nazwa_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nowa_nazwa_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nowa_nazwa_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_nowa_nazwa_koniec = indeks_nowa_nazwa_poczatek; 
indeks_nowa_nazwa_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nowa_nazwa = indeks_nowa_nazwa_koniec;
  
//cout<<"INDEKS NOWA NAZWA: "<<indeks_nowa_nazwa<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - INDEKS NOWA NAZWA KLASY
//==============================================================================
string indeks_nowa_nazwa_klasy_poczatek = indeks_nowa_nazwa_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

indeks_nowa_nazwa_klasy_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = indeks_nowa_nazwa_klasy_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string indeks_nowa_nazwa_klasy_koniec = indeks_nowa_nazwa_klasy_poczatek; 
indeks_nowa_nazwa_klasy_koniec.erase (licznik_znakow,dlugosc_wiersza);

indeks_nowa_nazwa_klasy = indeks_nowa_nazwa_klasy_koniec;
  
//cout<<"INDEKS NOWA NAZWA KLASY: "<<indeks_nowa_nazwa_klasy<<endl;  
//==============================================================================  
  
  
//ZMIANA ZMIENNEJ - DLUGOŒÆ
//==============================================================================
string dlugosc_poczatek = indeks_nowa_nazwa_klasy_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dlugosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dlugosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dlugosc_koniec = dlugosc_poczatek; 
dlugosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

dlugosc = dlugosc_koniec;
  
//cout<<"DLUGOSC: "<<dlugosc<<endl;  
//==============================================================================  
  
  
//ZMIANA ZMIENNEJ - SZEROKOŒÆ
//==============================================================================
string szerokosc_poczatek = dlugosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

szerokosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = szerokosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string szerokosc_koniec = szerokosc_poczatek; 
szerokosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

szerokosc = szerokosc_koniec;
  
//cout<<"SZEROKOSC: "<<szerokosc<<endl;  
//==============================================================================    
  
  
//ZMIANA ZMIENNEJ - WYSOKOŒÆ
//==============================================================================
string wysokosc_poczatek = szerokosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

wysokosc_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = wysokosc_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string wysokosc_koniec = wysokosc_poczatek; 
wysokosc_koniec.erase (licznik_znakow,dlugosc_wiersza);

wysokosc = wysokosc_koniec;
  
//cout<<"WYSOKOSC: "<<wysokosc<<endl;  
//==============================================================================    


//ZMIANA ZMIENNEJ - WAGA
//==============================================================================
string waga_poczatek = wysokosc_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

waga_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = waga_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string waga_koniec = waga_poczatek; 
waga_koniec.erase (licznik_znakow,dlugosc_wiersza);

waga = waga_koniec;
  
//cout<<"WAGA: "<<waga<<endl;  
//==============================================================================  
  

//ZMIANA ZMIENNEJ - ABS 1
//==============================================================================
string abs_1_poczatek = waga_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_1_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_1_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_1_koniec = abs_1_poczatek; 
abs_1_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_1 = abs_1_koniec;
  
//cout<<"ABS 1: "<<abs_1<<endl;  
//==============================================================================  


//ZMIANA ZMIENNEJ - ABS 2
//==============================================================================
string abs_2_poczatek = abs_1_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_2_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_2_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_2_koniec = abs_2_poczatek; 
abs_2_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_2 = abs_2_koniec;
  
//cout<<"ABS 2: "<<abs_2<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - ABS 3
//==============================================================================
string abs_3_poczatek = abs_2_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_3_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_3_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_3_koniec = abs_3_poczatek; 
abs_3_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_3 = abs_3_koniec;
  
//cout<<"ABS 3: "<<abs_3<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - ABS 4
//==============================================================================
string abs_4_poczatek = abs_3_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

abs_4_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = abs_4_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string abs_4_koniec = abs_4_poczatek; 
abs_4_koniec.erase (licznik_znakow,dlugosc_wiersza);

abs_4 = abs_4_koniec;
  
//cout<<"ABS 4: "<<abs_4<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - WYMIAR NA GOTOWO
//==============================================================================
string wymiar_na_gotowo_poczatek = abs_4_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

wymiar_na_gotowo_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = wymiar_na_gotowo_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string wymiar_na_gotowo_koniec = wymiar_na_gotowo_poczatek; 
wymiar_na_gotowo_koniec.erase (licznik_znakow,dlugosc_wiersza);

wymiar_na_gotowo = wymiar_na_gotowo_koniec;
  
//cout<<"NAZWA RYSUNKU: "<<wymiar_na_gotowo<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - HIERARCHIA 1
//==============================================================================
string hierarchia_1_poczatek = wymiar_na_gotowo_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

hierarchia_1_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = hierarchia_1_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string hierarchia_1_koniec = hierarchia_1_poczatek; 
hierarchia_1_koniec.erase (licznik_znakow,dlugosc_wiersza);

hierarchia_1 = hierarchia_1_koniec;
  
//cout<<"HIERARCHIA 1: "<<hierarchia_1<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - HIERARCHIA 2
//==============================================================================
string hierarchia_2_poczatek = hierarchia_1_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

hierarchia_2_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = hierarchia_2_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string hierarchia_2_koniec = hierarchia_2_poczatek; 
hierarchia_2_koniec.erase (licznik_znakow,dlugosc_wiersza);

hierarchia_2 = hierarchia_2_koniec;
  
//cout<<"HIERARCHIA 2: "<<hierarchia_2<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - HIERARCHIA 3
//==============================================================================
string hierarchia_3_poczatek = hierarchia_2_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

hierarchia_3_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = hierarchia_3_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string hierarchia_3_koniec = hierarchia_3_poczatek; 
hierarchia_3_koniec.erase (licznik_znakow,dlugosc_wiersza);

hierarchia_3 = hierarchia_3_koniec;
  
//cout<<"HIERARCHIA 3: "<<hierarchia_3<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - HIERARCHIA 4
//==============================================================================
string hierarchia_4_poczatek = hierarchia_3_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

hierarchia_4_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = hierarchia_4_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string hierarchia_4_koniec = hierarchia_4_poczatek; 
hierarchia_4_koniec.erase (licznik_znakow,dlugosc_wiersza);

hierarchia_4 = hierarchia_4_koniec;
  
//cout<<"HIERARCHIA 4: "<<hierarchia_4<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - HIERARCHIA 5
//==============================================================================
string hierarchia_5_poczatek = hierarchia_4_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

hierarchia_5_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = hierarchia_5_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string hierarchia_5_koniec = hierarchia_5_poczatek; 
hierarchia_5_koniec.erase (licznik_znakow,dlugosc_wiersza);

hierarchia_5 = hierarchia_5_koniec;
  
//cout<<"HIERARCHIA 5: "<<hierarchia_5<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - NAZWA RYSUNKU
//==============================================================================
string nazwa_rysunku_poczatek = hierarchia_5_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

nazwa_rysunku_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = nazwa_rysunku_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string nazwa_rysunku_koniec = nazwa_rysunku_poczatek; 
nazwa_rysunku_koniec.erase (licznik_znakow,dlugosc_wiersza);

nazwa_rysunku = nazwa_rysunku_koniec;
  
//cout<<"NAZWA RYSUNKU: "<<nazwa_rysunku<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - NAZWA RODZINY
//==============================================================================
string nazwa_rodziny_poczatek = nazwa_rysunku_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

nazwa_rodziny_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = nazwa_rodziny_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string nazwa_rodziny_koniec = nazwa_rodziny_poczatek; 
nazwa_rodziny_koniec.erase (licznik_znakow,dlugosc_wiersza);

nazwa_rodziny = nazwa_rodziny_koniec;
  
//cout<<"NAZWA RODZINY: "<<nazwa_rodziny<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - DL_FREZ_FDOLNO
//==============================================================================
string dl_frez_fdolno_poczatek = nazwa_rodziny_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_fdolno_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_fdolno_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_fdolno_koniec = dl_frez_fdolno_poczatek; 
dl_frez_fdolno_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_fdolno = dl_frez_fdolno_koniec;
  
//cout<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;  
//============================================================================== 


//ZMIANA ZMIENNEJ - IL_WIERCEN
//==============================================================================
string il_wiercen_poczatek = dl_frez_fdolno_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_wiercen_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = il_wiercen_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string il_wiercen_koniec = il_wiercen_poczatek; 
il_wiercen_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_wiercen = il_wiercen_koniec;
  
//cout<<"IL_WIERCEN: "<<il_wiercen<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - DL_FREZ_DIA
//==============================================================================
string dl_frez_dia_poczatek = il_wiercen_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_dia_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_dia_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_dia_koniec = dl_frez_dia_poczatek; 
dl_frez_dia_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_dia = dl_frez_dia_koniec;
  
//cout<<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - DL_FREZ_PILA
//==============================================================================
string dl_frez_pila_poczatek = dl_frez_dia_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_frez_pila_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_frez_pila_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_frez_pila_koniec = dl_frez_pila_poczatek; 
dl_frez_pila_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_frez_pila = dl_frez_pila_koniec;
  
//cout<<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - DL_OPROSTO
//==============================================================================
string dl_oprosto_poczatek = dl_frez_pila_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_oprosto_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_oprosto_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_oprosto_koniec = dl_oprosto_poczatek; 
dl_oprosto_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_oprosto = dl_oprosto_koniec;
  
//cout<<"DL_OPROSTO: "<<dl_oprosto<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - IL_OPROSTO
//==============================================================================
string il_oprosto_poczatek = dl_oprosto_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_oprosto_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = il_oprosto_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string il_oprosto_koniec = il_oprosto_poczatek; 
il_oprosto_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_oprosto = il_oprosto_koniec;
  
//cout<<"IL_OPROSTO: "<<il_oprosto<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - DL_OKRZYWO
//==============================================================================
string dl_okrzywo_poczatek = il_oprosto_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

dl_okrzywo_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = dl_okrzywo_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string dl_okrzywo_koniec = dl_okrzywo_poczatek; 
dl_okrzywo_koniec.erase (licznik_znakow,dlugosc_wiersza);

dl_okrzywo = dl_okrzywo_koniec;
  
//cout<<"DL_OKRZYWO: "<<dl_okrzywo<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - IL_OKRZYWO
//==============================================================================
string il_okrzywo_poczatek = dl_okrzywo_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

il_okrzywo_poczatek.erase (0,licznik_znakow_tab); 
 

znak = "a";

licznik_znakow = 0;

do {
          
znak = il_okrzywo_poczatek.at(licznik_znakow);

if (znak != "	") {
    
//cout << znak<<endl;
licznik_znakow++;

}

    
} while (znak != "	"); 
  

string il_okrzywo_koniec = il_okrzywo_poczatek; 
il_okrzywo_koniec.erase (licznik_znakow,dlugosc_wiersza);

il_okrzywo = il_okrzywo_koniec;
  
//cout<<"IL_OKRZYWO: "<<il_okrzywo<<endl;  
//==============================================================================


//ZMIANA ZMIENNEJ - OPRACOWANE_PAKOWANIE_1
//==============================================================================
string opracowane_pakowanie_1_poczatek = il_okrzywo_poczatek;  

licznik_znakow_tab = licznik_znakow +1;

opracowane_pakowanie_1_poczatek.erase (0,licznik_znakow_tab); 

string opracowane_pakowanie_1_koniec = opracowane_pakowanie_1_poczatek; 
//il_okrzywo_koniec.erase (licznik_znakow,dlugosc_wiersza);

opracowane_pakowanie_1 = opracowane_pakowanie_1_koniec;
  
//cout<<"OPRACOWANE_PAKOWANIE_1: "<<opracowane_pakowanie_1<<endl;  
//==============================================================================


plik1 <<"==========================================================================="<<endl;
plik1 <<"RODZAJ INDEKSU: "<<rodzaj_indeksu<<endl;
plik1 <<"INDEKS: "<<indeks_nowy<<endl;
plik1 <<"INDEKS NAZWA: "<<indeks_nazwa<<endl;
plik1 <<"INDEKS NOWA NAZWA: "<<indeks_nowa_nazwa<<endl;
plik1 <<"INDEKS NOWA NAZWA KLASY: "<<indeks_nowa_nazwa_klasy<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"DLUGOSC: "<<dlugosc<<endl;
plik1 <<"SZEROKOSC: "<<szerokosc<<endl;
plik1 <<"WYSOKOSC: "<<wysokosc<<endl;
plik1 <<"WAGA: "<<waga<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"ABS 1: "<<abs_1<<endl;
plik1 <<"ABS 2: "<<abs_2<<endl;
plik1 <<"ABS 3: "<<abs_3<<endl;
plik1 <<"ABS 4: "<<abs_4<<endl;
plik1 <<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"HIERARCHIA 1: "<<hierarchia_1<<endl;
plik1 <<"HIERARCHIA 2: "<<hierarchia_2<<endl;
plik1 <<"HIERARCHIA 3: "<<hierarchia_3<<endl;
plik1 <<"HIERARCHIA 4: "<<hierarchia_4<<endl;
plik1 <<"HIERARCHIA 5: "<<hierarchia_5<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"NAZWA RYSUNKU: "<<nazwa_rysunku<<endl;
plik1 <<"NAZWA RODZINY: "<<nazwa_rodziny<<endl;
plik1 <<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;
plik1 <<"IL_WIERCEN: "<<il_wiercen<<endl;
plik1 <<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;
plik1 <<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;
plik1 <<"DL_OPROSTO: "<<dl_oprosto<<endl;
plik1 <<"IL_OPROSTO: "<<il_oprosto<<endl;
plik1 <<"DL_OKRZYWO: "<<dl_okrzywo<<endl;
plik1 <<"IL_OKRZYWO: "<<il_okrzywo<<endl;
plik1 <<"---------------------------------------------------------------------------"<<endl;
plik1 <<"OPRACOWANE_PAKOWANIE_1: "<<opracowane_pakowanie_1<<endl;


cout << licznik++ << ". INDEKS: " << indeks_nowy << " - NOWA NAZWA: " << indeks_nowa_nazwa << endl;


}


}

while (linia != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) UWAGA: Pamiêtaj, ¿eby w pliku zostawiæ ostatni¹ linijkê pust¹
przechwyt_indeks.close(); //zamykamy plik


//plik1.close();


cout<<"==========================================================================="<<endl;


}


// OTWIERANIE PLIKU Z DANYMI
//------------------------------------------------------------------------------
    fstream przechwyt; //obiekt typu fstream (uchwyt do pliku)
    przechwyt.open("plik.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)   


//ZMIANA FOLDERU
//------------------------------------------------------------------------------
string folder = currentDateTimeFolder();


if (CreateDirectory(folder.c_str(), NULL))
{
    // Directory created
}
else if (ERROR_ALREADY_EXISTS == GetLastError())
{
    // Directory already exists
}
else
{
    // Failed for some other reason
}


cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"2. Czas przerwy miêdzy czynnoœciami (1 = 0,1 sek.- zalecane: 3 (1-9)): ";
//cin>>max_czynnosci;

do
{
    cin>>max_czynnosci;
} while (!isRight());


licznik--;


do {
                  
    
getline(przechwyt, linia_0);
getline(przechwyt, rodzaj_indeksu);
rodzaj_indeksu.erase (0,16);

    
if (rodzaj_indeksu == "10" || rodzaj_indeksu == "20" || rodzaj_indeksu == "30" || rodzaj_indeksu == "40"  || rodzaj_indeksu == "50") { 


getline(przechwyt, indeks_nowy);
indeks_nowy.erase (0,8);   


//ZMIANA ZNAKÓW Z - NA _ - KLASA NOWY
//------------------------------------------------------------------------------
string klasa_nowy_poczatek = indeks_nowy;
string klasa_nowy_srodek_1 = indeks_nowy;

string klasa_nowy_srodek_2 = indeks_nowy;

string klasa_nowy_koniec = indeks_nowy;

klasa_nowy_poczatek.erase (2,16);
klasa_nowy_srodek_1.erase (0,3);
string klasa_nowy_srodek_1_2 = klasa_nowy_srodek_1;
klasa_nowy_srodek_1_2.erase (4,11);

klasa_nowy_srodek_2.erase (0,8);
string klasa_nowy_srodek_2_2 = klasa_nowy_srodek_2;
klasa_nowy_srodek_2_2.erase (4,6);

klasa_nowy_koniec.erase (0,13);

klasa_nowy = klasa_nowy_poczatek + "_" + klasa_nowy_srodek_1_2 + "_" + klasa_nowy_srodek_2_2 + "_" + klasa_nowy_koniec;


//POBIERANIE DANYCH Z PLIKU: PLIK.TXT
//------------------------------------------------------------------------------
//getline(przechwyt, indeks_nowy);
cout<<"==========================================================================="<<endl;
cout<<"ILOŒÆ INDEKSÓW DO KOÑCA: "<<licznik<<endl;
cout<<"==========================================================================="<<endl;
cout<<"Rodzaj indeksu: "<< rodzaj_indeksu<<endl;
cout<<"Indeks - Nowy: "<< indeks_nowy<<endl;

//------------------------------------------------------------------------------

getline(przechwyt, indeks_nazwa);
indeks_nazwa.erase (0,14);
cout<<"Indeks - Nazwa: "<<indeks_nazwa<<endl;

//------------------------------------------------------------------------------

getline(przechwyt, indeks_nowa_nazwa);
indeks_nowa_nazwa.erase (0,19);
cout<<"Indeks - Nowa nazwa: "<<indeks_nowa_nazwa<<endl;

//------------------------------------------------------------------------------

getline(przechwyt, indeks_nowa_nazwa_klasy);
indeks_nowa_nazwa_klasy.erase (0,25);
cout<<"Indeks - Nowa nazwa klasy: "<<indeks_nowa_nazwa_klasy<<endl;

if (indeks_nowa_nazwa_klasy == "X") {

cout << "Klasa - Nowy: " << klasa_nowy << endl;   
    
}

//-----------------------------------------------------------------------------


// ZMIANA PLIKU: LOG_*.TXT
//------------------------------------------------------------------------------
fstream plik;

string plik_start_tekst = "log_";
string plik_koniec_tekst = ".txt";
string plik_caly = folder + "/" + plik_start_tekst + indeks_nowy + "_" + indeks_nazwa + plik_koniec_tekst;
plik.open(plik_caly.c_str(), ios::out);
  

plik<<"<<<POCZ¥TEK>>"<< endl; 
plik<<" "<< endl; 
plik<<"Data rozpoczêcia: "<<currentDateTime()<<endl;
plik<<"==========================================================================="<< endl;  
plik<<"Rodzaj indeksu: "<<rodzaj_indeksu<<endl; 
plik<<"Indeks - Nowy: "<<indeks_nowy<<endl; 
plik<<"Indeks - Nazwa: "<<indeks_nazwa<< endl;
plik<<"Indeks - Nowa nazwa: "<<indeks_nowa_nazwa<< endl;
plik<<"Indeks - Nowa nazwa klasy: "<<indeks_nowa_nazwa_klasy<< endl;

if (indeks_nowa_nazwa_klasy == "X") {
plik << "Klasa - Nowa nazwa klasy" << klasa_nowy;    
}


// ZMIANA PLIKU: WSZYSTKIE_INDEKSY.TXT
//------------------------------------------------------------------------------
ofstream wszystkie_indeksy;

string wszystkie_indeksy_tekst = "wszystkie_indeksy.txt";

string wszystkie_indeksy_caly = folder + "/" + wszystkie_indeksy_tekst;
wszystkie_indeksy.open(wszystkie_indeksy_caly.c_str(), ios::app);
  
  
wszystkie_indeksy <<indeks_nowy<<"	"<<indeks_nowa_nazwa<<endl; 


//------------------------------------------------------------------------------

getline(przechwyt, linia);
getline(przechwyt, dlugosc);
dlugosc.erase (0,9);
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"D³ugoœæ: "<<dlugosc<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"D³ugoœæ: "<<dlugosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, szerokosc);
szerokosc.erase (0,11);
cout<<"Szerokoœæ: "<<szerokosc<<endl;


plik<<"Szerokoœæ: "<<szerokosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, wysokosc);
wysokosc.erase (0,10);
cout<<"Wysokoœæ: "<<wysokosc<<endl;


plik<<"Wysokoœæ: "<<wysokosc<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, waga);
waga.erase (0,6);
cout<<"Waga: "<<waga<<endl;


plik<<"Waga: "<<waga<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia);
getline(przechwyt, abs_1);
abs_1.erase (0,7);
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"ABS 1: "<<abs_1<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"ABS 1: "<<abs_1<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_2);
abs_2.erase (0,7);
cout<<"ABS 2: "<<abs_2<<endl;


plik<<"ABS 2: "<<abs_2<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_3);
abs_3.erase (0,7);
cout<<"ABS 3: "<<abs_3<<endl;


plik<<"ABS 3: "<<abs_3<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, abs_4);
abs_4.erase (0,7);
cout<<"ABS 4: "<<abs_4<<endl;


plik<<"ABS 4: "<<abs_4<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, wymiar_na_gotowo);
wymiar_na_gotowo.erase (0,18);
cout<<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<<endl;


plik<<"WYMIAR NA GOTOWO: "<<wymiar_na_gotowo<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia);
getline(przechwyt, hierarchia_1);
hierarchia_1.erase (0,14);
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"HIERARCHIA 1: "<<hierarchia_1<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"HIERARCHIA 1: "<<hierarchia_1<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, hierarchia_2);
hierarchia_2.erase (0,14);
cout<<"HIERARCHIA 2: "<<hierarchia_2<<endl;


plik<<"HIERARCHIA 2: "<<hierarchia_2<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, hierarchia_3);
hierarchia_3.erase (0,14);
cout<<"HIERARCHIA 3: "<<hierarchia_3<<endl;


plik<<"HIERARCHIA 3: "<<hierarchia_3<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, hierarchia_4);
hierarchia_4.erase (0,14);
cout<<"HIERARCHIA 4: "<<hierarchia_4<<endl;


plik<<"HIERARCHIA 4: "<<hierarchia_4<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, hierarchia_5);
hierarchia_5.erase (0,14);
cout<<"HIERARCHIA 5: "<<hierarchia_5<<endl;


plik<<"HIERARCHIA 5: "<<hierarchia_5<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, linia);
getline(przechwyt, nazwa_rysunku);
nazwa_rysunku.erase (0,15);


if (rodzaj_indeksu == "40") {
 
string nazwa_rysunku_skrot = indeks_nowy;
nazwa_rysunku_skrot.erase (12,6);
nazwa_rysunku = nazwa_rysunku_skrot; 
    
}

cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"Nazwa rysunku: "<<nazwa_rysunku<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"Nazwa rysunku: "<<nazwa_rysunku<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, nazwa_rodziny);
nazwa_rodziny.erase (0,15);
cout<<"Nazwa rodziny: "<<nazwa_rodziny<<endl;


plik<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_fdolno);
dl_frez_fdolno.erase (0,16);
cout<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<<endl;


plik<<"DL_FREZ_FDOLNO: "<<dl_frez_fdolno<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_wiercen);
il_wiercen.erase (0,12);
cout<<"IL_WIERCEN: "<<il_wiercen<<endl;


plik<<"IL_WIERCEN: "<<il_wiercen<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_dia);
dl_frez_dia.erase (0,13);
cout<<"DL_FREZ_DIA: "<<dl_frez_dia<<endl;


plik<<"DL_FREZ_DIA: "<<dl_frez_dia<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_frez_pila);
dl_frez_pila.erase (0,14);
cout<<"DL_FREZ_PILA: "<<dl_frez_pila<<endl;


plik<<"DL_FREZ_PILA: "<<dl_frez_pila<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_oprosto);
dl_oprosto.erase (0,12);
cout<<"DL_OPROSTO: "<<dl_oprosto<<endl;


plik<<"DL_OPROSTO: "<<dl_oprosto<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_oprosto);
il_oprosto.erase (0,12);
cout<<"IL_OPROSTO: "<<il_oprosto<<endl;


plik<<"IL_OPROSTO: "<<il_oprosto<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, dl_okrzywo);
dl_okrzywo.erase (0,12);
cout<<"DL_OKRZYWO: "<<dl_okrzywo<<endl;


plik<<"DL_OKRZYWO: "<<dl_okrzywo<< endl;

//------------------------------------------------------------------------------

getline(przechwyt, il_okrzywo);
il_okrzywo.erase (0,12);
cout<<"IL_OKRZYWO: "<<il_okrzywo<<endl;


plik<<"IL_OKRZYWO: "<<il_okrzywo<< endl;

//------------------------------------------------------------------------------
getline(przechwyt, linia);

getline(przechwyt, opracowane_pakowanie_1);
opracowane_pakowanie_1.erase (0,24);
cout<<"---------------------------------------------------------------------------"<< endl;
cout<<"OPRACOWANE_PAKOWANIE_1: "<<opracowane_pakowanie_1<<endl;

plik<<"---------------------------------------------------------------------------"<< endl;
plik<<"OPRACOWANE_PAKOWANIE_1: "<<opracowane_pakowanie_1<< endl;

//------------------------------------------------------------------------------


const char* indeks_nowy_tekst = indeks_nowy.c_str();
const char* indeks_nazwa_tekst = indeks_nazwa.c_str();
const char* indeks_nowa_nazwa_tekst = indeks_nowa_nazwa.c_str();
const char* indeks_nowa_nazwa_klasy_tekst = indeks_nowa_nazwa_klasy.c_str();
const char* klasa_nowy_tekst = klasa_nowy.c_str();

const char* dlugosc_tekst = dlugosc.c_str();
const char* szerokosc_tekst = szerokosc.c_str();
const char* wysokosc_tekst = wysokosc.c_str();
const char* waga_tekst = waga.c_str();

const char* abs_1_tekst = abs_1.c_str();
const char* abs_2_tekst = abs_2.c_str();
const char* abs_3_tekst = abs_3.c_str();
const char* abs_4_tekst = abs_4.c_str();
const char* wymiar_na_gotowo_tekst = wymiar_na_gotowo.c_str(); 

const char* hierarchia_1_tekst = hierarchia_1.c_str();
const char* hierarchia_2_tekst = hierarchia_2.c_str();
const char* hierarchia_3_tekst = hierarchia_3.c_str();
const char* hierarchia_4_tekst = hierarchia_4.c_str();
const char* hierarchia_5_tekst = hierarchia_5.c_str();

const char* nazwa_rysunku_tekst = nazwa_rysunku.c_str();
const char* nazwa_rodziny_tekst = nazwa_rodziny.c_str(); 
const char* dl_frez_fdolno_tekst = dl_frez_fdolno.c_str();
const char* il_wiercen_tekst = il_wiercen.c_str();
const char* dl_frez_dia_tekst = dl_frez_dia.c_str();
const char* dl_frez_pila_tekst = dl_frez_pila.c_str(); 
const char* dl_oprosto_tekst = dl_oprosto.c_str();
const char* il_oprosto_tekst = il_oprosto.c_str();
const char* dl_okrzywo_tekst = dl_okrzywo.c_str();
const char* il_okrzywo_tekst = il_okrzywo.c_str();

const char* opracowane_pakowanie_1_tekst = opracowane_pakowanie_1.c_str();
const char* opracowane_pakowanie_1_napis_tekst = opracowane_pakowanie_1_napis.c_str();


//ZMIANA MATERIA£U
//==============================================================================

cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"1. Zmiana materia³u: ";


//KLIKANIE W PUSTE POLE SAP
//------------------------------------------------------------------------------
SetCursorPos( PUSTE_POLE_SAP_2 );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);    


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{     
          
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


} while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------


//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /


pauza_1_1(max_czynnosci);	


//WPISYWANIE - MM01 (ZMIANA MATERIA£U)
//------------------------------------------------------------------------------
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M
keybd_event(0x4D, 0, 0, 0); // M	       
keybd_event(0x4D, 0, KEYEVENTF_KEYUP, 0); // M  
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x32, 0, 0, 0); // 2	       
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2 
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER   
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowy_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowy_zmienna,indeks_nowy_tekst,strlen(indeks_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowy_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER         
 
 
pauza_1_1(max_czynnosci);


//ZMIANA MATERIA£U - WYBÓR WGL¥DÓW
//==============================================================================

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_WYBOR_WGLADOW_OS_X;
os_y = ZMIANA_MATERIALU_WYBOR_WGLADOW_OS_Y;
       
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);


    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
   

pauza_1_1(max_czynnosci); 


if (rodzaj_indeksu == "10") {
    
//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci); 
  
  
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 

/*
//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  


pauza_1_1(max_czynnosci); 


keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9  
*/


pauza_1_1(max_czynnosci);    
    
}


if (rodzaj_indeksu == "50") {
    
//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     


pauza_1_1(max_czynnosci);   


//WCISKANIE - F9 (ZAZNACZANIE PÓL)
//------------------------------------------------------------------------------    
keybd_event(0x78, 0, 0, 0); // F9	 
keybd_event(0x78, 0, KEYEVENTF_KEYUP, 0); // F9   


pauza_1_1(max_czynnosci);     
    
}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


//ZMIANA MATERIA£U - POZIOMY ORGANIZACYJNE
//==============================================================================

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_X;
os_y = ZMIANA_MATERIALU_POZIOMY_ORGANIZACYJNE_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


//WPISYWANIE - Y001
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x59, 0, 0, 0); // Y       
keybd_event(0x59, 0, KEYEVENTF_KEYUP, 0); // Y
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT  
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x30, 0, 0, 0); // 0       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x31, 0, 0, 0); // 1       
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1  


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - DELETE
//------------------------------------------------------------------------------
keybd_event(0x2E, 0, 0, 0); // DELETE	 
keybd_event(0x2E, 0, KEYEVENTF_KEYUP, 0); // DELETE


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);	


//ZMIANA MATERIA£U - DANE PODSTAWOWE 1	- POCZ¥TEK
//==============================================================================

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = ZMIANA_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


if (indeks_nowa_nazwa != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowa_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowa_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowa_nazwa_zmienna,indeks_nowa_nazwa_tekst,strlen(indeks_nowa_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowa_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


}
//==============================================================================
//ZMIANA MATERIA£U - DANE PODSTAWOWE 1 - KONIEC
	
	
// ZMIANA MATERIA£U - DANE DODATKOWE - POCZ¥TEK
//==============================================================================
if (szerokosc != "BRAK" && rodzaj_indeksu != "10" || dlugosc != "BRAK" && rodzaj_indeksu != "10" || wysokosc != "BRAK" && rodzaj_indeksu != "10" ||
    waga != "BRAK" && rodzaj_indeksu != "10" || rodzaj_indeksu == "40" && indeks_nowa_nazwa != "BRAK" ||
    rodzaj_indeksu == "50" && indeks_nowa_nazwa != "BRAK") {


//WCISKANIE - CTRL+F6 (PRZEJŒCIE DO: DANE DODATKOWE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x75, 0, 0, 0); // F6	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 


pauza_1_1(max_czynnosci);


if (rodzaj_indeksu == "40") {
 
//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 


pauza_1_1(max_czynnosci);


do {
    

//KLIKANIE
//------------------------------------------------------------------------------
SetCursorPos( ZMIANA_MATERIALU_DANE_DODATKOWE_USUWANIE_LINII );
mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP,0,0,0,0);


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jezyk = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


} while (jezyk != "PL"); 
  
}


if (rodzaj_indeksu == "50" && indeks_nowa_nazwa != "BRAK") {

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL
keybd_event(0x56, 0, 0, 0); // V	  
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

}


if (szerokosc != "BRAK" || dlugosc != "BRAK" || wysokosc != "BRAK" || waga != "BRAK") {

pauza_1_1(max_czynnosci);


//WCISKANIE - F6 (PRZEJŒCIE DO: JEDNOSTKI MIARY)
//------------------------------------------------------------------------------
keybd_event(0x75, 0, 0, 0); // F6	    
keybd_event(0x75, 0, KEYEVENTF_KEYUP, 0); // F6 
	
	
pauza_1_1(max_czynnosci);
	

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB      
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

pauza_1_1(max_czynnosci);


if (dlugosc != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dlugosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dlugosc_tekst) + 1); //text size + \0 character
    memcpy(dlugosc_zmienna,dlugosc_tekst,strlen(dlugosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dlugosc_zmienna);
        CloseClipboard();
    }
}




pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);	


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (szerokosc != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL szerokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(szerokosc_tekst) + 1); //text size + \0 character
    memcpy(szerokosc_zmienna,szerokosc_tekst,strlen(szerokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,szerokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);

//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci); 


if (wysokosc != "BRAK") {
 

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wysokosc_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wysokosc_tekst) + 1); //text size + \0 character
    memcpy(wysokosc_zmienna,wysokosc_tekst,strlen(wysokosc_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wysokosc_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            jednostka = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - BACKSPACE
//------------------------------------------------------------------------------
keybd_event(0x08, 0, 0, 0); // BACKSPACE            
keybd_event(0x08, 0, KEYEVENTF_KEYUP, 0); // BACKSPACE 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A  


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+C (KOPIOWANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x43, 0, 0, 0); // C	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 


pauza_1_1(max_czynnosci);


//KOPIOWANIE ZE SCHOWKA DO ZMIENNEJ
//------------------------------------------------------------------------------
#ifdef _WIN32
    if(OpenClipboard(NULL))
    {
        HANDLE data = GetClipboardData(CF_TEXT);
        if(data)
        {
            objetosc = reinterpret_cast<char *>(GlobalLock(data));
            GlobalUnlock(data);
        }
        CloseClipboard();
    }
#endif


pauza_1_1(max_czynnosci);


if (jednostka == objetosc) {
          
//WPISYWANIE - 0,001
//------------------------------------------------------------------------------    
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0xBC, 0, 0, 0); // ,
keybd_event(0xBC, 0, KEYEVENTF_KEYUP, 0); // ,  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x30, 0, 0, 0); // 0
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0  
keybd_event(0x31, 0, 0, 0); // 1
keybd_event(0x31, 0, KEYEVENTF_KEYUP, 0); // 1 
   

pauza_1_1(max_czynnosci);
           
}


if (rodzaj_indeksu != "50") {

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (waga != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	
	
pauza_1_1(max_czynnosci);


if (waga != "BRAK") {


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL waga_zmienna = GlobalAlloc(GMEM_FIXED,strlen(waga_tekst) + 1); //text size + \0 character
    memcpy(waga_zmienna,waga_tekst,strlen(waga_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,waga_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);


}

}	

}

	
//WCISKANIE - CTRL+F3 (PRZEJŒCIE DO: DANE G£ÓWNE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x72, 0, 0, 0); // F3	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_DANE_PODSTAWOWE_1_OS_X;
os_y = ZMIANA_MATERIALU_DANE_PODSTAWOWE_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);

}
//==============================================================================
// ZMIANA MATERIA£U - DANE DODATKOWE - KONIEC


// ZMIANA MATERIA£U - HIERARCHIA PRODUKTU - POCZ¥TEK
//==============================================================================

if (rodzaj_indeksu == "50") {
    
if (hierarchia_1 != "BRAK" || hierarchia_2 != "BRAK" || hierarchia_3 != "BRAK" || hierarchia_4 != "BRAK" || hierarchia_5 != "BRAK") {

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_HIERARCHIA_PRODUKTU_OS_X;
os_y = ZMIANA_MATERIALU_HIERARCHIA_PRODUKTU_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_6_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


} while (KOLOR_SZARY_6_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


if (hierarchia_1 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL hierarchia_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(hierarchia_1_tekst) + 1); //text size + \0 character
    memcpy(hierarchia_1_zmienna,hierarchia_1_tekst,strlen(hierarchia_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,hierarchia_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


if (hierarchia_2 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL hierarchia_2_zmienna = GlobalAlloc(GMEM_FIXED,strlen(hierarchia_2_tekst) + 1); //text size + \0 character
    memcpy(hierarchia_2_zmienna,hierarchia_2_tekst,strlen(hierarchia_2_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,hierarchia_2_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


if (hierarchia_3 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL hierarchia_3_zmienna = GlobalAlloc(GMEM_FIXED,strlen(hierarchia_3_tekst) + 1); //text size + \0 character
    memcpy(hierarchia_3_zmienna,hierarchia_3_tekst,strlen(hierarchia_3_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,hierarchia_3_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


if (hierarchia_4 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL hierarchia_4_zmienna = GlobalAlloc(GMEM_FIXED,strlen(hierarchia_4_tekst) + 1); //text size + \0 character
    memcpy(hierarchia_4_zmienna,hierarchia_4_tekst,strlen(hierarchia_4_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,hierarchia_4_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


if (hierarchia_5 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL hierarchia_5_zmienna = GlobalAlloc(GMEM_FIXED,strlen(hierarchia_5_tekst) + 1); //text size + \0 character
    memcpy(hierarchia_5_zmienna,hierarchia_5_tekst,strlen(hierarchia_5_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,hierarchia_5_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}

}
//==============================================================================
// ZMIANA MATERIA£U - HIERARCHIA PRODUKTU - KONIEC


// ZMIANA MATERIA£U - DANE DODATKOWE PRODUKCJI 1 - POCZ¥TEK
//==============================================================================
if (rodzaj_indeksu == "20" || rodzaj_indeksu == "30") {


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_DANE_DODATKOWE_PROD_1_OS_X;
os_y = ZMIANA_MATERIALU_DANE_DODATKOWE_PROD_1_OS_Y;	
      
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


if (abs_1 != "BRAK" || abs_2 != "BRAK" || abs_3 != "BRAK" || abs_4 != "BRAK" || wymiar_na_gotowo != "BRAK") {


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	
	

if (abs_1 != "BRAK") {
    
//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------	
{
    HGLOBAL abs_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_1_tekst) + 1); //text size + \0 character
    memcpy(abs_1_zmienna,abs_1_tekst,strlen(abs_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);
	

if (abs_2 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_2_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_2_tekst) + 1); //text size + \0 character
    memcpy(abs_2_zmienna,abs_2_tekst,strlen(abs_2_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_2_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


if (abs_3 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_3_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_3_tekst) + 1); //text size + \0 character
    memcpy(abs_3_zmienna,abs_3_tekst,strlen(abs_3_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_3_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	
	
pauza_1_1(max_czynnosci);	


if (abs_4 != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL abs_4_zmienna = GlobalAlloc(GMEM_FIXED,strlen(abs_4_tekst) + 1); //text size + \0 character
    memcpy(abs_4_zmienna,abs_4_tekst,strlen(abs_4_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,abs_4_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

}

	
//------------------------------------------------------------------------------	
//ZMIANA MATERIA£U - DANE PODTSAWOWE 2 - KONIEC


pauza_1_1(max_czynnosci);


if (wymiar_na_gotowo == "BRAK") {
wymiar_na_gotowo = " ";
}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL wymiar_na_gotowo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(wymiar_na_gotowo_tekst) + 1); //text size + \0 character
    memcpy(wymiar_na_gotowo_zmienna,wymiar_na_gotowo_tekst,strlen(wymiar_na_gotowo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,wymiar_na_gotowo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);

}


//WCISKANIE - ENTER
//------------------------------------------------------------------------------    
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 


pauza_1_1(max_czynnosci);


}
//==============================================================================
// ZMIANA MATERIA£U - DANE DODATKOWE PRODUKCJI 1 - KONIEC


//ZMIANA MATERIA£U - KLASYFIKACJA - POCZ¥TEK
//==============================================================================

if (nazwa_rysunku != "BRAK" || nazwa_rodziny != "BRAK" || dl_frez_fdolno != "BRAK" || il_wiercen != "BRAK" || dl_frez_dia != "BRAK" || 
    dl_frez_pila != "BRAK" || dl_oprosto != "BRAK" || il_oprosto != "BRAK" || dl_okrzywo != "BRAK" || il_okrzywo != "BRAK"  || opracowane_pakowanie_1 != "BRAK" ) {

if (rodzaj_indeksu == "10") {


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_KLASYFIKACJA_OS_X;
os_y = ZMIANA_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


} while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	


pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


pauza_1_1(max_czynnosci);


}

//==============================================================================

if (rodzaj_indeksu == "20" || rodzaj_indeksu == "30" || rodzaj_indeksu == "40" || rodzaj_indeksu == "50") {

//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_KLASYFIKACJA_OS_X;
os_y = ZMIANA_MATERIALU_KLASYFIKACJA_OS_Y;
       
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
	
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_SZARY_4_RGB_1) {    

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


} while (KOLOR_SZARY_4_RGB_1); 	
//------------------------------------------------------------------------------	

    
pauza_1_1(max_czynnosci);


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN
	
	
pauza_1_1(max_czynnosci);


if (rodzaj_indeksu == "50") {

//WCISKANIE - LEWY SHIFT+STRZ£KA W GÓRÊ
//------------------------------------------------------------------------------
keybd_event(0xA0, 0, 0, 0); // LEWY SHIFT 
keybd_event(0x26, 0, 0, 0); // STRZ£KA W GÓRÊ           
keybd_event(0x26, 0, KEYEVENTF_KEYUP, 0); // STRZ£KA W GÓRÊ
keybd_event(0xA0, 0, KEYEVENTF_KEYUP, 0); // LEWY SHIFT 

}


pauza_1_1(max_czynnosci);


//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£     
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£



if (rodzaj_indeksu != "50") {
    
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£

}






pauza_1_1(max_czynnosci);


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB
	

//ZMIANA MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - POCZ¥TEK
//------------------------------------------------------------------------------
if (nazwa_rysunku != "BRAK") {


{
    HGLOBAL nazwa_rysunku_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rysunku_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rysunku_zmienna,nazwa_rysunku_tekst,strlen(nazwa_rysunku_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rysunku_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


// Wklejam nowy indeks MATERIA£U
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  

}
//------------------------------------------------------------------------------
//ZMIANA MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - PGDN - PAGE DOWN
//------------------------------------------------------------------------------
keybd_event(0x22, 0, 0, 0); // PAGE DOWN	
keybd_event(0x22, 0, KEYEVENTF_KEYUP, 0); // PAGE DOWN


pauza_1_1(max_czynnosci);


//ZMIANA MATERIA£U - KLASYFIKACJA - NAZWA RODZINY - POCZ¥TEK
//------------------------------------------------------------------------------
if (rodzaj_indeksu == "50" && nazwa_rodziny != "BRAK") {

{
    HGLOBAL nazwa_rodziny_zmienna = GlobalAlloc(GMEM_FIXED,strlen(nazwa_rodziny_tekst) + 1); //text size + \0 character
    memcpy(nazwa_rodziny_zmienna,nazwa_rodziny_tekst,strlen(nazwa_rodziny_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,nazwa_rodziny_zmienna);
        CloseClipboard();
    }
}

pauza_1_1(max_czynnosci);

	// Wklejam nowy indeks MATERIA£U
    keybd_event(0x11, 0, 0, 0); // CRTL
	keybd_event(0x56, 0, 0, 0); // V	 
	keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
	keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	


    keybd_event(0x0D, 0, 0, 0); // ENTER
    keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);

}



if (rodzaj_indeksu == "50" && opracowane_pakowanie_1 != "BRAK") {
    

//WCISKANIE - CTRL+TAB
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_KLASYFIKACJA_USTAWIENIE_POZYCJI_OS_X;
os_y = ZMIANA_MATERIALU_KLASYFIKACJA_USTAWIENIE_POZYCJI_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL opracowane_pakowanie_1_napis_zmienna = GlobalAlloc(GMEM_FIXED,strlen(opracowane_pakowanie_1_napis_tekst) + 1); //text size + \0 character
    memcpy(opracowane_pakowanie_1_napis_zmienna,opracowane_pakowanie_1_napis_tekst,strlen(opracowane_pakowanie_1_napis_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,opracowane_pakowanie_1_napis_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  


pauza_1_1(max_czynnosci);


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_KLASYFIKACJA_USTAWIENIE_POZYCJI_OS_X;
os_y = ZMIANA_MATERIALU_KLASYFIKACJA_USTAWIENIE_POZYCJI_OS_Y;
         
         
do
{           
    HDC hdc = GetDC(NULL);
    DWORD color = GetPixel(hdc, os_x, os_y);
    unsigned int rr = GetRValue(color);
    unsigned int gg = GetGValue(color);
    unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_2); 	
//------------------------------------------------------------------------------


pauza_1_1(max_czynnosci);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL opracowane_pakowanie_1_zmienna = GlobalAlloc(GMEM_FIXED,strlen(opracowane_pakowanie_1_tekst) + 1); //text size + \0 character
    memcpy(opracowane_pakowanie_1_zmienna,opracowane_pakowanie_1_tekst,strlen(opracowane_pakowanie_1_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,opracowane_pakowanie_1_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

}



//------------------------------------------------------------------------------
//ZMIANA MATERIA£U - KLASYFIKACJA - NAZWA RYSUNKU - KONIEC


//ZMIANA MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - POCZ¥TEK
//------------------------------------------------------------------------------
if (rodzaj_indeksu != "50") {

if (dl_frez_fdolno != "BRAK" || il_wiercen != "BRAK" || dl_frez_dia != "BRAK" || dl_frez_pila != "BRAK" || dl_oprosto != "BRAK"
    || il_oprosto != "BRAK" || dl_okrzywo != "BRAK" || il_okrzywo != "BRAK") {
        

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


if (dl_frez_fdolno != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_fdolno_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_fdolno_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_fdolno_zmienna,dl_frez_fdolno_tekst,strlen(dl_frez_fdolno_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_fdolno_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	

if (il_wiercen != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_wiercen_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_wiercen_tekst) + 1); //text size + \0 character
    memcpy(il_wiercen_zmienna,il_wiercen_tekst,strlen(il_wiercen_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_wiercen_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

}

//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	

if (dl_frez_dia != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_dia_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_dia_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_dia_zmienna,dl_frez_dia_tekst,strlen(dl_frez_dia_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_dia_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


if (dl_frez_pila != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_frez_pila_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_frez_pila_tekst) + 1); //text size + \0 character
    memcpy(dl_frez_pila_zmienna,dl_frez_pila_tekst,strlen(dl_frez_pila_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_frez_pila_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	

if (dl_oprosto != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_oprosto_tekst) + 1); //text size + \0 character
    memcpy(dl_oprosto_zmienna,dl_oprosto_tekst,strlen(dl_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);	

}


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB  
	

if (il_oprosto != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_oprosto_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_oprosto_tekst) + 1); //text size + \0 character
    memcpy(il_oprosto_zmienna,il_oprosto_tekst,strlen(il_oprosto_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_oprosto_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 
	

if (dl_okrzywo != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL dl_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(dl_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(dl_okrzywo_zmienna,dl_okrzywo_tekst,strlen(dl_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,dl_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

	
pauza_1_1(max_czynnosci);

}	


//WCISKANIE - TABULACJA
//------------------------------------------------------------------------------
keybd_event(0x09, 0, 0, 0); // TAB	 
keybd_event(0x09, 0, KEYEVENTF_KEYUP, 0); // TAB 


if (il_okrzywo != "BRAK") {

//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL il_okrzywo_zmienna = GlobalAlloc(GMEM_FIXED,strlen(il_okrzywo_tekst) + 1); //text size + \0 character
    memcpy(il_okrzywo_zmienna,il_okrzywo_tekst,strlen(il_okrzywo_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,il_okrzywo_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0x56, 0, 0, 0); // V	 
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V 

}

}

}
//------------------------------------------------------------------------------
//ZMIANA MATERIA£U - KLASYFIKACJA - DODATKOWE POLA - KONIEC	
	
pauza_1_1(max_czynnosci);	


//WCISKANIE - F8 (PRZEJŒCIE DO: MRP1)
//------------------------------------------------------------------------------
keybd_event(0x77, 0, 0, 0); // F8	 
keybd_event(0x77, 0, KEYEVENTF_KEYUP, 0); // F8 


pauza_1_1(max_czynnosci);


}

}
//==============================================================================
//ZMIANA MATERIA£U - KLASYFIKACJA - KONIEC


/*
//ZMIANA MATERIA£U - MRP1 - POCZ¥TEK
//==============================================================================

if (rodzaj_indeksu == "20" || rodzaj_indeksu == "30") {

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_MRP1_OS_X;
os_y = ZMIANA_MATERIALU_MRP1_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------

}
//==============================================================================
//ZMIANA MATERIA£U - MRP1 - KONIEC


//ZMIANA MATERIA£U - MRP2 - POCZ¥TEK
//==============================================================================
if (rodzaj_indeksu == "10") {

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_MRP2_OS_X;
os_y = ZMIANA_MATERIALU_MRP2_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------

}
//==============================================================================
//ZMIANA MATERIA£U - MRP2 - KONIEC


//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZMIANA_MATERIALU_ZAPISANIE_OS_X;
os_y = ZMIANA_MATERIALU_ZAPISANIE_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;

if  (KOLOR_NIEBIESKI_1_RGB_1) { 

//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER 
   
    
pauza_1_1(max_czynnosci);

}


} while (KOLOR_NIEBIESKI_1_RGB_1); 	
//------------------------------------------------------------------------------
*/

//Sleep(max_czynnosci*100000000);


//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	    
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S   





//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
    
    a = rr;
    b = gg;
    c = bb;
   
    
pauza_1_1(max_czynnosci);


} while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------	
	

//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3
    

cout<<"TAK"<<endl;

plik<<"---------------------------------------------------------------------------"<<endl;
plik<< "1. ZMIANA materia³u: TAK"<<endl;  
//==============================================================================
//ZMIANA MATERIA£U - KONIEC


//ZMIANA NAZWY KLASY - POCZ¥TEK
//==============================================================================
if (indeks_nowa_nazwa_klasy == "X") {
    
cout<<"3. Zmiana nazwy klasy: ";
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
 
    
pauza_1_1(max_czynnosci);


} while (KOLOR_SZARY_2_RGB_1); 	
//------------------------------------------------------------------------------

  
//KLIKANIE W OKNO POLECEÑ SAP
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CRTL
keybd_event(0xBF, 0, 0, 0); // /            
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CRTL  
keybd_event(0xBF, 0, KEYEVENTF_KEYUP, 0); // /
     
    
pauza_1_1(max_czynnosci);    


//WPISYWANIE - CL01
//------------------------------------------------------------------------------
keybd_event(0x43, 0, 0, 0); // C	       
keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0); // C 
keybd_event(0x4C, 0, 0, 0); // L	       
keybd_event(0x4C, 0, KEYEVENTF_KEYUP, 0); // L 
keybd_event(0x30, 0, 0, 0); // 0	       
keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
keybd_event(0x32, 0, 0, 0); // 2	       
keybd_event(0x32, 0, KEYEVENTF_KEYUP, 0); // 2
    
    
pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------ 
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER  
    
    
//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = STRZALKA_POLA_GLOWNEGO_OS_X;
os_y = STRZALKA_POLA_GLOWNEGO_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);
   
    a = rr;
    b = gg;
    c = bb;

    
pauza_1_1(max_czynnosci);


} while (KOLOR_SZARY_2_RGB_2); 	
//------------------------------------------------------------------------------


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL klasa_nowy_zmienna = GlobalAlloc(GMEM_FIXED,strlen(klasa_nowy_tekst) + 1); //text size + \0 character
    memcpy(klasa_nowy_zmienna,klasa_nowy_tekst,strlen(klasa_nowy_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,klasa_nowy_zmienna);
        CloseClipboard();
    }
}

	
pauza_1_1(max_czynnosci);

	
//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V   

 
pauza_1_1(max_czynnosci);





//WCISKANIE - STRZA£KA W DÓ£
//------------------------------------------------------------------------------
keybd_event(0x28, 0, 0, 0); // STRZA£KA W DÓ£           
keybd_event(0x28, 0, KEYEVENTF_KEYUP, 0); // STRZA£KA W DÓ£ 
	
	
pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+A (ZAZNACZANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL	     
keybd_event(0x41, 0, 0, 0); // A	   
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL  
keybd_event(0x41, 0, KEYEVENTF_KEYUP, 0); // A    
	
	
pauza_1_1(max_czynnosci);	


//WPISYWANIE - 300
//------------------------------------------------------------------------------
	keybd_event(0x33, 0, 0, 0); // 3	 
	keybd_event(0x33, 0, KEYEVENTF_KEYUP, 0); // 3  
	keybd_event(0x30, 0, 0, 0); // 0	 
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 
	keybd_event(0x30, 0, 0, 0); // 0	 
	keybd_event(0x30, 0, KEYEVENTF_KEYUP, 0); // 0 


pauza_1_1(max_czynnosci);


//WCISKANIE - ENTER
//------------------------------------------------------------------------------
keybd_event(0x0D, 0, 0, 0); // ENTER
keybd_event(0x0D, 0, KEYEVENTF_KEYUP, 0); // ENTER     
 
 
pauza_1_1(max_czynnosci*2);


//POBIERANIE ZMIENNEJ DO SCHOWKA
//------------------------------------------------------------------------------
{
    HGLOBAL indeks_nowa_nazwa_zmienna = GlobalAlloc(GMEM_FIXED,strlen(indeks_nowa_nazwa_tekst) + 1); //text size + \0 character
    memcpy(indeks_nowa_nazwa_zmienna,indeks_nowa_nazwa_tekst,strlen(indeks_nowa_nazwa_tekst));  //text size + \0 character
    if(OpenClipboard(NULL))
    {
        EmptyClipboard();
        SetClipboardData(CF_TEXT,indeks_nowa_nazwa_zmienna);
        CloseClipboard();
    }
}


pauza_1_1(max_czynnosci);


//WCISKANIE - CTRL+V (WKLEJANIE)
//------------------------------------------------------------------------------
keybd_event(0x11, 0, 0, 0); // CTRL 
keybd_event(0x56, 0, 0, 0); // V           
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL   
keybd_event(0x56, 0, KEYEVENTF_KEYUP, 0); // V  

	
pauza_1_1(max_czynnosci);

	
//WCISKANIE - CTRL+S (ZAPISANIE)
//------------------------------------------------------------------------------

keybd_event(0x11, 0, 0, 0); // CTRL	  
keybd_event(0x53, 0, 0, 0); // S	    
keybd_event(0x11, 0, KEYEVENTF_KEYUP, 0); // CTRL    
keybd_event(0x53, 0, KEYEVENTF_KEYUP, 0); // S   
	

pauza_1_1(max_czynnosci);	
	

//ROZPOZNANIE KOLORU
//------------------------------------------------------------------------------
os_x = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_X;
os_y = ZIELONY_ZNACZEK_POLA_GLOWNEGO_OS_Y;
   
         
do
{           
	HDC hdc = GetDC(NULL);
	DWORD color = GetPixel(hdc, os_x, os_y);
	unsigned int rr = GetRValue(color);
	unsigned int gg = GetGValue(color);
	unsigned int bb = GetBValue(color);

    a = rr;
    b = gg;
    c = bb;
    
    
pauza_1_1(max_czynnosci);


} while (KOLOR_ZIELONY_1_RGB_1); 	
//------------------------------------------------------------------------------


//WCISKANIE - F3 (POWRACANIE)
//------------------------------------------------------------------------------
keybd_event(0x72, 0, 0, 0); // F3
keybd_event(0x72, 0, KEYEVENTF_KEYUP, 0); // F3	


cout<<"TAK"<<endl;

plik<<"3. Zmiana nazwy klasy: TAK"<<endl;

}
//==============================================================================
//ZMIANA NAZWY KLASY - KONIEC


plik<<"==========================================================================="<<endl;
//------------------------------------------------------------------------------
//ZMIANA MARSZRUTY TECHNOLOGICZNEJ

	
string data_koniec = currentDateTime();	

plik<< "Data zakoñczenia: "<< currentDateTime() <<endl;   
plik<< " " <<endl;
plik<< "<<<KONIEC>>>";
plik.close();


licznik--;


}

else {
    
cout<<"---------------------------------------------------------------------------"<<endl;
cout<<"BRAK DANYCH"<<endl;   
cout<<"---------------------------------------------------------------------------"<<endl; 
  
}


}


while (rodzaj_indeksu != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) UWAGA: Pamiêtaj, ¿eby w pliku zostawiæ ostatni¹ linijkê pust¹
przechwyt.close(); //zamykamy plik
	
	
cout<<" "<<endl;
cout<<"Powtórzyæ program (t/n): ";
cin>>x;


while (x != "t" && x != "n") {
cout<<"Niepoprawny znak. Wpisz ponownie: "; 
cin>>x;
} 


}
 
       
while( x == "t" );
    

if( x != "t" )
{
        
Sleep (CZAS_PAUZY_3);
cout<<" "<<endl;
cout<<"Koniec programu"<<endl;
       
}


fstream wszystkie_indeksy;
wszystkie_indeksy.close();


Sleep(100000);	
 
 
cin.get();
return 0;


}
