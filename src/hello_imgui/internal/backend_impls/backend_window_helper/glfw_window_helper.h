#pragma once
#ifdef HELLOIMGUI_USE_GLFW

#include "backend_window_helper.h"


namespace HelloImGui { namespace BackendApi
{
    class GlfwWindowHelper: public IBackendWindowHelper
    {
        // Note: this is a fake class, it has no member
        // It is only a class in order to enforce a consistent API between backends.
    public:
        WindowPointer CreateWindow(AppWindowParams &info, const BackendOptions& backendOptions) override;

        std::vector<ScreenBounds> GetMonitorsWorkAreas() override;

        bool IsWindowIconified(WindowPointer window) override;
        void RaiseWindow(WindowPointer window) override;

        ScreenBounds GetWindowBounds(WindowPointer window) override;
        void SetWindowBounds(WindowPointer window, ScreenBounds windowBounds) override;
    };
}} // namespace HelloImGui { namespace BackendApi

#endif // #ifdef HELLOIMGUI_USE_GLFW
