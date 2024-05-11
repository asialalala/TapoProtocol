/*
    Discover help discover and configure devices in the network.
*/
#pragma once

#include <asio.hpp>
#include <chrono>
#include <functional>
#include <iostream>
#include <map>
#include <vector>
#include <string>


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

class Discover
{
public:
    Discover();
    ~Discover();
    static DeviceDict discover(
        std::function<void(Device)> onDiscovered,
        std::function<void(UnsupportedDeviceError)> onUnsupported,
        Credentials* credentials,
        const std::string &target = "255.255.255.255",
        int discoveryTimeout = 5,
        int port = 9999,
        int timeout = 0,
        const std::string &interface = "",
        int discoveryPackets = 3)
    {

        DeviceDict discoveredDevices;
        std::vector<UnsupportedDeviceError> unsupportedDevices;
        std::mutex mutex;

        // Implementation of device discovery logic
        // Use on_discovered callback for discovered devices
        // Use on_unsupported callback for unsupported devices
        // Populate discovered_devices map with discovered devices

        return discoveredDevices;
    }
};