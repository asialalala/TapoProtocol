add_library(Discover 
    Src/Discover.cpp 
    Src/DiscoverProtocol.cpp
)
# set(ASIO_DIR /usr/local/opt/asio)

target_include_directories(Discover PUBLIC 
    Inc 
    ../Device/Inc
    /usr/local/include
)

# target_link_libraries(Discover
#     PRIVATE 
#     ${ASIO_DIR}
# )
