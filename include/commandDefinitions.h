#ifndef COMMAND_DEFINITIONS_H
#define COMMAND_DEFINITIONS_H

#include <iostream>
#include <memory>
#include "command.h"

namespace InteractiveShell
{
    class DiscoveryDevices : public Command
    {
    public:
        DiscoveryDevices() = default;
        void const operator()() override;
    };

    class ConnectToDevice : public Command
    {
    public:
        ConnectToDevice() = default;
        void const operator()() override;
    };

    class DisconnectFromDevice : public Command
    {
    public:
        DisconnectFromDevice() = default;
        void const operator()() override;
    };

    class SendConfigurationToDevice : public Command
    {
    public:
        SendConfigurationToDevice() = default;
        void const operator()() override;
    };

    class OpenVideoStream : public Command
    {
    public:
        OpenVideoStream() = default;
        void const operator()() override;
    };

    class OpenAudioStream : public Command
    {
    public:
        OpenAudioStream() = default;
        void const operator()() override;
    };

    class OpenMediaStream : public Command
    {
    public:
        OpenMediaStream() = default;
        void const operator()() override;
    };

}


#endif // COMMAND_DEFINITIONS_H