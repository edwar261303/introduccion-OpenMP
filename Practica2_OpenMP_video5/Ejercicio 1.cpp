//ejercicio 3
#include<iostream>
int main()
{
	#pragma omp parallel num_threads(6)
	{
		std::cout << "Hola Mundo..!" << std::endl;
	}
	std::cout << "Adios...!" << std::endl;
	getchar();
	return 0;	
}