#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreatationForm", 145, 137), _target("default_target")
{

};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreatationForm", 145, 137), _target(target)
{

};

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

};

std::string ShrubberyCreationForm::getTarget(void)
{
	return (_target);
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw ShrubberyCreationForm::NotSigned();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		std::ofstream outfile(this->_target + "_shrubbery");
		outfile << "                                                         ." << std::endl;
        outfile << "                                      .         ;  " << std::endl;
        outfile << "         .              .              ;%     ;;   " << std::endl;
        outfile << "           ,           ,                :;%  %;   " << std::endl;
        outfile << "            :         ;                   :;%;'     .,   " << std::endl;
        outfile << "   ,.        %;     %;            ;        %;'    ,;" << std::endl;
        outfile << "     ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
        outfile << "      %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
        outfile << "       ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
        outfile << "        `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
        outfile << "         `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
        outfile << "            `:%;.  :;bd%;          %;@%;'" << std::endl;
        outfile << "              `@%:.  :;%.         ;@@%;'   " << std::endl;
        outfile << "                `@%.  `;@%.      ;@@%;         " << std::endl;
        outfile << "                  `@%%. `@%%    ;@@%;        " << std::endl;
        outfile << "                    ;@%. :@%%  %@@%;       " << std::endl;
        outfile << "                      %@bd%%%bd%%:;     " << std::endl;
        outfile << "                        #@%%%%%:;;" << std::endl;
        outfile << "                        %@@%%%::;" << std::endl;
        outfile << "                        %@@@%(o);  . '         " << std::endl;
        outfile << "                        %@@@o%;:(.,'         " << std::endl;
        outfile << "                    `.. %@@@o%::;         " << std::endl;
        outfile << "                       `)@@@o%::;         " << std::endl;
        outfile << "                        %@@(o)::;        " << std::endl;
        outfile << "                       .%@@@@%::;         " << std::endl;
        outfile << "                       ;%@@@@%::;.          " << std::endl;
        outfile << "                      ;%@@@@%%:;;;. " << std::endl;
        outfile << "                  ...;%@@@@@%%:;;;;,..    Gilo69" << std::endl;
	}
}