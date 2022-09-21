#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::string(22, '-') << "TEST 1:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "ShrubberyCreationForm: form not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			ShrubberyCreationForm contract;

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 2:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "ShrubberyCreationForm: not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			ShrubberyCreationForm contract("ThesimpleThing");

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 3:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "ShrubberyCreationForm: grade too low" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			ShrubberyCreationForm contract("ThesimpleThing");

			contract.setSigned(true);
			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 3:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "ShrubberyCreationForm: the tree" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 130);
			ShrubberyCreationForm contract("ThesimpleThing");

			contract.setSigned(true);

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 4:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "RobotomyRequestForm: form not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			RobotomyRequestForm contract;

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 5:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "RobotomyRequestForm: not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			RobotomyRequestForm contract("ThesimpleThing");

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 6:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "RobotomyRequestForm: grade too low" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			RobotomyRequestForm contract("ThesimpleThing");

			contract.setSigned(true);
			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 7:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "RobotomyRequestForm: random thing" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 42);
			RobotomyRequestForm contract("ThesimpleThing");

			contract.setSigned(true);

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 8:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "PresidentialPardonForm: form not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			PresidentialPardonForm contract;

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 9:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "PresidentialPardonForm: not signed" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			PresidentialPardonForm contract("ThesimpleThing");

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 10:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "PresidentialPardonForm: grade too low" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 149);
			PresidentialPardonForm contract("ThesimpleThing");

			contract.setSigned(true);
			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 11:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "PresidentialPardonForm: text thing" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 1);
			PresidentialPardonForm contract("ThesimpleThing");

			contract.setSigned(true);

			contract.execute(peter);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 12:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Form: execute form" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter("Peter", 1);
			PresidentialPardonForm contract;

			contract.setSigned(true);
			peter.executeForm(contract);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(22, '-') << "TEST 13:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "Intern" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			//"presidential pardon", "robotomy request", "shrubbery creation"
			Intern Amy;
			Form *form = Amy.makeForm("presidential pardon", "Arbeitsamt");
			std::cout << "I am a " << form->getName() << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
};

//orthodox form dingsi