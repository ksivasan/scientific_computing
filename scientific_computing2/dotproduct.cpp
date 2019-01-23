#include <iostream>
int main(int argc, char* argv[])
{
	double vector1[6] = {1,2,3,4,5,6};
	double vector2[6] = {1,2,3,4,5,6};
	double dotproduct;
	for (int i=0; i < 6; i++)
	{
		dotproduct += vector1[i] * vector2[i] ;
	}
	std::cout << "scalarproduct: " << dotproduct << "\n";
	return 0;
}
