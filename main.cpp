#include <iostream>

#include "Device.hpp"
#include "Discover.hpp"
#include "Cli.hpp"

enum deviceType
{
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
    Cli client;
    client.discover("255.255.255.255", "asklas@op.pl", "asia2002", 3, 1, 80);
}
