#pragma once

#include <cstdint>

inline uintptr_t Screen_get_width() {
    return (uintptr_t) Il2CppGetMethodOffset("UnityEngine.CoreModule.dll", "UnityEngine", "Display", "get_systemWidth");
}

inline uintptr_t Screen_get_height() {
    return (uintptr_t) Il2CppGetMethodOffset("UnityEngine.CoreModule.dll", "UnityEngine", "Display", "get_systemHeight");
}

inline uintptr_t Screen_SetResolution() {
    return (uintptr_t) Il2CppGetMethodOffset("UnityEngine.CoreModule.dll", "UnityEngine", "Screen", "SetResolution", 3);
}

inline uintptr_t Screen_get_dpi() {
    return (uintptr_t) Il2CppGetMethodOffset("UnityEngine.CoreModule.dll", "UnityEngine", "Screen", "get_dpi");
}

class Screen {
public:
    static void SetResolution(int width, int height, bool fullscreen) {
        auto fn = reinterpret_cast<void(*)(int, int, bool)>(Screen_SetResolution());
        fn(width, height, fullscreen);
    }

    static int get_width() {
        auto fn = reinterpret_cast<int(*)()>(Screen_get_width());
        return fn();
    }

    static int get_height() {
        auto fn = reinterpret_cast<int(*)()>(Screen_get_height());
        return fn();
    }

    static int get_dpi() {
        auto fn = reinterpret_cast<float(*)()>(Screen_get_dpi());
        return fn();
    }
};
