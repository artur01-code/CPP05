#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);

	Form *makeForm(std::string const &name, std::string const &target);
	Form *makeShrubbery(std::string target);
	Form *makeRobotomy(std::string target);
	Form *makePresidential(std::string target);

	class FormDoesNotExistException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

#endif