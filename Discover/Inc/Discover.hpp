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

class Discover {
public:
    Discover();
    ~Discover();
    static DeviceDict discover(
        std::string target, int discoveryTimeout,
        std::function<void(Device)> onDiscovered,
        std::function<void(UnsupportedDeviceError)> onUnsupported,
        int port, int timeout, Credentials* credentials) {

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