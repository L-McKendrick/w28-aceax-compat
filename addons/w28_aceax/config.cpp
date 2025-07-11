class CfgPatches
{
    class w28_aceax
    {
        author="McKendrick";
        requiredVersion=0.1;
        units[]={};
        weapons[]={};
        requiredAddons[]={"aceax_gearinfo","tweed_uaf_21_cfg"};
        skipWhenMissingDependencies=0;
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
        #include "models\nvgs.hpp"
    };

    class CfgGlasses
    {
        #include "models\glasses.hpp"
    };
    
    class CfgVehicles
    {
        #include "models\backpacks.hpp"
    }
};

class XtdGearInfos
{
    class CfgWeapons
    {
        #include "infos\vests.hpp"
        #include "infos\uniforms.hpp"
        #include "infos\headgear.hpp"   
        #include "infos\nvgs.hpp"
    };

    class CfgGlasses
    {
        #include "infos\glasses.hpp"
    };

    class CfgVehicles
    {
        #include "infos\backpacks.hpp"
    }
};
