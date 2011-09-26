
// vreau sa pun o optiune cu chestii de baza pt c++
	
// v 2.0
// sistemul de teste sa aiba salvat prin intermediul unui fisier "test.acr" modul in care testele vor fi afisate.
// cel mia probabil  sa existe optiune de toate, doar cele ramase, custom, niciunul.
#include<iostream.h>
#include<string.h>
#include<windows.h>
int optiune;
bool btest=true, bcopywright=false, bmeniu=false, bintrebare = true, btermsandconditions=false;

int termsandconditions()
{
	int f;
	cout<<" Cplusplus Trainer is a free software; you can redistribute it under the terms of the GNU General Public License as published by the Free Software Foundation; version 2 of the License. It may be updated by us from time to time without notice to you. "<<endl;
	cout<<" Cplusplus Trainer may be detected by some antivirus programs as infected, because it CAN MODIFY WITHOUT YOUR PERMISSION files from your computer; yet it CANNOT MODIFY files that could affect in any way the PERFORMANCE of your computer."<<endl;
	cout<<" Cplusplus Trainer will use its capacity of reading/writing only in save.acr file!"<<endl;
	cout<<" By continuing with the Cplusplus Trainer, you accept and agree to be bound by the terms and provision of the ToS."<<endl;
	cout<<" Do you agree?(1=YES/2=NO)";cin>>f;
	if(f==2)
	{
		cout<<"You didn't acceped the Terms and Conditions and the application will now exit!";
		return 0;
	}
	btermsandconditions=true;
}

