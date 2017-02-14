#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <stdlib.h>
using namespace std;

void gotoxy(int x,int y)
 {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
 }



using namespace std;


int main(int argc, char** argv)
{	int dato;



			do {
  				system ("cls");

			    gotoxy(37,4); cout<<"MENU";
  				gotoxy(20,8); cout<<"1. Imprimir en pantalla numeros del 1 al 10:  ";
  				gotoxy(20,10); cout<<"2. Sumar los numeros del 1 al 100:  ";
  				gotoxy(20,12); cout<<"3. Sumar numeros pares del 1 al 50: ";
 			    gotoxy(20,14); cout<<"4. Sumar numeros impares del 1 al 50: ";
                gotoxy(20,16); cout<<"0. SALIR ";
                gotoxy(20,20); cout<<"Elija una opcion ";cin>>dato;



				switch (dato)
				{
					case 0:
						dato=0;
						break;
					case 1:
							system("cls");
						cout<<"1. Imprimir en pantalla numeros del 1 al 10: "<<endl<<endl;
                        {
                        int num=0;
                        cout<<"Los numeros del 1 al 10 ";
                            while(num<10)
                            {
                            num++;
                            cout<<num<<endl;
                            }

                        }
							getch();
						break;
					case 2:
							int valor;
							system("cls");

							gotoxy(30,2);cout<<"2. Sumar los numeros del 1 al 100.";
							   {
                        int num=0;
                        cout<<"Los numeros del 1 al 10 ";
                            while(num<10)
                            {
                            num++;
                            cout<<num<<endl;
                            }

                        }

							getch();

						break;
					case 3:
							float lad;
							system("cls");

							gotoxy(30,2);cout<<"3. Sumar numeros pares del 1 al 50: "<<endl;
							gotoxy(20,6);cout<<"Digite tamano ";cin>>lad;

						break;

						break;

					case 4:
							float r,d;
							system("cls");

							gotoxy(30,2);cout<<"4. Sumar numeros impares del 1 al 50: "<<endl;
							gotoxy(20,6);cout<<"Digite radio del circulo ";cin>>r;
							gotoxy(20,8);cout<<"Digite diametro del circulo ";cin>>d;


						break;
					cout<<endl;
					gotoxy(10,22);cout<<"El valor ingresado no es valido. Debe ser 0 , 1 , 2 , 3 , 4 , 5. "<<endl;
				}
				if(dato!=0)
				{getch();}
			}
			while(dato>0);

			gotoxy(20,24);system("pause");


	return 0;
}
