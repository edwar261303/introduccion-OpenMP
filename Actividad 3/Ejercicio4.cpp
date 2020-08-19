#include <iostream>
#include <omp.h>
using namespace std;
int main()
{
	int i;
	#pragma omp parallel num_threads(2)
	{
		cout << "Imprime ciclo...!" << endl;		
		for (i = 0; i < 10; i++)
			cout << "unsaac" << i << endl;
	}
	getchar();
	return 0;
}