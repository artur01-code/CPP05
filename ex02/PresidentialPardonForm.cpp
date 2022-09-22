#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5), _target("default_target")
{

};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{

};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs) : Form(rhs), _target(rhs._target)
{
	std::cout << "PresidentialPardonForm copy constructor" << std::endl;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	delete this;
	PresidentialPardonForm *dings = new PresidentialPardonForm(rhs);
	dings->_target = rhs._target;
	std::cout << "PresidentialPardonForm copy assigment operator" << std::endl;
	return (*dings);
};

PresidentialPardonForm::~PresidentialPardonForm(void)
{

};

std::string PresidentialPardonForm::getTarget(void)
{
	return (_target);
};

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw PresidentialPardonForm::NotSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};
