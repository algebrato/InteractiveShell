#include <command.h>
#include <commandContext.h>
#include <commandDefinitions.h>

#include <unordered_map>
#include <map>
#include <memory>
#include <functional>





int main()
{
	std::unordered_map<std::string, std::function<void()>> commands = {
			{"name", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::WriteMyName>());
				context.executeCommand();	
			}},
			{"age", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::WriteMyAge>());
				context.executeCommand();
			}},

			{"location", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::WriteMyLocation>());
				context.executeCommand();
			}},

			{"occupation", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::WriteMyOccupation>());
				context.executeCommand();
			}},

			{"hobbies", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::WriteMyHobbies>());
				context.executeCommand();
			}}

		};

	std::cout << "Interactive Shell -- Welcome!" << std::endl;
	while(true)
	{
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		
		if (command == "exit")
		{
			break;
		}
		
		auto it = commands.find(command);
		if (it != commands.end())
		{
			it->second();
		} else {
			std::cout << "Command not found." << std::endl;
		}

	}

	return 0;
}
