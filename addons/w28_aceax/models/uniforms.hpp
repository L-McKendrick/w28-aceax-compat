class w28_U_tweed
{
	label = "[W28] OCP Summer";
	options[] = { "variant", "sleeve", "flag" };

	class variant
	{
		label = "Variant";
		values[] = { "Standard", "GAR", "TUCK", "TUCK/UNBL", "UNBL", "CRYE", "CRYE/KNE" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};

	class sleeve
	{
		label = "Sleeves";
		values[] = { "Full", "Cuff In", "Cuff Out" };
		alwaysSelectable = 1;
		changeInGame = 1;
	};

	class flag
	{
		label = "Flag Patch";
		values[] = { "US", "None" };
		alwaysSelectable = 1;
		changeInGame = 0;
	};
};
