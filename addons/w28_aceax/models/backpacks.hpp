class BackpackCamoBase : CamoBase
{
	values[] = { "OCP", "OD", "CYT" };
};

class w28_B_wasser_molle
{
	label = "[W28] MOLLE Hydration 3L";
	options[] = { "camo", "style" };

	class camo : BackpackCamoBase {};

	class style
	{
		label = "Tube";
		values[] = { "Ready", "Stowed" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};
};

class w28_B_camel_thermos
{
	label = "[W28] Camel Thermos Pack";
	options[] = { "camo" };

	class camo : BackpackCamoBase {};
};

class w28_B_simc_asspack
{
	label = "[W28] MOLLE Waist Pack";
	options[] = { "variant", "camo", "position" };

	class variant
	{
		label = "Hydro Pack";
		values[] = { "None", "MOLLE", "Camelbak" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};


	class camo : BackpackCamoBase 
	{
		label = "Hydro Pack Color";
	};

	class position
	{
		label = "Waist Pack Position";
		values[] = { "Standard", "Low" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};

class w28_B_simc_sturm
{
	label = "[W28] MOLLE Assault Backpack";
	options[] = { "variant", "camo", "equipment" };

	class variant
	{
		label = "Hydro Pack";
		values[] = { "None", "Camelbak" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class camo : BackpackCamoBase 
	{
		label = "Hydro Pack Color";
	};

	class equipment
	{
		label = "Equipment";
		values[] = { "Standard", "Radio", "Etool" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
