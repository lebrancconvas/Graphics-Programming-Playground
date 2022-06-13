// Ref: https://www.youtube.com/watch?v=12IbpyFiIYE 
#include <fstream>

int main()
{
	// Set Image Size. This is the size of the image that will be created.
	const int WIDTH = 800;
	const int HEIGHT = 600;

	// Set the output file. 
	std::ofstream fout("output/ppm/output_02.ppm");
	// std::ofstream fout("log/output_02.txt");

	// Catch Event When the file writting is failed. 
	if(fout.fail()) return -1; // Return Error. 

	// PPM Template
	fout << "P3\n"; // Set Format. 
	fout << WIDTH << " " << HEIGHT << "\n"; // Set Size. 
	fout << "255\n"; // Set Maximum Color Value. 

	for(int row = 0; row < HEIGHT; row++)
	{
		for(int column = 0; column < WIDTH; ++column)
		{
			fout << rand() % 256 << " "; // Red Value. 
			fout << rand() % 256 << " "; // Green Value.  
			fout << rand() % 256 << "  "; // Blue Value. 
		}
		fout << "\n"; // New Line.
	}

	return 0; // Return No Error. 
} 