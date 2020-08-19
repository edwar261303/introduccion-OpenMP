#include<iostream>
#include<omp.h>
using namespace std;
int main()
{
	int i;
	#pragma omp parallel num_threads(2) private(i)
	{
		cout << "Imprime ciclo...!" << endl;
		for (i = 0; i < 10; i++)
			cout << "Unsaac" << i << endl;
	}
	cout << "Fin de la impresion de ciclos...!";
	getchar();
	return 0;
}