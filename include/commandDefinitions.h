#ifndef COMMAND_DEFINITIONS_H
#define COMMAND_DEFINITIONS_H

#include <iostream>
#include <memory>
#include "command.h"

namespace InteractiveShell
{
    class WriteMyName : public Command
    {
        public:
            WriteMyName() { }
            virtual ~WriteMyName() { }

            void const operator()() override
            {
                std::cout << "My name is: " << "John Doe" << std::endl;
            }

    };

    class WriteMyAge : public Command
    {
        public:
            WriteMyAge() { }
            virtual ~WriteMyAge() { }

            void const operator()() override
            {
                std::cout << "My age is: " << 25 << std::endl;
            }
    };

    class WriteMyLocation : public Command
    {
        public:
            WriteMyLocation() { }
            virtual ~WriteMyLocation() { }

            void const operator()() override
            {
                std::cout << "My location is: " << "New York" << std::endl;
            }
    };

    class WriteMyOccupation : public Command
    {
        public:
            WriteMyOccupation() { }
            virtual ~WriteMyOccupation() { }

            void const operator()() override
            {
                std::cout << "My occupation is: " << "Software Engineer" << std::endl;
            }
    };

    class WriteMyHobbies : public Command
    {
        public:
            WriteMyHobbies() { }
            virtual ~WriteMyHobbies() { }

            void const operator()() override
            {
                std::cout << "My hobbies are: " << "Reading, Writing, and Coding" << std::endl;
            }
    };

    class WriteMyResume : public Command
    {
        public:
            WriteMyResume() { }
            virtual ~WriteMyResume() { }

            void const operator()() override
            {
                std::cout << "My resume is: " << "I have a Bachelor's degree in Computer Science and Engineering." << std::endl;
            }
    };
}


#endif // COMMAND_DEFINITIONS_H