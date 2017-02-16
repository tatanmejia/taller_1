#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cmath>

using namespace std;

main(){

int dato;



			do {
  				system ("cls");

                cout<<"MENU"<<endl<<endl;
  				cout<<"1. Imprimir en pantalla numeros del 1 al 10:  "<<endl;
                cout<<"2.Imprimir las tablas de multiplicar de un numero del 1 al 20: "<<endl;
                cout<<"3. Solucionar el factorial de un numero: "<<endl;
                cout<<"4. Solucionar el numero fibonacci: "<<endl;
                cout<<"5. Ingrese 5 numeros aleatorios y almacenar en array, imprimirlos: "<<endl;
                cout<<"0. SALIR "<<endl;
                cout<<"Elija una opcion ";cin>>dato;



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

                             int n,resul;
                            cout<<"ingrese numero a multiplicar ";
                            cin>>n;
                            for (int i=1;i<=20;i++)
                            {
                            resul=n*i;
                            cout<<n<<" * "<<i<<"="<<resul<<endl;
                            }



							getch();

						break;
					case 3:
							system("cls");

							cout<<"3. Solucionar factorial de un numero "<<endl;
                                {
                            int n;
                            int t=1;
                            cout<<"ingrese un numero para calcular factorial"<<endl;
                            cin>>n;
                         for(int i=1;i<=n;i++)
                                {
                                    t=i*t;
                                }
                            cout<<"El factorial de "<<n<<" es "<<t;
                            }

                            getch();
						break;

					case 4:

							system("cls");

							cout<<"4. Solucionar el numero fibonacci: "<<endl;
							int ant1, ant2,fib,numero;
							ant1=1;
							ant2=1;
							fib=1;
							cout<<"Ingrese numero de visualizacion de la  serie Fibonicce"<<endl;
							cin>>numero;
							cout<<ant1<<endl;
							for(int i=2;i<=numero;i++){
                                cout<<fib<<endl;
                                fib=ant1+ant2;
                                ant1=ant2;
                                ant2=fib;
							}
                            getch();

						break;

                    case 5:

							system("cls");

							cout<<"5. Ingrese 5 numeros aleatorios y almacenar en array, imprimirlos: "<<endl;
							int arreglo[5], i[5];
							for(int i=0;i<5;i++){

                                cout<<"Ingrese numeros para almacenar"<<endl;
                                cin>>arreglo[i];
							}
							for(int i=0;i<5;i++){

                                cout<<arreglo[i]<<endl;
							}




                            getch();

						break;


					cout<<endl;
					cout<<"El valor ingresado no es valido. Debe ser 0 , 1 , 2 , 3 , 4 , 5. "<<endl;
				}
				if(dato!=0)
				{getch();}
			}
			while(dato>0);

		system("pause");


	return 0;

	}
