#include<iostream>
#include<omp.h>
using namespace std;
int main()
{
	int nth, tid;
	cout << "Inicio del ciclo...!" << endl;
	#pragma omp parallel private(tid)
	{
		tid = omp_get_thread_num();
		nth = omp_get_num_threads();
		printf("Este es el hilo %d de un total de %d \n", tid, nth);
	}
	cout << "Fin del pragrama paralelo" << endl;
	getchar();
	return 0;
	//modificacion 2
}