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

                        cout<<" 2. Array de num1 x num2 \n";
                        	int num1, num2;
                        cout<<"Ingrese numero de filas: ";
                        cin>>num1;
                        cout<<"Ingrese numero de columnas: ";
                        cin>>num2;

                        int matriz[num1][num2];
                        int rel;
                        rel=1;
                        for(int i=0; i<num1; i++)
                            { for(int j=0; j<num2; j++){
                                matriz[i][j]=rel;   }
                                rel=0;}
                        for(int i=0;i<num1;i++)
                        {   for(int j=0;j<num2;j++){
                        cout<<matriz[i][j]<<" ";   }cout<<endl;}

                         getch();
                        break;

                    case 3:
                        system ("cls");
                        cout<<"Array dimension 4x4 .\n ";
                        cout<<"Ingrese los valores para la matriz 4x4. "<<endl;
                        int mat[4][4];
                        for (int i=0; i<4; i++)
                            { for (int k=0; k<4; k++)
                        { cout<<"Posicion ("<<i<<","<<k<<"): "; cin>>mat[i][k]; } }

                        for(int i=0;i<4;i++)
                            {   for(int k=0;k<4;k++)
                        {if(k==1)
                            { 	mat[i][k]=pow(mat[i][k],2); }
                            else{ if(k==2){
                            mat[i][k]=pow(mat[i][k],3); }
                            else{ if(k==3){
                            mat[i][k]=pow(mat[i][k],4);}}}
                        }
                            }   cout<<"La matriz es: \n";

                        for(int i=0;i<4;i++)
                            {   for(int k=0;k<4;k++)
                            {   cout<<mat[i][k]<<" ";   }cout<<endl;}
                        getch ();
                        break;

                        default:
                             cout<<"El numero ingresado no es valido. Debe ser 1, 2, 3 o 0"<<endl;
				if(dato!=0)
				{getch();}
			}
			}
			while(dato>0);

            system("pause");









return 0;
}
