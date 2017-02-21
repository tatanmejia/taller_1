#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

main(){
    	int dato;



			do {
  				system ("cls");

                cout<<"MENU"<<endl<<endl;
                cout<<"1. Array de numeros decimales:  "<<endl;
                cout<<"2. Array de num1 x num2 "<<endl;
                cout<<"3. array 4X4."<<endl;
                cout<<"0. SALIR "<<endl;
                cout<<"Elija una opcion ";cin>>dato;



				switch (dato)
				{
					case 0:
						dato=0;
						break;
					case 1:
					    system("cls");
					    cout<<"Array de numeros decimales: "<<endl;
					    float j[4];
					    j[0]=32.583;
					    j[1]=11.239;
					    j[2]=45.781;
					    j[3]=22.237;
                        for(int i=0;i<4;i++)
                        {
                            cout<<j[i]<<endl;
                        }
                    getch();
                     break;

                    case 2:
                        system("cls");

                        cout<<" 2. Mostrar Matriz automatica por el sistema \n";


                         getch();
                        break;

                        default: cout<<"\nEl numero ingresado no es valido. Debe ser 1, 2 o 0"<<endl;
				if(dato!=0)
				{getch();}
			}
			}
			while(dato>0);

            system("pause");









return 0;
}
