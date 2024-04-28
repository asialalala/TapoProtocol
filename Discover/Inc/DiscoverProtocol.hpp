/*
    Implementation of the discovery protocol handler.
*/

#pragma once
#define  DISCOVERY_START_TIMEOUT 1

class DiscoverProtocol
{
private:
    /* data */
    int m_transport;
    int m_discoveryPackets;
    int m_interface;
    int m_onDiscovered;
    int m_port;
    int m_discoveryPort;
    int timeout;

public:
    DiscoverProtocol(/* args */);
    ~DiscoverProtocol();
};

DiscoverProtocol::DiscoverProtocol(/* args */)
{
}

DiscoverProtocol::~DiscoverProtocol()
{
}
