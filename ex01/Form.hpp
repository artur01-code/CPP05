#ifndef FORM_H
# define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(void);
		Form(std::string name, const int gradeToSign, const int gradeToExecute);
		~Form(void);

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
	
	public:
		std::string getName(void);
		bool getSigned(void);
		void setSigned(bool val);
		int getGradeToSign(void);
		int getGradeToExecute(void);
		void beSigned(const Bureaucrat &bk);
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif