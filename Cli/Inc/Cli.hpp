#pragma once

#include <iostream>
#include <map>
#include <vector>

#include "Device.hpp"

/**
 * @brief User interface to comunicate with tapo device
 *
 */
class Cli
{
public:
    std::map<std::string, Device> discover(std::string tar, std::string usr, std::string pass, int disTimeout, int time, int por)
    {
        std::string target = tar;
        std::string username = usr;
        std::string password = pass;
        int discoveryTimeout = disTimeout;
        int timeout = time;
        int port = por;

        Credentials *credentials = nullptr;
        if (!username.empty() && !password.empty())
        {
            credentials = new Credentials(username, password);
        }

        std::cout << "Discovering devices on " << target << " for " << discoveryTimeout << " second." << std::endl;
        std::function<void(Device)> printDisc= printDiscovered;
        std::function<void(UnsupportedDeviceError)> printUnSupp= printUnsupported;

        Discover discover(
            printDisc,
            printUnSupp,
            credentials, target, 
            discoveryTimeout,
            port, timeout);
        std::map<std::string, Device> discoveredDevices = discover.discover();

        delete credentials;

        return discoveredDevices;
    }

private:
    static void printDiscovered(Device dev)
    {
        // Implementation of print_discovered callback
    }

    static void printUnsupported(UnsupportedDeviceError error)
    {
        // Implementation of print_unsupported callback
    }
};

