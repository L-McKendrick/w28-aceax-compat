class w28_B_wasser_molle
{
	label = "[W28] MOLLE Hydration 3L";
	options[] = { "camo", "style" };

	class camo
	{
		label = "Camo";
		values[] = { "OCP", "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

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

	class camo
	{
		label = "Camo";
		values[] = { "OCP", "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
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

	class camo
	{
		label = "Hydro Pack Color";
		values[] = { "OCP", "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
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

	class camo
	{
		label = "Hydro Pack Color";
		values[] = { "OCP", "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class equipment
	{
		label = "Equipment";
		values[] = { "Standard", "Radio", "Etool" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
