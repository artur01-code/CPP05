#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{

};

Intern::~Intern(void)
{

};

Form *Intern::makeShrubbery(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
};

Form *Intern::makeRobotomy(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
};

Form *Intern::makePresidential(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);
};

Form *Intern::makeForm(std::string const &name, std::string const &target)
{
	typedef	Form* (Intern::*method_functions)(std::string);
	
	method_functions ptr[3] = {&Intern::makePresidential, &Intern::makeRobotomy, &Intern::makeShrubbery};
	std::string forms[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			Form* form = (this->*ptr[i])(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return (form);
		}
	}
	std::cout << "Form with a name: \"" << name << "\", doesnt exist" << std::endl;
	throw Intern::FormDoesNotExistException();
};

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return ("* Form doesn't exist *");
};