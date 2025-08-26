#include <fstream>
#include <iostream>
#include <string>

std::string my_replace(std::string line, const std::string& ptn, const std::string& rpl)
{
    size_t pos = line.find(ptn);
    if (pos == std::string::npos)
        return line;

    std::string newline = line.substr(0, pos) + rpl + line.substr(pos + ptn.length());
    return my_replace(newline, ptn, rpl);
}

std::string *read_contents(std::string filename, int *lineCount)
{
	std::ifstream infile(filename.c_str());

	if (!infile)
	{
		std::cerr << "could not open file." << std::endl;
		return NULL;
	}

	int capacity = 10;
	std::string *lines = new std::string[capacity];
	std::string line;
	while (std::getline(infile, line))
	{
		if (*lineCount >= capacity)
		{
			int new_capacity = capacity * 2;
			std::string* temp = new std::string[new_capacity];
			for (int i = 0; i < capacity; i++)
				temp[i] = lines[i];
			delete[] lines;
			lines = temp;
			capacity = new_capacity;
		}
		lines[(*lineCount)++] = line;
	}
	infile.close();
	return (lines);
}

bool	write_contents(std::string *lines, int lineCount, std::string filename)
{
	std::ofstream myfile;

	filename.append(".replace");
	myfile.open(filename.c_str());

	if (!myfile)
	{
		std::cerr << "could not create file." << std::endl;
		return 1;
	}
	for (int i = 0; i < lineCount; ++i)
			myfile << lines[i] << std::endl;

	myfile.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: " << av[0] << "filename" << std::endl;
		return 1;
	}
	int lineCount = 0;
	std::string filename = av[1];
	std::string *lines = read_contents(filename, &lineCount);

	for (int i = 0; i < lineCount; i++)
		lines[i] = my_replace(lines[i], av[2], av[3]);

	write_contents(lines, lineCount, filename);
    delete[] lines;
}
