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
                cout<<"2. Sumar los numeros del 1 al 100:  "<<endl;
                cout<<"0. SALIR "<<endl;
                cout<<"Elija una opcion ";cin>>dato;



				switch (dato)
				{
					case 0:
						dato=0;
						break;
					case 1:
							system("cls");
                            cout<<"1. Imprimir matriz: "<<endl<<endl;

                             int x,y,num=0, numeros[4][3];
                             for (x=0;x<4;x++)

                            {
                                for (y=0;y<3;y++)
                                {
                                numeros[x][y]=num;
                                num++;
                                }
                            }
                             cout<<"El array original es: " <<endl;

                            for(x = 0;x < 4;x++)
                                {
                                    for(y = 0;y < 3;y++)
                                    {
                                    cout<<numeros[x][y];
                                    }

                                }

							getch();
						break;
					/**case 2:
							system("cls");
                            cout<<"2. llenar matriz automatica"<<endl<<endl;
                            {


                            }

							getch();

						break;**/

				}
				if(dato!=0)
				{getch();}
			}
			while(dato>0);

            system("pause");


	return 0;
}





