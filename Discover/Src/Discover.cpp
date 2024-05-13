#include "Discover.hpp"

Discover::Discover(std::function<void(Device)> onDiscovered,
                   std::function<void(UnsupportedDeviceError)> onUnsupported,
                   Credentials *credentials,
                   const std::string &target,
                   int discoveryTimeout,
                   int port,
                   int timeout,
                   const std::string &interface,
                   int discoveryPackets) : m_target(target),
                                           m_onDiscovered(onDiscovered),
                                           m_discoveryPackets(discoveryPackets),
                                           m_interface(interface),
                                           m_onUnsupported(onUnsupported),
                                           m_credentials(credentials),
                                           m_timeout(timeout),
                                           m_discoveryTimeout(discoveryTimeout),
                                           m_port(port)

{
    m_discoveredDevices = {};
}

Discover::~Discover()
{
}

DeviceDict Discover::discover()
{

    DeviceDict discoveredDevices;
    std::vector<UnsupportedDeviceError> unsupportedDevices;
    std::mutex mutex;

    // Implementation of device discovery logic
    // Use on_discovered callback for discovered devices
    // Use on_unsupported callback for unsupported devices
    // Populate discovered_devices map with discovered devices

    return discoveredDevices;
};
