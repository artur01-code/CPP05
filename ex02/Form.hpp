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
		Form(const Form &rhs);
		Form &operator=(const Form &rhs);
		virtual ~Form(void);

	private:
		const std::string _name;
		bool _signed;
		const int _gradeToSign;
		const int _gradeToExecute;
	
	public:
		std::string getName(void) const;
		bool getSigned(void) const;
		void setSigned(bool val);
		int getGradeToSign(void) const;
		int getGradeToExecute(void) const;
		void beSigned(const Bureaucrat &bk);
		virtual void execute(Bureaucrat const & executor) const = 0;
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
		class NotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, Form &form);

#endif