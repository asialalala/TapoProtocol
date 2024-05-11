#pragma once
#include <iostream>
#include <map>

class Device
{
private:
    /* data */
public:
    Device(/* args */);
    ~Device();
};

typedef std::map<std::string, Device> DeviceDict;

/**
 * @brief Credential to autorizate connection with tapo devices
 *
 */
class Credentials
{
public:
    Credentials(std::string username, std::string password)
        : m_username(std::move(username)), m_password(std::move(password)) {}

    // Implement getters for username and password if needed

private:
    std::string m_username;
    std::string m_password;
};

/**
 * @brief Error for unsuported devices
 * 
 */
class UnsupportedDeviceError {
public:
    UnsupportedDeviceError(std::string message, Device discoveryResult)
        : m_message(std::move(message)), m_discoveryResult(std::move(discoveryResult)) {}

    // Implement getters for message and discovery_result if needed

private:
    std::string m_message;
    Device m_discoveryResult;
};