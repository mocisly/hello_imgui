#pragma once
#include <string>

namespace HelloImGui
{


// @@md#RemoteParams

// RemoteParams is a struct that contains the settings for displaying the application on a remote device.
// using https://github.com/sammyfreg/netImgui
// or using https://github.com/ggerganov/imgui-ws
// This will only work if the application is compiled with the option -DHELLOIMGUI_WITH_NETIMGUI=ON
// Highly experimental and not supported. Requires a specific version of netImgui, which is not published.
struct RemoteParams
{
    bool enableRemoting = false;

    //
    // Params used only by imgui-ws
    //
    int wsPort = 5003;


    //
    // Params used only by netImgui
    //
    bool exitWhenServerDisconnected = false;
    double durationMaxDisconnected = 30.0;

    // The server host (if empty, will use "localhost")
    // The server is the app that simply displays the application on a remote device
    std::string serverHost = "localhost";
    // The server port (default is 8888)
    uint32_t serverPort = 8888;

    // If true, transmit the window size to the server
    bool transmitWindowSize = false;
};

// @@md


}  // namespace HelloImGui