class w35_V_tweed
{
    label = "[W35] Body Armor";
    options[] = { "camo", "ammo", "variant" };

    class camo
    {
        label = "Camo";
        values[] = { "OCP", "Olive Drab", "Woodland" };
        alwaysSelectable = 1;
        changeInGame = 0;
    };

    class ammo
    {
        label = "Ammo Type";
        values[] = { "Standard", "MX" };
        alwaysSelectable = 1;
        changeInGame = 0;
    };

    class variant
    {
        label = "Variant";
        values[] = { 
            "Base",
            "Standard #1", "Standard #2", "Standard #3", "Standard #4", "Standard #5",
            "MG", "SAW", "40mm #1", "40mm #2", "40mm #3", 
            "PRC #1", "PRC #2", "Sidearm #1", "Sidearm #2"
        };
        alwaysSelectable = 1;
        changeInGame = 0;
    };
};
