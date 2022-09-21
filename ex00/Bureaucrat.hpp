#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat &rhs);
		Bureaucrat& operator=(Bureaucrat &rhs);
		~Bureaucrat(void);

	private:
		const std::string _name;
		int _grade;

	public:
	
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		const std::string getName(void);
		int getGrade(void);
		void incerementGrade(void);
		void decerementGrade(void);
};

std::ostream	&operator<<(std::ostream &os, Bureaucrat &bk);

#endif