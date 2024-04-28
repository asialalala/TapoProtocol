add_library(Discover Src/Discover.cpp Src/DiscoverProtocol.cpp)

target_include_directories(Discover PUBLIC Inc ../Device/Inc)
