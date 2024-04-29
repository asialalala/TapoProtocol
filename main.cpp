#include <iostream>
#include "Device.hpp"
#include "Discover.hpp"


enum deviceType {
    smartBulb
};

void cli()
{

}

void asyncWrappedDevice()
{

}

void wifi()
{

}

void scan()
{
    
}

void join()
{

}

void discover()
{
    std::cout << "Device discovering..." << std::endl;
    std::string target = "255.255.255.255"; // subnet mask
    std::string username = "asklas@op.pl";
    std::string password = "asia2002";
    int  discoveryTimeout = 3;
    int timeout = 1;
    int port = 80;

    std::cout <<  "Discovering devices on " << target << " for " <<  discoveryTimeout << " second." << std::endl;
    Discover discover;
    Device device = discover.DiscoverDevices(password, username, port, timeout, target, discoveryTimeout);

}

void printUnsupported()
{

}
void printDiscovered()
{

}

void echoDictionary()
{

}

void echoDictionaryInfo()
{

}

void findHostFromAlias()
{

}

void sysinfo()
{

}

void echoFeatures()
{

}

void echoAllFeatures()
{
    
}

void state()
{

}

void alias()
{

}

void rawCommand()
{

}

void cmdCommand()
{

}

void emeter()
{

}

void usage()
{

}

void brightness()
{

}

void temperature()
{

}

void effect()
{

}

void hsv()
{

}

void led()
{

}
void time()
{

}

void on()
{
    
}
void off()
{
    
}

void toggle()
{
    
}

void reboot()
{
    
}

void schedule()
{
    
}

void scheduleList()
{
    
}

void deletRule()
{

}

void presents()
{
    
}

void presentsList()
{
    
}

void presentsModify()
{
    
}

void turnOnBehavior()
{
    
}

void updateCredentials()
{

}

void shell()
{

}

void feature()
{

}

void printFeature()
{

}


int main(int argc, char *argv[])
{
    discover();
}
