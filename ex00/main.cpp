#include "Bureaucrat.hpp"

int main()
{
	{
		Bureaucrat peter;
		Bureaucrat peter2("anderer", 142);
		peter = peter2;
		std::cout << peter.getName() << " " << peter.getGrade() << std::endl;
	}
	std::cout << std::string(25, '-') << "TEST 1" << std::string(25, '-') << std::endl;
	{
		try 
		{
			Bureaucrat peter;
			std::cout << peter;
			peter.incerementGrade();
			peter.decerementGrade();
			peter.decerementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::string(25, '-') << "TEST 2" << std::string(25, '-') << std::endl;
	{
		try 
		{
			Bureaucrat peter("Peter", 3);
			std::cout << peter;
			peter.incerementGrade();
			peter.incerementGrade();
			peter.incerementGrade();
		}
		catch (std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::string(25, '-') << "TEST 3" << std::string(25, '-') << std::endl;
	{
		try 
		{
			Bureaucrat peter("Peter", 151);
		}
		catch (std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}
	std::cout << std::string(25, '-') << "TEST 4" << std::string(25, '-') << std::endl;
	{
		try 
		{
			Bureaucrat peter("Peter", 0);
		}
		catch (std::exception &e)
		{
			std::cout << "Exception caught: " << e.what() << std::endl;
		}
	}

};
