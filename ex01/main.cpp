#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::string(22, '-') << "TEST 1:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "simple creation; overload of << " << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			Form contract;

			std::cout << peter;
			std::cout << contract;

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::string(22, '-') << "TEST 2:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "signed function works" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			Form contract;

			std::cout << contract;
			contract.beSigned(peter);
			std::cout << contract;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::string(22, '-') << "TEST 3:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "signed function exception" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			Form contract("Washingmashine contract", 10, 10);

			std::cout << contract;
			contract.beSigned(peter);
			std::cout << contract;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::string(22, '-') << "TEST 4:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "signed function bureaucrat" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			Form contract("Washingmashine contract", 150, 150);
			std::cout << contract;
			peter.signForm(&contract);
			std::cout << contract;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << std::string(22, '-') << "TEST 4:" << std::string(22, '-') << std::endl;
	std::cout << std::string(9, '-') << "signed function bureaucrat fail" << std::string(9, '-') << std::endl;
	std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat peter;
			Form contract("Washingmashine contract", 10, 10);
			std::cout << contract;
			peter.signForm(&contract);
			std::cout << contract;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
};
