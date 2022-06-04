#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("name", 145, 137)
{
    std::cout << "Default constructor called. ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 145, 137)
{
    std::cout << "Constructor with param called. ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & ref): Form(ref)
{
    std::cout << "Copy constructor called. ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Default destructor called. ShrubberyCreationForm was deleted" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	(void)ref;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    Form::execute(executor);
    std::ofstream file(this->getName() + "_shrubbery");
    file << "                                                         ."<< std::endl;
    file << "                                              .         ; "<< std::endl;
    file << "                 .              .              ;%     ;; " << std::endl;
    file << "                   ,           ,                :;%  %;   "<< std::endl;
    file << "                    :         ;                   :;%;'     ., "<< std::endl;
    file << "           ,.        %;     %;            ;        %;'    ,;"<< std::endl;
    file << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    file << "              %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl;
    file << "               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    file << "                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    file << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    file << "                    `:%;.  :;bd%;          %;@%;'      " << std::endl;
    file << "                        `@%.  `;@%.      ;@@%;    "   << std::endl;
    file << "                          `@%%. `@%%    ;@@%;     "    << std::endl;
    file << "                            ;@%. :@%%  %@@%;     "   << std::endl;
    file << "                                #@%%%%%:;;" << std::endl;
    file << "                                %@@%%%::;" << std::endl;
    file << "                                %@@@o%;:(.,'    "   << std::endl;
    file << "                            `.. %@@@o%::;      "    << std::endl;
    file << "                               `)@@@o%::;     "    << std::endl;
    file << "                               .%@@@@%::;    "      << std::endl;
    file << "                               ;%@@@@%::;.   "       << std::endl;
    file << "                          ...;%@@@@@%%:;;;;,..    " << std::endl;
}