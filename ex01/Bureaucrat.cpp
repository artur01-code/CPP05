#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat default constructor" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat default constructor with attributes" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name), _grade(rhs._grade)
{
	std::cout << "Bureaucrat default copy constructor" << std::endl;
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &rhs)
{
	delete this;
	Bureaucrat *dings = new Bureaucrat(rhs);
	std::cout << "Bureaucrat copy assigment operator" << std::endl;
	return (*dings);
};

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat default destructor" << std::endl;
};

const std::string Bureaucrat::getName(void) const
{
	return (this->_name);
};

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
};

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("* Grade too High *");
};

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("* Grade too Low *");
};

void Bureaucrat::decerementGrade(void)
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	std::cout << "Bureaucrat increment grade to " << this->getGrade() << std::endl;
};

void Bureaucrat::incerementGrade(void)
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;	
	std::cout << "Bureaucrat decrement grade to " << this->getGrade() << std::endl;
};

void Bureaucrat::signForm(Form *form)
{
	try
	{
		form->beSigned(*this);
		std::cout << this->getName() << " signed " << form->getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " couldn't sign " << form->getName() << " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat &bk)
{
	os << bk.getName() << ", bureaucrat grade " << bk.getGrade() << std::endl;;
	return (os);
};