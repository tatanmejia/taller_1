
#include <iostream>
#include <conio.h>
#include <stdlib.h>


using namespace std;

main(){


	int dato;



			do {
  				system ("cls");

                cout<<"MENU"<<endl<<endl;
                cout<<"1. Imprimir matriz:  "<<endl;
                cout<<"2. Mostrar Matriz automatica por el sistema "<<endl;
                cout<<"0. SALIR "<<endl;
                cout<<"Elija una opcion ";cin>>dato;



				switch (dato)
				{
					case 0:
						dato=0;
						break;
					case 1:
							system("cls");
							int mat[5][5];
                            cout<<"Ingrese los valores para rellenar  la matriz . "<<endl;

                                for (int i=1; i<=5; i++)
                                    { for (int j=1; j<=5; j++)
                                    { cout<<"posicion ("<<i<<","<<j<<"): ";
                                      cin>>mat[i][j]; }
                                    }
                            cout<<"Los valores ingresados son \n"<<mat[5][5];

                            for (int i=0; i<=5; i++)
                                { for (int j=0; j<=5; j++)
                                { cout<<mat[i][j]<<" "; }cout<<endl;
                                }
                        getch();
                        break;

                    case 2:
                        system("cls");

                        cout<<" 2. Mostrar Matriz automatica por el sistema \n";

                        for(int i=0;i<5;i++)
                        {
                            for (int j=0;j<5;j++)
                            {
                                cout<<mat[i][j]<<"  ";
                            }
                                cout<<endl;
                        }
                         getch();
                        break;

                        default: cout<<"\nEl valor ingresado no es valido. Debe ser 1, 2 o 0"<<endl;
				if(dato!=0)
				{getch();}
			}
			}
			while(dato>0);

            system("pause");


	return 0;
}