void copywright()
{
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"* *  Copywight (C) 2011 Alex Mihai @ C.N.I.H  * *"<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
	cout<<"* * * * * * * * * * * * * * * * * * * * * * * * *"<<endl;
}
void meniu_lung()
{
	cout<<"Hello and welcome! Daca esti aici inseamna ca nu intelegi nimic de la profa asta si vine un test."<<endl;
	cout<<"Tot ce trebuie sa faci aici e sa alegi despre ce vrei sa inveti. Alege un numar de la 1 la 8 si apasa enter."<<endl;
	cout<<"1. Librarii"<<endl;
	cout<<"2. Tipuri de subprograme"<<endl;
	cout<<"3. Programe"<<endl;
	cout<<"4. Subprograme"<<endl;
	cout<<"5. Vectori"<<endl;
	cout<<"6. Divizori"<<endl;
	cout<<"7. Ordonari"<<endl;
	cout<<"8. Numere absolute"<<endl;
	cout<<"9. De retinut!"<<endl;
	cout<<"Make your choice: ";cin>>optiune;
}
void meniu_scurt()
{
	cout<<"----------------------------------------------------"<<endl;
	cout<<"Alege un numar de la 1 la 8 si apasa enter."<<endl;
	cout<<"1. Librarii"<<endl;
	cout<<"2. Tipuri de subprograme"<<endl;
	cout<<"3. Programe"<<endl;
	cout<<"4. Subprograme"<<endl;
	cout<<"5. Vectori"<<endl;
	cout<<"6. Divizori"<<endl;
	cout<<"7. Ordonari"<<endl;
	cout<<"8. Numere absolute"<<endl;
	cout<<"9. De retinut!"<<endl;
	cout<<"0. EXIT"<<endl;
	cout<<"Alegeti optiunea: ";cin>>optiune;
	cout<<"----------------------------------------------------"<<endl;
}
void librarii()
{
	cout<<"Librarii"<<endl;
	cout<<endl;
	cout<<"Imagineaza-ti ca o librarie este ca un dictionar. Asa cum dictionarul este o colectie de cuvinte, asa o librarie este o colectie de comenzi(reprezentate de cuvinte evident...deci poti spune ca este un dictionar). Daca ea nu este inclusa in program, el nu va sti ca acele comenzi exista."<<endl;
	cout<<endl;
	cout<<"Cele mai folosite librarii sunt:"<<endl;
	cout<<"- <iostream.h>;"<<endl;
	cout<<"- <math.h>;"<<endl;
	cout<<"- <fstream.h>;"<<endl;
	cout<<endl;
	cout<<"Libraria <iostream.h> este folosita daca in program exista comenzile de baza, gen void,int,cout sau cin. SI DA EXISTA OBLIGATORIU IN ORICE PROGRAM. Acelasi lucru face si <fstream.h> doar asta ultima se foloseste de fisiere."<<endl<<endl;
	cout<<"Libraria <math.h> este folosita daca in program exista comenzi de genul sqrt sau pow."<<endl;
	cout<<endl;
	cout<<"Ele se apeleaza in program prin sintaxa #include <librarie>, de exemplu: #include <iostream.h> sau #include <math.h>"<<endl;
}
int test1()
{
	int c;
	cout<<"Test"<<endl<<endl;
	cout<<"Alege raspunsurile corecte astfel incat programul de mai jos sa nu aiba nicio eroare"<<endl;
	cout<<"#include <a>"<<endl;
	cout<<"b main()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int a,b,c;"<<endl;
	cout<<"    a=b;"<<endl;
	cout<<"    b=c+a;"<<endl;
	cout<<"}"<<endl;
	cout<<endl;
	cout<<"Scrieti cifra corespunzatoare raspunsului corect."<<endl;
	cout<<"1. a= conio.h  |  b= int"<<endl;
	cout<<"2. a= fstream.h  |  b= void"<<endl;
	cout<<"3. a= iostream.h  |  b= int"<<endl;
	cout<<"4. a= iostream.h  |  b= void"<<endl;
	cout<<"Raspunsul tau este:";cin>>c;
	cout<<endl;
	if(c==3)
		cout<<"Corect!"<<endl;
	else
	{
		cout<<"Gresit!";
		return test1();
	}
}
int tipuri_subprograme()
{	
	int a=0;
	cout<<"Tipurile Subprogramelor"<<endl<<endl;
	cout<<"Orice program este format din subprograme, fie si el doar unul (main). O sa termin repede cu ele...astea sunt de mai multe tipuri:"<<endl<<endl;
	cout<<"1. VOID - un subprogram foloseste void daca in interiorul lui se folosesc numai operatii de citire/scriere (de tipul cin,cout, a=b);"<<endl;
	cout<<"2. INT - se foloseste int daca in subprogram se folosesc si operatii matematice (de tipul a=a-b, b=c/2, a=sqrt(a*b) ) si se returneaza un numar INTreg;"<<endl;
	cout<<"3. FLOAT - la fel ca la int, doar ca float returneaza un numar REAL"<<endl;
	cout<<endl;
	if(btest==true)
	{
		cout<<"Ai terminat de citit?(1=DA/2=NU)";cin>>a;cout<<endl;
		if (a==1)
			return test1();
	}
}
void programe()
{
	cout<<"Bun...la partea asta o sa fiu rapid...idea e ca orice program trebuie sa arate sub forma asta"<<endl<<endl;
	cout<<"#include <iostream.h>"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int ce,iti,trebuie;;"<<endl;
	cout<<"    operatii=blah+blah;"<<endl;
	cout<<"}"<<endl;
	cout<<endl;
	cout<<"Asta este forma unui program...tine-l asa si din cauza asta nu vei avea erori!"<<endl;
}
int test2()
{
	int d;
	cout<<"Test"<<endl<<endl;
	cout<<"Alege raspunsurile corecte astfel incat programul de mai jos sa nu aiba nicio eroare"<<endl;
	cout<<"#include <a>"<<endl;
	cout<<"b c()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i;"<<endl;
	cout<<"    for(i=1;i<=n;i++)"<<endl;
	cout<<"    {"<<endl;
	//cout<<"        cout<<"a["<<i<<"]=";"<<endl; expected ; before a
	cout<<"        cin>>a[i];"<<endl;
	cout<<"    }"<<endl;
	cout<<"}"<<endl;
	cout<<"d e()"<<endl;
	cout<<"{"<<endl;
	cout<<"    c();"<<endl;
	cout<<"    a[1]=a[2]+a[3];"<<endl;
	cout<<"    cout<<a[1];"<<endl;
	cout<<"}"<<endl;
	cout<<endl;
	cout<<"Scrieti cifra corespunzatoare raspunsului corect."<<endl;
	cout<<"1. a= conio.h  |  b= int  |  c= citire  |  d= int  |  e= scriere"<<endl;
	cout<<"2. a= fstream.h  |  b= void  | c= scriere  |  d= void  |  e= float"<<endl;
	cout<<"3. a= iostream.h  |  b= void  |  c= citire  |  d= int  |  e= main"<<endl;
	cout<<"4. a= iostream.h  |  b= void  |  c= main  |  d= int  | e= citire"<<endl;
	cout<<"Raspunsul tau este:";cin>>d;
	cout<<endl;
	if(d==3)
		cout<<"Corect!"<<endl;
	else
	{
		cout<<"Gresit!";
		return test2();
	}
}
int subprograme()
{
	cout<<" Subprogramele sunt niste chestii...care...hm...pai imagineaza-ti ca spui o pveste...si in loc sa insiri povestea cap coada, prezinti mai intai personajele si dupa povestesti."<<endl;
	cout<<" De exemplu: Ieri am fost cu prietenul meu X care sia cumparat etc si cu prietena lui Y la afi si blah blah"<<endl;
	cout<<" Cu subprograme ar arata asa: Il sti pe prietenul meu X si pe prietena lui Y. Pai ieri am fost cu ei la film si X si-a cumparat blahblah"<<endl;
	cout<<" Cam asa e si cu subprogramele...faci operatiile intr-un alt subprogram deasupra main-ului. Tot ce trebui sa retii din asta e ca subprogramele se pun INAINTEA main-ului si se apeleaza in main prin numele lor."<<endl;
	cout<<"De exemplu:"<<endl;
	cout<<"#include <iostream.h>"<<endl;
	cout<<"void citire()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int ce,iti,trebuie;;"<<endl;
	cout<<"    citire blah blah"<<endl;
	cout<<"}"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int ce,iti,trebuie;;"<<endl;
	cout<<"    citire();  //asa se apeleaza in main subprogramul de mai sus"<<endl;
	cout<<"}"<<endl;
	if(btest==true)
		return test2();
}
int vectori()
{
	cout<<" Bun...despre vectori...ei sunt un sir de mai multe numere."<<endl;
	cout<<" O sa avem 3 lucruri de baza pe care trebuie sa le stim aici:"<<endl;
	cout<<"      - Citire;"<<endl;
	cout<<"      - Folosire in subprograme;"<<endl;
	cout<<"      - Afisare"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"CITIREA:"<<endl;
	cout<<endl;
	cout<<" Aici lucrurile trebuie pur si simplu tocite...citirea arata asa:"<<endl;
	cout<<"for(int i=1;i<=n;i++)   //evident ca aici i se poate declara si la inceputul programului, nu neaparat in for"<<endl;
	cout<<"{"<<endl;
//	cout<<"     cout<<"a["<<i<<"]=";"<<endl; expected ; before a
	cout<<"     cin>>a[i];"<<endl;
	cout<<"}"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"AFISAREA:"<<endl;
	cout<<endl;
	cout<<" Din nou toceala:"<<endl;
	cout<<"for(i=1;i<=n;i++)"<<endl;
	cout<<"    cout<<a[i]<<" ";"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"FOLOSIREA IN SUBPROGRAME:"<<endl;
	cout<<endl;
	cout<<" Bun aici o sa vorbesc un pic despre trasmiterea unui vector in subprograme."<<endl;
	cout<<" Mai sus ati vazut cum se apeleaza un subprogram in main: citire();...valorile unui numar/vector sunt transmise in subprogram in interiorul parantezelor ()...de exemplu:"<<endl;
	cout<<" Avem un vector a[i], deja citit, ale calui valori vrem sa le trasmitem in subrogramul vector, pentru a face operatii cu el. Programul ar arata astfel."<<endl;
	cout<<"int vector(int x) //aici x reprezinta fiecare valoare a vectorul a[i]...transmis din main in subprogram ca fiind X"<<endl;
	cout<<"{"<<endl;
	cout<<"    int k=0;"<<endl;
	cout<<"    if(x>2) //cu alte cuvinte daca valoarea lui a[i] este mai mare decat 2"<<endl;
	cout<<"       k++; //k creste cu 1"<<endl;
	cout<<"    cout<<k; //sa il afiseze pe k"<<endl;
	cout<<"}"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i;"<<endl;
	cout<<"    citire(); //aici ne prefacem ca avem un subprogram de citire a vectorului :D"<<endl;
	cout<<"    for(i=1;i<=n;i++) //facem parcurgerea vectorului...parcurgerea este esentiala inainte de orice operatie cu vetorul"<<endl;
	cout<<"    vector(a[i]) //aici se transmite in subprogramul vector valorile lui a[i]"<<endl;
	cout<<"}"<<endl;
	cout<<endl;
	cout<<" Cum functioneaza? Pai ne gandim asa (de la for incolo):"<<endl;
	cout<<"    - Prima oara i=1 => se transmite in subprogram valoarea lui a[1], iar in subprogram se verifica daca a[1] (sub numele de X) este mai mare ca 2 si etc mai departe;"<<endl;
	cout<<"    - Dupa i=2 => se transmite in subprogram valoarea lui a[2], iar in subprogram se verifica daca a[2] (sub acelasi nume de X) e mai mare ca 2 si etc-uri;"<<endl;
	cout<<"    - Si tot asa pana la ultimul i."<<endl;
}
int divizori()
{
	cout<<"A. Divizorii unui numar."<<endl;
	cout<<"B. Numarul de divizori ai unui numar"<<endl;
	cout<<"C. Numarul de divizori ai fiecarui numar dintr-un vector "<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"A. DIVIZORII UNUI NUMAR"<<endl;
	cout<<" Pentru a ala divizorii unui numar vom avea nevoie de un for care reprezinta toate numerele de la 1 la n, unde n este chiar numarul nostru."<<endl;
	cout<<" Ducandu-ne pe ideea asta (sub)programul va arata astfel:"<<endl;
	cout<<"int divizori(int x) //x este numarul nostru deja citit in main"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i;"<<endl;
	cout<<"    for(i=1;i<=n;i++) //for-ul despre care vorbeam"<<endl;
	cout<<"       if(x%i==0) //verificam daca numarul nostru X se imparte la i"<<endl;
	cout<<"          cout<<i<<" "; //afisam numarul care se divide cu X"<<endl;
	cout<<"}"<<endl;
	cout<<"Nu va mai explic si cum se face in main pentru ca deja stiti de a capitolul cu subprograme!"<<endl;
	cout<<""<<endl;
	cout<<"B. NUMARUL DE DIVIZORI AI UNUI NUMAR"<<endl;
	cout<<" Spre deosebire de punctul A,  aici vom avea nevoie si de un contor K,  care sa numere cati divizori are un numar."<<endl;
	cout<<"int divizori(int x) //x este numarul nostru deja citit in main"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i,k=0;"<<endl;
	cout<<"    for(i=1;i<=n;i++) //for-ul despre care vorbeam"<<endl;
	cout<<"       if(x%i==0) //verificam daca numarul nostru X se imparte la i"<<endl;
	cout<<"          k++; //K creste cu o unitate la fiecare divizor gasit"<<endl;
	cout<<"    cout<<k; // sa se afiseze numarul de divizori"<<endl;
	cout<<"}"<<endl;
	cout<<""<<endl;
	cout<<"C. NUMARUL DE DIVIZORI AI FIECARUI NUMAR DINTR-UN VECTOR"<<endl;
	cout<<" Aici o sa ne folosim de un intreg vector un loc de un singur numar. Ideea este ca subprogramul este identic cu cel de la punctul B, diferenta fiind facuta un for in subprogramul main:"<<endl;
	cout<<"int divizori(int x) //x este numarul nostru deja citit in main"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i,k=0;"<<endl;
	cout<<"    for(i=1;i<=n;i++) //for-ul despre care vorbeam"<<endl;
	cout<<"       if(x%i==0) //verificam daca numarul nostru X se imparte la i"<<endl;
	cout<<"          k++; //K creste cu o unitate la fiecare divizor gasit"<<endl;
	cout<<"    cout<<k<<" "; //se afiseaza numarul de divizori pe o singura linie, despartiti de "<<endl;
	cout<<"}"<<endl;
	cout<<"int main()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int i;"<<endl;
	cout<<"    citire() //aici se face citirea vectorului;"<<endl;
	cout<<"    for(i=1;i<=n;i++) //for-ul despre care vorbeam...despre care am mai vb la vectori...cel care apare inainte de fiecare operatie cu vector"<<endl;
	cout<<"       divizori(a[i]); //se apeleaza subprogramul pentru vectorul a[i]"<<endl;
	cout<<"}"<<endl;
}
int ordonari()
{
	cout<<" Despre ordonari nu pot sa spun mare lucru...este un algoritm simplu ce trebuie urmat...contine 2 for-uri si o interschimbare:"<<endl;
	cout<<"void ordonari()"<<endl;
	cout<<"{"<<endl;
	cout<<"    int aux;"<<endl;
	cout<<"    for(int i=1;i<=n-1;i++) //aici se verifica un numar"<<endl;
	cout<<"       for(int j=i+1;j<=n;j++) // cu celelalte in vector"<<endl;
	cout<<"          if(a[i]>a[j]) // daca primul e mai mare decat al doilea se face interschimbarea"<<endl;
	cout<<"          {"<<endl;
	cout<<"             aux=a[i];"<<endl;
	cout<<"             a[i]=a[j];"<<endl;
	cout<<"             a[j]=aux;"<<endl;
	cout<<"          }"<<endl;
	cout<<"}"<<endl;
	cout<<"Practic ordonarea inseamna compararea in modd repetat a numerelor dintr-un vector (in conditiile in care comparare = verificare + interschimbare)"<<endl;
	cout<<"Cel mai simplu sa faceti ordonarea ar fi cu subprogram, deoarece nu mai sunt complicatii cu parametrul X din paranteza...IAR IN MAIN STITI CUM SE APELEAZA FUNCTIA...CU FOR"<<endl;
}
int test3()
{
}
int nr_absolute()
{
	int e;
	cout<<"Numar absolut = valoarea in modul a numarului respectiv (de ex: absolutul lui -14 este 14) si se face ddupa urmatorul algoritm:"<<endl;
	cout<<"int absolut(int x)"<<endl;
	cout<<"{"<<endl;
	cout<<"    if(x<0)"<<endl;
	cout<<"       x=-x"<<endl;
	cout<<"}"<<endl;
	cout<<"Metoda este valabila si pentru numerele dintr-un vector!"<<endl;
	cout<<""<<endl;
	cout<<"Ready? Scrie 1 si apasa ENTER cand esti gata.";cin>>e;
	if(btest==true)
		return test3();
}
void de_retinut()
{
}
int main()
{
	int b;
	if(btermsandconditions==false)
		termsandconditions();
	if(bintrebare == true)
	{
		cout<<"----------------------------------------"<<endl;
		cout<<" Vrei sa incarci si testele din program?"<<endl;
		cout<<"----------------------------------------"<<endl;
		cout<<"(1=DA/2=NU)";cin>>b;
		if(b==2)
			btest=false;
		bintrebare = false;
	}
	if(bcopywright==false)
	{
		copywright();
		bcopywright=true;
	}
	if(bmeniu==false)
	{
		meniu_lung();
		bmeniu=true;
	}
	else
		meniu_scurt();
	if(optiune==1)
		librarii();
	else
		if(optiune==2)
			tipuri_subprograme();
		else
			if(optiune==3)
				programe();
			else
				if(optiune==4)
					subprograme();
				else
					if(optiune==6)
						divizori();
					else
						if(optiune==7)
							ordonari();
						else
							if(optiune==8)
								nr_absolute();
							else
								if(optiune==0)
									return 0;
								else
									if(optiune==5)
										vectori();
									else
										if(optiune==9)
											de_retinut();
										else
											cout<<"Optiune inexistenta. Introdu un numar de la 1 la 7."<<endl;
	return main();
}