/*
    Discover help discover and configure devices in the network.
*/
#pragma once

#include <iostream>
#include <vector>
#include <map>

#include "Device.hpp"

#define DISCOVERY_PORT 9999
#define DISCOVERY_QUERY                \
    {                                  \
        "system",                      \
        {                              \
            {                          \
                "get_sysinfo", nullptr \
            }                          \
        }                              \
    }

typedef std::map<std::string, std::map<std::string, Device>> DeviceDict;
class Discover
{
private:
    /* data */
public:
    Discover(/* args */);
    ~Discover();
    Device DiscoverDevices(
        std::string pwassword,
        std::string mail,
        int port,
        int timeout,
        std::string target = "255.255.255.255",
        int discoveryTimeout = 5,
        int discoveryPackets = 3);
};
