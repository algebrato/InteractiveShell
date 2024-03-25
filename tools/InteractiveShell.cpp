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
			{"discovery_devices", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::DiscoveryDevices>());
				context.executeCommand();	
			}},

			{"connect_to_device", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::ConnectToDevice>());
				context.executeCommand();	
			}},

			{"disconnect_from_device", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::DisconnectFromDevice>());
				context.executeCommand();	
			}},

			{"send_configuration_to_device", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::SendConfigurationToDevice>());
				context.executeCommand();	
			}},

			{"open_video_stream", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::OpenVideoStream>());
				context.executeCommand();	
			}},

			{"open_audio_stream", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::OpenAudioStream>());
				context.executeCommand();	
			}},

			{"open_media_stream", [](){
				InteractiveShell::CommandContext context(std::make_unique<InteractiveShell::OpenMediaStream>());
				context.executeCommand();	
			}}

		};

	std::cout << "Interactive Shell -- Welcome!" << std::endl;
	while(true)
	{
		std::string command;
		std::cout << "$> ";
		std::cin >> command;
		
		if (command == "exit" || getchar() == EOF)
		{
			std::cout << "Exiting..." << std::endl;
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
