/*
    Discover help discover and configure devices in the network.
*/
#pragma once
#include <iostream>
#include <vector>

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

class Discover
{
private:
    /* data */
public:
    Discover(/* args */);
    ~Discover();
    void DiscoverDevices(int onDiscovered,
                         int interface,
                         int onUnsupported,
                         int credentials,
                         int port,
                         int timeout,
                         std::string target = "255.255.255.255",
                         int discoveryTimeout = 5,
                         int discoveryPackets = 3);
};
