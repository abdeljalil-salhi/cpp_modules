/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:09:53 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 19:57:45 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
		std::cerr << "Usage: " << argv[0] << " filename s1 s2"
				  << std::endl,
			exit(EXIT_FAILURE);

	std::string filename = argv[1], s1 = argv[2], s2 = argv[3], _line;
	size_t _pos, _findPos;

	std::ifstream _ifile(filename);
	if (!_ifile.is_open())
		std::cerr << "Error: failed to open " << filename << "."
				  << std::endl,
			exit(EXIT_FAILURE);
	std::ofstream _ofile(filename + ".replace");
	if (!_ofile.is_open())
		std::cerr << "Error: failed to open " << filename << ".replace."
				  << std::endl,
			exit(EXIT_FAILURE);

	while (std::getline(_ifile, _line))
	{
		std::string _updatedLine;
		_pos = 0UL;
		while (_pos < _line.length())
		{
			/*
			** find() returns the index of the first occurrence of the substring
			** in the string from given starting position.
			**
			** Find the position of the next occurrence of `s1` in the line
			** starting from position `_pos`.
			** If `s1` is not found in the whole line, std::string::npos is returned.
			*/
			if ((_findPos = _line.find(s1, _pos)) == std::string::npos)
			{
				_updatedLine += _line.substr(_pos);
				break;
			}
			/*
			** If `s1` is found, append the substring from `_pos` to `_findPos`
			** to the updated line, then append `s2` to the updated line.
			** Update `_pos` to the position after the occurrence of `s1`.
			*/
			_updatedLine += _line.substr(_pos, _findPos - _pos) + s2;
			_pos = _findPos + s1.length();
		}
		_ofile << _updatedLine << "\n";
	}
	_ifile.close(), _ofile.close();
	std::cout << "File " << filename
			  << " replaced successfully and saved to " << filename
			  << ".replace." << std::endl;

	return EXIT_SUCCESS;
}
