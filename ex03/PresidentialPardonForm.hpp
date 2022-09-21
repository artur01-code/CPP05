#ifndef PRESIDENTIALPARADONFORM_HPP
# define PRESIDENTIALPARADONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);

	private:
		std::string _target;
	
	public:
		std::string getTarget(void);
		virtual void execute(Bureaucrat const & executor) const;
};

#endif