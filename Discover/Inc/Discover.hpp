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
    Discover(std::function<void(Device)> onDiscovered,
              std::function<void(UnsupportedDeviceError)> onUnsupported,
              Credentials *credentials,
              const std::string &target = "255.255.255.255",
              int discoveryTimeout = 5,
              int port = 9999,
              int timeout = 0,
              const std::string &interface = "",
              int discoveryPackets = 3);
    ~Discover();
    DeviceDict discover();

private:
    std::string m_target;
    std::function<void(Device)> m_onDiscovered;
    int m_discoveryPackets;
    std::string m_interface;
    std::function<void(UnsupportedDeviceError)> m_onUnsupported;
    Credentials *m_credentials;
    int m_timeout;
    int m_discoveryTimeout;
    int m_port;
    std::map<std::string, Device> m_discoveredDevices;
};