/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absalhi <absalhi@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 18:12:54 by absalhi           #+#    #+#             */
/*   Updated: 2023/03/13 14:27:15 by absalhi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <sstream>
#include <iomanip>

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter(void)
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	(void)rhs;
	return *this;
}

static std::string convertToPointLiteral(float value)
{
	std::ostringstream _stream;
	_stream << std::fixed << std::setprecision(1) << value << "f";
	return _stream.str();
}

static std::string convertToPointLiteral(double value)
{
	std::ostringstream _stream;
	_stream << std::fixed << std::setprecision(1) << value;
	return _stream.str();
}

std::string ScalarConverter::convert(std::string const &literal)
{
	try
	{
		if (literal.empty())
			return "Type conversion is impossible.\n";

		std::string _result;

		if (literal.length() == 1 && !isdigit(literal[0]))
		{
			int _c = static_cast<int>(literal[0]);
			_result = "char: '" + literal +
					  "'\nint: " + std::to_string(_c) +
					  "\nfloat: " + convertToPointLiteral(static_cast<float>(_c)) +
					  "\ndouble: " + convertToPointLiteral(static_cast<double>(_c)) + "\n";
			return _result;
		}

		if (literal == "nan" || literal == "nanf" ||
			literal == "+inf" || literal == "-inf" ||
			literal == "+inff" || literal == "-inff")
			return std::string("char: impossible\nint: impossible\nfloat: ") +
				   ((literal == "nan" || literal == "nanf")
						? "nanf"
						: ((literal == "+inf" || literal == "+inff")
							   ? "+inff"
							   : "-inff")) +
				   "\ndouble: " +
				   ((literal == "nan" || literal == "nanf")
						? "nan"
						: ((literal == "+inf" || literal == "+inff")
							   ? "+inf"
							   : "-inf")) +
				   "\n";

		_result = "char: ";
		char _c = static_cast<char>(std::stoi(literal));
		if (std::isprint(_c))
			_result += std::string("'") + _c + std::string("'");
		else
			_result += "Non displayable";
		_result += "\nint: ";
		_result += std::to_string(std::stoi(literal));
		_result += "\nfloat: ";
		_result += convertToPointLiteral(std::stof(literal));
		_result += "\ndouble: ";
		_result += convertToPointLiteral(std::stod(literal));
		_result += "\n";
		return _result;
	}
	catch (std::exception &e)
	{
		return "Type conversion is impossible.\n";
	}
}
