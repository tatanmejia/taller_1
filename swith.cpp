#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <time.h>

using namespace std;
main(){

int dato;
            do{
                system ("cls");

                cout<<"MENU"<<endl<<endl;
  				cout<<"1. Consultar el mes del sistema e imprimir en espanol:  "<<endl;
                cout<<"2.Codigo ASCII de vocal: "<<endl;
                cout<<"3. Codigo ASCII de numero 0 al 9: "<<endl;
                cout<<"0. SALIR "<<endl;
                cout<<"Elija una opcion ";cin>>dato;




            switch(dato)
            {       case 0:
						dato=0;
						break;

                    case 1:
                    system ("cls");



                         cout<<" Consultar el mes del sistema e imprimir en espanol:  "<<endl;

                                            struct tm *tiempo;
                                            int dia;
                                            int mes;
                                            int year;

                                            time_t fecha_sistema;
                                            time(&fecha_sistema);
                                            tiempo=localtime(&fecha_sistema);

                                            year=tiempo->tm_year + 1900;
                                            mes=tiempo->tm_mon + 1;
                                            dia=tiempo->tm_mday;


                                            switch(mes)
                                            {
                                            case 1:
                                                {
                                                    cout<<"Enero";
                                                }
                                               getch();
                                                break;
                                            case 2:
                                                {
                                                    cout<<"Febrero" ;
                                                }
                                                 getch();
                                                break;
                                            case 3:
                                                {
                                                    cout<<"Marzo";
                                                }
                                                getch();
                                                break;
                                            case 4:
                                                {
                                                    cout<<"Abril" ;
                                                }
                                                getch();
                                                break;
                                            case 5:
                                                {
                                                    cout<<"Mayo" ;
                                                }
                                                break;
                                            case 6:
                                                {
                                                    cout<<"Junio" ;
                                                }
                                                getch();
                                                break;
                                            case 7:
                                                {
                                                   cout<<"Julio" ;
                                                }
                                                getch();
                                                break;
                                            case 8:
                                                {
                                                    cout<<"Agosto";
                                                }
                                                getch();
                                                break;
                                            case 9:
                                                {
                                                   cout<<"Septiembre";
                                                }
                                                getch();
                                                break;
                                            case 10:
                                                {
                                                   cout<<"Octubre";
                                                }
                                                getch();
                                                break;
                                            case 11:
                                                {
                                                    cout<<"Noviembre";
                                                }
                                                getch();
                                                break;
                                            case 12:
                                                {
                                                   cout<<"Diciembre";
                                                }
                                                getch();
                                                break;
                                            }

                                break;

                    case 2:
                    system ("cls");


                        char vocal;
                         cout<<" Codigo ASCII de vocal:  "<<endl;
                         cin>>vocal;


                                            switch(vocal)
                                            {
                                            case 'a':
                                                {
                                                    cout<<"Ascii 97";
                                                }
                                               getch();
                                                break;
                                            case 'e':
                                                {
                                                    cout<<"Ascii 101" ;
                                                }
                                                 getch();
                                                break;
                                            case 'i':
                                                {
                                                    cout<<"Ascii 105";
                                                }
                                                getch();
                                                break;
                                            case 'o':
                                                {
                                                    cout<<"Ascii 111";
                                                }
                                                getch();
                                                break;
                                            case 'u':
                                                {
                                                  cout<<"Ascii 117";
                                                }
                                                break;
                                            default:
                                                cout<<"La letra ingresada no correponde a vocal";
                                                getch();

                                            }

                                break;
                                default:
                                cout<<"El numero ingresado no es valido. Debe ser 1, 2, 3 o 0"<<endl;
            }
        }

            	while(dato>0);

		system("pause");


return 0;
}
