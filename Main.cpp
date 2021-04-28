#include <iostream.h>
#include <conio.h>

using namespace std;

int main()
{

textcolor(RED);
cout <<"Alerta: se você tem um celular com um processador ruim, melhor não executar o programa.\n";
cout <<"Aperte 1, para continuar\n";
int pass;
scanf ("%i" ,pass);
if (pass == 1)
{
cout <<"Agora clique 2 para abrir a trava 'Cavalo de troia'\n";
}
else{
system("clear");
}



return 0;

}
