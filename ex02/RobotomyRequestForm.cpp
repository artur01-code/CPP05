#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequestForm", 72, 45), _target("default_target")
{

};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

};

RobotomyRequestForm::~RobotomyRequestForm(void)
{

};

std::string RobotomyRequestForm::getTarget(void)
{
	return (this->_target);
};

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw RobotomyRequestForm::NotSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		std::cout << "<<Makes some drilling noises>>" << std::endl;
		srand(time(NULL));
		int	n = rand() % 2;
		std::cout << n << std::endl;
		if (n == 1)
			std::cout << this->_target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
};
