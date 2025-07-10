class w28_V_tweed
{
	label = "[W28] Body Armor";
	options[] = { "vest", "variant" };

	class vest
	{
		label = "Vest";
		description = "Body armor system"
		values[] = { "IOTV Mk.4", "MSV Mk.2" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class variant
	{
		label = "Variant";
		values[] = { 
			"Base #1", "Base #2",
			"Standard #1", "Standard #2", "Standard #3", "Standard #4", "Standard #5",
			"MG", "SAW", "40mm #1", "40mm #2", "40mm #3", 
			"PRC #1", "PRC #2", "Sidearm #1", "Sidearm #2"
		};
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
