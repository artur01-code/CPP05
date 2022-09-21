#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	if (this->_gradeToSign < 1)
		throw Form::GradeTooLowException();
	else if (this->_gradeToSign > 150)
		throw Form::GradeTooHighException();
	std::cout << "Form default constructor" << std::endl;
};

Form::Form(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (this->_gradeToSign < 1)
		throw Form::GradeTooLowException();
	else if (this->_gradeToSign > 150)
		throw Form::GradeTooHighException();
	std::cout << "Form default constructor with attributes" << std::endl;
};

Form::~Form(void)
{
	std::cout << "Form default destructor" << std::endl;
};

const char* Form::GradeTooHighException::what() const throw()
{
	return ("* Grade too high *");
};

const char* Form::GradeTooLowException::what() const throw()
{
	return ("* Grade too low *");
};

const char* Form::NotSigned::what() const throw()
{
	return ("* Form not signed *");
};

std::string Form::getName(void) const
{
	return (this->_name);
};

bool Form::getSigned(void) const
{
	return (this->_signed);
};

void Form::setSigned(bool val)
{
	this->_signed = val;
}

int Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
};

int Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
};

void Form::beSigned(const Bureaucrat &bk)
{	
	if (bk.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	else if (bk.getGrade() < this->getGradeToSign())
		throw Form::GradeTooHighException();
	else
		this->setSigned(true);
}

std::ostream	&operator<<(std::ostream &os, Form &form)
{
	os << form.getName() << ", form is signed " << form.getSigned() << " and needs grade " << form.getGradeToSign() << " to sign and " << form.getGradeToExecute() << " to execute." << std::endl;
	return (os);
};