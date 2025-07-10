class w28_G_Nomex
{
	label = "[W28] Nomex Gloves";
	options[] = { "camo", "material", "fingertips", "cuff" };

	class camo
	{
		label = "Color";
		values[] = { "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class material
	{
		label = "Material";
		values[] = { "Standard", "Calf" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class fingertips
	{
		label = "Fingertips";
		values[] = { "Standard", "Cut" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class cuff
	{
		label = "Cuff";
		values[] = { "Standard", "Folded", "Long" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};
};

class w28_G_oak
{
	label = "[W28] Oakley Assault Gloves";
	options[] = { "camo", "fingertips" };

	class camo
	{
		label = "Color";
		values[] = { "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class fingertips
	{
		label = "Fingertips";
		values[] = { "Standard", "Cut" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
}

class w28_G_comba
{
	label = "[W28] Combat Gloves";
	options[] = { "camo", "fingertips" };

	class camo
	{
		label = "Color";
		values[] = { "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class fingertips
	{
		label = "Fingertips";
		values[] = { "Standard", "Cut" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
}

class w28_G_tacticool
{
	label = "[W28] Ballistic Glasses";
	options[] = { "camo", "gloves", "headset" };

	class camo
	{
		label = "Color";
		values[] = { "Black", "Blue", "Orange", "Clear" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class gloves
	{
		label = "Gloves";
		values[] = { "None", "Combat", "Nomex", "Oakley" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class headset
	{
		label = "Headset";
		values[] = { "No", "Yes" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};

class w28_G_LEN_TG1
{
	label = "[W28] Framed Glasses";
	options[] = { "camo" };

	class camo
	{
		label = "Color";
		values[] = { "Black", "Blue", "Orange", "Clear" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};

class w28_G_ESS
{
	label = "[W28] ESS Goggles";
	options[] = { "camo" };

	class camo
	{
		label = "Color";
		values[] = { "Green", "Tan" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
