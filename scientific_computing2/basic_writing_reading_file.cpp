#include <iostream>
#include <cassert>
#include <fstream>

int main(int argc, char* argv[])
{
	double x[3] = {1,2,3};
	double y[3] = {3,4,5};
	std::ofstream write_output("Output.dat");
	assert(write_output.is_open());
	for (int i=0; i <3; i++)
	{
		write_output << x[i] << "," <<  y[i] << "\n" ;
	}
	write_output.close();
	return 0;
}

