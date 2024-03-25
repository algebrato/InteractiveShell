#ifndef COMMAND_CONTEXT_H
#define COMMAND_CONTEXT_H

#include <memory>
#include <iostream>
#include "command.h"

namespace InteractiveShell
{
    class CommandContext
    {
        public:
            explicit CommandContext(std::unique_ptr<Command>&& command = {});
            virtual ~CommandContext();

            void setCommand(std::unique_ptr<Command>&& command);

            void executeCommand();

        private:
            std::unique_ptr<Command> m_command;

    };
}

#endif // COMMAND_CONTEXT_H