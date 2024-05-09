#define COMPONENT exmaple
#define COMPONENT_BEAUTIFIED Example
#include "\z\TAG\addons\example\script_mod.hpp"

// #define DEBUG_MODE_FULL
#define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_EXAMPLE
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_EXAMPLE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_EXAMPLE
#endif

#include "\z\TAG\addons\main\script_macros.hpp"
