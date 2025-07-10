class w35_U_tweed
{
	label = "[W35] Combat Set";
	options[] = { "camo", "tucked", "kneepad", "sleeve" };

	class camo
	{
		label = "Camouflage";
		values[] = { "AOR1", "Multicam", "AOR2", "Woodland" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class tucked
	{
		label = "Tucked";
		values[] = { "Yes", "No" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class kneepad
	{
		label = "Kneepads";
		values[] = { "No", "Yes" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class sleeve
	{
		label = "Sleeves";
		values[] = { "Down", "Rolled" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};
};