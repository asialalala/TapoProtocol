#include "Discover.hpp"
#include "DiscoverProtocol.hpp"

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

    asio::io_context io_context;
    // DiscoverProtocol protocol(m_target, m_onDiscovered, m_discoveryPackets, m_interface, m_onUnsupported, m_credentials, m_timeout, m_discoveryTimeout, m_port);
    auto protocol = std::make_shared<DiscoverProtocol>(m_target, m_onDiscovered, m_discoveryPackets, m_interface, m_onUnsupported, m_credentials, m_timeout, m_discoveryTimeout, m_port);
    // Create transport object and run protocol
    io_context.run();

    return discoveredDevices;
};
