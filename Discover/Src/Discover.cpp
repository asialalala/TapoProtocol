#include "Discover.hpp"

Discover::Discover()
{
}

Discover::~Discover()
{
}

Device Discover::DiscoverDevices(std::string pwassword,
                               std::string mail,
                               int port,
                               int timeout,
                               std::string target,
                               int discoveryTimeout,
                               int discoveryPackets)
{
    Device* device = new (Device);
    return *device;
}
