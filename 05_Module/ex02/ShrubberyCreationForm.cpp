#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	(void)obj;
	return (*this);
}

std::ostream			&operator<<(std::ostream &out, const ShrubberyCreationForm &obj)
{
	out << obj.get_name() << " -name " << obj.get_sign_status() << "-sign_status " <<  obj.get_requred_exec() << "-requred_exec ";
  	out <<  obj.get_requred_sign() << "-requred_sign " << obj.get_target() <<"-target" << std::endl;
  	return (out);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);

		std::ofstream out((get_target() + "_shrubbery").c_str());

		if (!out.is_open())
		{
			std::cout << "File not open!" << std::endl;
		}
		else
		{
			out << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWN00XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWXkdlc;;cloddxkk0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWOl:;;:ccccc:;;,;,;:o0NKkk0NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMWNNXK0O00XK:.;:;;;,,;:ccccccc:'';,...xWMMWNKOdllloONMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMXdcccc:;;;::;'',,,,,,,;:cccccccc;,,,,'.;dollc:;;:c:'.:0MMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMNKOOOc'clcclccccc:::::;,,,;cccccccccc:;,,,;;,,,;;;:::::;'..;XMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMWKdc:;;;;:ccccccccccccccc;,,,,;:::::::::;,,,,,,,,,,,,,,,,,'...'OMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMWx,;cccccccccc:;;,,,,;;;;,,,;;:;;,,,,,,,,,,,,,,,,,,,,,,,,,'.....kMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMNc.:ccccccc::;,,,,,,,,,;;;::ccccc:,,,,,,,,,,,,,,,,,,''''........kMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMWx'',,,,;;,,,,,,,,,,;::ccccccccccc;,,,,,,,,,,,,;;;,,'.........'oOOkxxKWMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMWXd'',,,,,,,,,,,,,,,;:ccccccccccccc;,,,,,,,;:::ccccc:;;;;;;;;'';:;,,,''xWMMMMMMMMMMMMMMM\nMMMMMMMMMMNkl:;:c::::;;;:::::::cccccccccccccc:;,,,,,,,;::::::ccccccccccccccccccc:''xWMMMMMMMMMMMMMMM\nMMMMMMMMMKl,:cccccccccccccccccccccccccccc:;,,''',,''.......';:cc:::::::ccccccccc,.:ONMMMMMMMMMMMMMMM\nMMMMMMMMMx,:cc::cccccccc:;::ccccccccc::;,,,.....''... .. ....;;,,,,,,,,,;;:cccccc:,,:0WMMMMMMMMMMMMM\nMMMMMMMMMK:';,,,,,;:::;,,,,,:cccccc:;,,,,,'. ...'.....,'... .',,,,,,,,,,,,,;ccccccc:.lWMMMMMMMMMMMMM\nMMMMMMMMMMKo,',,,,,,,,,,,,,,;:cccc;'''','..  ....':c'.'....,c'.,,,'''''',,,:cccccccc''OMMMMMMMMMMMMM\nMMMMMMMMMMMWKl'',,,,,,,,''''',,,,'....',......'clkXd. ...,oo:..........;::ccccccccc:,.;xNMMMMMMMMMMM\nMMMMMMMMMMMMMNo.,;,,,,,''........... ,OO;.'. .dWWX0:....lXx.......;;'..cccc::;;;:;;,''..;0WMMMMMMMMM\nMMMMMMMMMMMKdl:;cc:::;,,,'........  ..dO;,:' ;XM0:..'..oWMXo. ...ok;.',,:c:,,,,,,'''.... :XMMMMMMMMM\nMMMMMMMMMMWo':cccccccc:;,,,'......  ..;x:,;,.:XO,.,,..oNMMXl.....;.,xXx.,c;,,,,,'......;o0WMMMMMMMMM\nMMMMMMMMMMMx,;ccccccccc;,,'............::,;;.'l,.,,..oNMMXc.',.  .lKKo,',,',,,,'.......kMMMMMMMMMMMM\nMMMMMMMMMMO;,ccccccccc:,,'....','.... ...;:;....,. .oNMMKc.';'. 'kNK;..'....'..........oMMMMMMMMMMMM\nMMMMMMMMMM0:,:cccc::;;,,'''''''''.... ...,::,..,...oNMMK:.;;,. ;KMMNk:.................lWMMMMMMMMMMM\nMMMMMMMMMMMNd,:ccccc:::;,,,,''''....   .;,;:;;;,.'o0MM0;.;;;'..OMMMMMW0l;,'............oMMMMMMMMMMMM\nMMMMMMMMMMMMWk:;:ccccccc:;,,,,,,'..... .,,;:;;;'.:0XWk,':;;,..oWMMMMMMMWN0:..... ....;oXMMMMMMMMMMMM\nMMMMMMMMMMMMMMXx:,:ccccccccc:;,,'...... .,;:;;,..oWNd'':;;,..cNMMMMMMMMMM0:';cxkocld0NMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMXc'ccccccccccc:,'.........',::;,..oOc.';;;,..:XMMMMMMMMMMMMNXWMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMNc'cc:::::cccc:',c:..'... .,;:;,.....,;;;,..:XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMM0ollc,.'',;;,'.'dXx..'.. .;;:;;,.',,,,;,..:XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMWN0xkl'......cXNc.'.  '::c:;;;,'..,;'.,0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMWKkdodx0NWNc.,. .;clc:;;;. ..,'..kWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc.;. .;:cc;;:'    ...lWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMx.';.,;;:c;;:.    . ;KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMX;.;:;;;::;;:.   ...xMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk..;;;;::;;:'. .. ,KMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNc.,;,;;:;;;;,,,. :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk..;,,;:;;;;;;;. :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0'.;,,,;;;;;;;;. ;XMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM0'.;;,,;;;,;;;;' '0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMk..c:,,;;;,,;;;'..kMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd.,l:,,;;;,,;;;,..oWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWc.;c,',;;;;',;;,. :NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMK,.:;'',;;;;,,;;,' '0MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWO;';,..,;;;;;;,',;'..;ONMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKkl,';'..,;;,'''',,;;,....;colllldOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxl;'..''.''';clodxxdolc;,'....',;::cldkKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMW0xoloolodxkOOO0KNMMMMMMMMWXklc:,,:ldxkOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMNXNMMMMMMMMMMMMMMMMMMMMMMMMMMMWNXKXXK000XWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\nMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n";
		}
		out.close();
	}
	catch(std::exception &exception)
	{
	}
}
