#include <commandContext.h>

namespace InteractiveShell
{
    CommandContext::CommandContext(std::unique_ptr<Command>&& command)
        : m_command(std::move(command))
    {
        // std::cout << "CommandContext CTOR called." << std::endl;
    }

    CommandContext::~CommandContext()
    {
        // std::cout << "CommandContext DTOR called." << std::endl;
    }

    void CommandContext::setCommand(std::unique_ptr<Command>&& command)
    {
        m_command = std::move(command);
    }

    void CommandContext::executeCommand()
    {
        if (m_command)
        {
            (*m_command)();
        } else {
            std::cout << "No command to execute." << std::endl;
        }
    }
}