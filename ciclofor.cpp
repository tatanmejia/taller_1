#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <cmath>

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


main(){

int dato;



			do {
  				system ("cls");

			    gotoxy(37,4); cout<<"MENU";
  				gotoxy(18,8); cout<<"1. Imprimir en pantalla numeros del 1 al 10:  ";
  				gotoxy(18,10); cout<<"2.Imprimir las tablas de multiplicar de un numero del 1 al 20: ";
  				gotoxy(18,12); cout<<"3. Sumar numeros pares del 1 al 50: ";
 			    gotoxy(18,14); cout<<"4. Sumar numeros impares del 1 al 50: ";
                gotoxy(18,16); cout<<"0. SALIR ";
                gotoxy(18,20); cout<<"Elija una opcion ";cin>>dato;



				switch (dato)
				{
					case 0:
						dato=0;
						break;
					case 1:
							system("cls");
                            cout<<"1. Imprimir en pantalla numeros del 1 al 10: "<<endl<<endl;
                        {

                            cout<<"Los numeros del 1 al 10 "<<endl;
                            for (int i=1;i<=10;i++)
                            cout<<i<<endl;
                        }
							getch();
						break;
					case 2:
							system("cls");
                            cout<<"2.Imprimir las tablas de multiplicar de un numero del 1 al 20. "<<endl<<endl;
                            {
                             int n,r;
                            cout<<"ingrese numero a multiplicar ";
                            cin>>n;
                            for (int i=0;i<20;i++){
                              for(int j=0;j<20;j++)
                            }
                            n*j=r;
                                cout<<"el numero elegido es" ,<<n<<"X"<<j<<"="<<r<<endl;



                            }

							getch();

						break;
					case 3:
							system("cls");

							cout<<"3. Sumar numeros pares del 1 al 50: "<<endl;
                                {


                                int par=1, sumap=0;

                            while(par<50)
                                { if(par%2==0)
                                {
                                    sumap=sumap+par;
                                }
                                par++;

                                }
                            cout<<"Los suma de los pares del 1 al 50 es :"<<sumap;
                            }


                            getch();
						break;

					case 4:

							system("cls");

							cout<<"4. Sumar numeros impares del 1 al 50: "<<endl;


                                int impar=1, suimp=0;

                                while(impar<50)
                                    { if(impar%2==0){}

                                        else{
                                            suimp=suimp+impar;
                                            }

                                          impar++;
                                    }



                            cout<<"Los suma de los impares del 1 al 50 es :"<<suimp;



                            getch();

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
