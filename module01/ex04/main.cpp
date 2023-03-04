/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 02:09:53 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/04 02:49:29 by absalhi          ###   ########.fr       */
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
	size_t _find;

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
		_find = 0;
		while ((_find = _line.find(s1, _find)) != std::string::npos)
			_line.replace(_find, s1.length(), s2), _find += s2.length();
		_ofile << _line << "\n";
	}
	_ifile.close(), _ofile.close();
	std::cout << "File " << filename
			  << " replaced successfully and saved to " << filename
			  << ".replace." << std::endl;

	return EXIT_SUCCESS;
}
