class w35_U_tweed
{
	label = "[W35] Combat Set";
	options[] = { "camo", "tucked", "kneepad", "sleeve" };

	class camo : CamoBase
	{
		values[] = { "AOR1", "MC", "AOR2", "MCW" };
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

	class sleeve : SleevesBase
	{
		values[] = { "Full", "Half" };
	};
};