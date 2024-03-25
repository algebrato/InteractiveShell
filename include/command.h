#ifndef COMMAND_H
#define COMMAND_H

#include <iostream>

namespace InteractiveShell
{
    class Command
    {
        public:
            Command() {  };
            virtual ~Command() {  };

            virtual void const operator()() = 0;
    };
}

#endif // COMMAND_H
