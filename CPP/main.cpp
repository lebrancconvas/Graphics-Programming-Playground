// Ref: https://www.youtube.com/watch?v=12IbpyFiIYE 
#include <iostream>
#include <fstream>
#include <string>

// #include "lib/color3.h"
// #include "lib/vec3.h"

void color_converter(std::ofstream fout, int red_limit, int green_limit, int blue_limit)
{
	fout << rand() % red_limit << " "; // Red Value. 
	fout << rand() % green_limit << " "; // Green Value.  
	fout << rand() % blue_limit << "  "; // Blue Value. 
} 

int main()
{
	// Set Image Size. This is the size of the image that will be created.
	const std::string FORMAT = "P3";
	const int WIDTH = 800;
	const int HEIGHT = 600;
	const int MAX_COLOR = 255;
	const std::string FILENAME = "output_blue_intensive";  

	// Set the output file. 
	std::ofstream fout("output/ppm/" + FILENAME + ".ppm"); 
	// std::ofstream fout("log/" + FILENAME + ".txt"); 

	// Catch Event When the file writting is failed. 
	if(fout.fail()) return -1; // Return Error. 

	// PPM Template
	fout << FORMAT << "\n"; // Set Format. 
	fout << WIDTH << " " << HEIGHT << "\n"; // Set Size. 
	fout << MAX_COLOR << "\n"; // Set Maximum Color Value. 

	for(int row = 0; row < HEIGHT; row++)
	{
		std::cerr << "\rScanLines Remaining: " << row << " " << std::flush;
		for(int column = 0; column < WIDTH; ++column)
		{
			// Red Intensive. 
			// fout << rand() % 255 << " "; // Red Value. 
			// fout << rand() % 1 << " "; // Green Value.  
			// fout << rand() % 1 << "  "; // Blue Value

			// Green Intensive. 
			// fout << rand() % 1 << " "; // Red Value. 
			// fout << rand() % 255 << " "; // Green Value.  
			// fout << rand() % 1 << "  "; // Blue Value

			// Blue Intensive. 
			fout << rand() % 1 << " "; // Red Value. 
			fout << rand() % 1 << " "; // Green Value.  
			fout << rand() % 255 << "  "; // Blue Value
		}
		fout << "\n"; // New Line.
	}
	std::cerr << "\nDONE!\n"; 
	return 0; // Return No Error. 
} 

