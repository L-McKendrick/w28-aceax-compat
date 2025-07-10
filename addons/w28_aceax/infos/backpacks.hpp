class w28_B_wasser_molle_aceax
{
	model = "w28_B_wasser_molle";
};

class B_tweed_pack_wasser_molle_ocp       : w28_B_wasser_molle_aceax { camo = "OCP";   style = "Ready"; };
class B_tweed_pack_wasser_molle_ocp_alt   : w28_B_wasser_molle_aceax { camo = "OCP";   style = "Stowed"; };

class B_tweed_pack_wasser_molle_od7       : w28_B_wasser_molle_aceax { camo = "Green"; style = "Ready"; };
class B_tweed_pack_wasser_molle_od7_alt   : w28_B_wasser_molle_aceax { camo = "Green"; style = "Stowed"; };

class B_tweed_pack_wasser_molle_od3       : w28_B_wasser_molle_aceax { camo = "Tan";   style = "Ready"; };
class B_tweed_pack_wasser_molle_od3_alt   : w28_B_wasser_molle_aceax { camo = "Tan";   style = "Stowed"; };

class w28_B_camel_thermos_aceax
{
	model = "w28_B_camel_thermos";
};

class B_tweed_pack_camel_thermos_ocp : w28_B_camel_thermos_aceax { camo = "OCP"; };
class B_tweed_pack_camel_thermos_od7 : w28_B_camel_thermos_aceax { camo = "Green"; };
class B_tweed_pack_camel_thermos_od3 : w28_B_camel_thermos_aceax { camo = "Tan"; };

class w28_B_simc_asspack_aceax
{
	model = "w28_B_simc_asspack";
};

// Camelbak Hydro
class B_simc_US_Molle_asspack_OCP_thermos_OCP : w28_B_simc_asspack_aceax { variant = "Camelbak"; camo = "OCP"; position = "Standard"; };
class B_simc_US_Molle_asspack_OCP_thermos_od7 : w28_B_simc_asspack_aceax { variant = "Camelbak"; camo = "Green"; position = "Standard"; };
class B_simc_US_Molle_asspack_OCP_thermos_od3 : w28_B_simc_asspack_aceax { variant = "Camelbak"; camo = "Tan"; position = "Standard"; };

// No hydro pack
class B_simc_US_Molle_asspack_OCP       : w28_B_simc_asspack_aceax { variant = "None"; position = "Standard"; };
class B_simc_US_Molle_asspack_OCP_low   : w28_B_simc_asspack_aceax { variant = "None"; position = "Low"; };

// MOLLE Hydro
class B_simc_US_Molle_asspack_OCP_wasser : w28_B_simc_asspack_aceax { variant = "MOLLE"; camo = "OCP"; position = "Standard"; };

class w28_B_simc_sturm_aceax
{
	model = "w28_B_simc_sturm";
};

// No hydro
class B_simc_US_Molle_sturm_OCP        : w28_B_simc_sturm_aceax { variant = "None";     equipment = "Standard"; };
class B_simc_US_Molle_sturm_OCP_RTO    : w28_B_simc_sturm_aceax { variant = "None";     equipment = "Radio"; };
class B_simc_US_Molle_sturm_OCP_etool  : w28_B_simc_sturm_aceax { variant = "None";     equipment = "Etool"; };

// Camelbak hydro
class B_simc_US_Molle_sturm_OCP_thermos_OCP : w28_B_simc_sturm_aceax { variant = "Camelbak"; camo = "OCP";   equipment = "Standard"; };
class B_simc_US_Molle_sturm_OCP_thermos_od7 : w28_B_simc_sturm_aceax { variant = "Camelbak"; camo = "Green"; equipment = "Standard"; };
class B_simc_US_Molle_sturm_OCP_thermos_od3 : w28_B_simc_sturm_aceax { variant = "Camelbak"; camo = "Tan";   equipment = "Standard"; };
class B_simc_US_Molle_sturm_OCP_RTO_wasser  : w28_B_simc_sturm_aceax { variant = "Camelbak"; camo = "Tan";   equipment = "Radio"; };
