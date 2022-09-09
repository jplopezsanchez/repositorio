#include <iostream>
#include <fstream>
using namespace std;


void listado(float mat[][dtprod], int dclie, clientes[],  tipoprod[])
{
    cout << "\nListado :" << endl;
    for (int i = 0; i < dclie ; ++i) {

        cout << clientes[i] << ": "
        
        for (int j = 0; j < dtprod ; ++j) {
           
            if (pesos [j]) {
                cout << clientes[i] << " - " << tipoprod[j] << endl;
            }
        }
    }
    cout << endl;
}





int main()
{
    {
        void sortdoble(float vmag[], int tam, int vpos[]); //Punto 4
        const int dclie {8};

        clientes[dclie] { "Bat", "Bi", "Hiru", "Lau", "Bost", "Sei", "Zazpi", "Zortzi"    };
        tipoprod[dtprod] {"Alimenticios", "Electrónicos"", ""Metálicos", "Textiles", "Químicos"};

        float mdist[dclie][dtprod] {}; //acumulado de distancias x clientes y tipo prod, punto 3
        float pesos[dclie] {}; //Acumulado de pesos por cliente, punto 4
        int entregas[dclie] {}; //Entregas por cliente, punto 4
        float promedios[dclie]; //Promedio pesos por entrega, por cliente, punto 4
        int vpos[dclie]; //Para ordenar sin alterar el vector de nombres, punto 4

    }


    {
        ifstream adatos;
        adatos.open("Datos.txt");
        if (!adatos) {
            cout << "No se puedo abrir el archivo de datos" << endl;
            return 1;
        }
        int iclie, itprod;
        float peso, dist;
        while (adatos >> iclie >> itprod >> peso >> dist) {
        mdist[iclie][itprod] += dist;
        pesos[iclie] += peso;
        entregas[iclie]++;
        }
        adatos.close();
    }
}