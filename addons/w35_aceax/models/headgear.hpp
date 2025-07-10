class w35_H_tweed_ech
{
	label = "[W35] ACH (Woodland)";
	options[] = { "ess", "headset", "scrim", "mount", "band", "variant" };

	class ess
	{
		label = "ESS Goggles";
		values[] = { "None", "Top", "Covered", "Covered Alt", "Low" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};

	class headset
	{
		label = "Headset";
		values[] = { "No", "Yes" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
	
	class scrim
	{
		label = "Scrim";
		values[] = { "No", "Yes" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class mount
	{
		label = "Mount";
		values[] = { "Standard", "PSQ", "Norotos" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class band
	{
		label = "Band";
		values[] = { "No", "Yes" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};

	class variant
	{
		label = "Style";
		values[] = { "Style #1", "Style #2", "Style #3" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
