class CfgPatches
{
    class w35_aceax
    {
        author="McKendrick";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","tweed_aegis_21_cfg"};
        skipWhenMissingDependencies=1;
    };
};

class XtdGearModels
{
    class CamoBase;
    class SleevesBase;
    
    class CfgWeapons
    {
       #include "models\vests.hpp"
       #include "models\uniforms.hpp"
       #include "models\headgear.hpp"
    };
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "infos\vests.hpp"
        #include "infos\uniforms.hpp"
        #include "infos\headgear.hpp"
    };
};
