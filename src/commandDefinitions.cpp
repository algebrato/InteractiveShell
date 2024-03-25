#include "commandDefinitions.h"

using namespace InteractiveShell;

const void DiscoveryDevices::operator()()
{
    std::cout << "DiscoveryDevices" << std::endl;
}

const void ConnectToDevice::operator()()
{
    std::cout << "ConnectToDevice" << std::endl;
}

const void DisconnectFromDevice::operator()()
{
    std::cout << "DisconnectFromDevice" << std::endl;
}

const void SendConfigurationToDevice::operator()()
{
    std::cout << "SendConfigurationToDevice" << std::endl;
}

const void OpenVideoStream::operator()()
{
    std::cout << "OpenVideoStream" << std::endl;
}

const void OpenAudioStream::operator()()
{
    std::cout << "OpenAudioStream" << std::endl;
}

const void OpenMediaStream::operator()()
{
    std::cout << "OpenMediaStream" << std::endl;
}

