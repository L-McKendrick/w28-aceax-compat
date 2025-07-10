class w28_H_tweed_ihps
{
	label = "[W28] IHPS";
	options[] = { "camo", "top", "side" };

	class camo
	{
		label = "Camo";
		values[] = { "OCP", "Bare" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class top
	{
		label = "Top";
		values[] = { "None", "ESS", "Scrim", "ESS/Scrim" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class side
	{
		label = "Side";
		values[] = { "None", "Headset", "Rail", "Headset/Rail" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};

class w28_H_tweed_ech
{
	label = "[W28] ACH";
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

class w28_H_tweed_fleece
{
	label = "[W28] Fleece Cap";
	options[] = { "color" };

	class color
	{
		label = "Color";
		values[] = { "Black", "Olive Drab" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
