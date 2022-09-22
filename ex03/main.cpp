#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::string(22, '-') << "TEST 1:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Intern: presidential pardon" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Intern Amy;
			Form *form = Amy.makeForm("presidential pardon", "Arbeitsamt");
			std::cout << "I am a " << form->getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 2:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Intern: robotomy request" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Intern Amy;
			Form *form = Amy.makeForm("robotomy request", "Arbeitsamt");
			std::cout << "I am a " << form->getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 3:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Intern: shrubbery creation" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Intern Amy;
			Form *form = Amy.makeForm("shrubbery creation", "Arbeitsamt");
			std::cout << "I am a " << form->getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 3:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Intern: error" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Intern Amy;
			Form *form = Amy.makeForm("blablabla", "Arbeitsamt");
			std::cout << "I am a " << form->getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
};
