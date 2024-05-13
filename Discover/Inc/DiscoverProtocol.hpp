/*
    Implementation of the discovery protocol handler.
*/

#pragma once
#include "Device.hpp"
#include <asio.hpp>

class DiscoverProtocol
{
private:
    /* data */
    std::string m_target;
    std::function<void(Device)> m_onDiscovered;
    int m_discoveryPackets;
    std::string m_interface;
    std::function<void(UnsupportedDeviceError)> m_onUnsupported;
    Credentials* m_credentials;
    int m_timeout;
    int m_discoveryTimeout;
    int m_port;

public:
    DiscoverProtocol(const std::string &target, std::function<void(Device)> onDiscovered,
                     int discoveryPackets, const std::string &interface,
                     std::function<void(UnsupportedDeviceError)> onUnsupported, Credentials *credentials,
                     int timeout, int discoveryTimeout, int port) : m_target(target),
                                                                    m_onDiscovered(onDiscovered),
                                                                    m_discoveryPackets(discoveryPackets),
                                                                    m_interface(interface),
                                                                    m_onUnsupported(onUnsupported),
                                                                    m_credentials(credentials),
                                                                    m_timeout(timeout),
                                                                    m_discoveryTimeout(discoveryTimeout),
                                                                    m_port(port)
    {
    }
    ~DiscoverProtocol();
};

