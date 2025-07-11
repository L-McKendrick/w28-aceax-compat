class w28_H_tweed_ihps_aceax
{
	model = "w28_H_tweed_ihps";
};

// CYT
class H_tweed_ihps_bare                    : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "None";         side = "None"; };
class H_tweed_ihps_g_bare                  : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "ESS";          side = "None"; };
class H_tweed_ihps_g_tasc_bare             : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "ESS";          side = "Headset"; };
class H_tweed_ihps_g_bare_rail             : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "ESS";          side = "Rail"; };
class H_tweed_ihps_g_bare_tasc_rail        : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "ESS";          side = "Headset/Rail"; };
class H_tweed_ihps_tasc_bare               : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "None";         side = "Headset"; };
class H_tweed_ihps_bare_rail               : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "None";         side = "Rail"; };
class H_tweed_ihps_bare_tasc_rail          : w28_H_tweed_ihps_aceax { camo = "CYT"; top = "None";         side = "Headset/Rail"; };

// OCP
class H_tweed_ihps_1                       : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "None";         side = "None"; };
class H_tweed_ihps_g                       : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS";          side = "None"; };
class H_tweed_ihps_g_tasc                  : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS";          side = "Headset"; };
class H_tweed_ihps_g_tasc_rail             : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS";          side = "Headset/Rail"; };
class H_tweed_ihps_g_rail                  : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS";          side = "Rail"; };
class H_tweed_ihps_tasc                    : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "None";         side = "Headset"; };
class H_tweed_ihps_tasc_rail               : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "None";         side = "Headset/Rail"; };
class H_tweed_ihps_rail                    : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "None";         side = "Rail"; };

class H_tweed_ihps_scrim                   : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "Scrim";        side = "None"; };
class H_tweed_ihps_scrim_g                 : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS/Scrim";    side = "None"; };
class H_tweed_ihps_scrim_g_tasc            : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS/Scrim";    side = "Headset"; };
class H_tweed_ihps_tasc_scrim_g_rail       : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS/Scrim";    side = "Headset/Rail"; };
class H_tweed_ihps_scrim_g_rail            : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "ESS/Scrim";    side = "Rail"; };
class H_tweed_ihps_scrim_tasc              : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "Scrim";        side = "Headset"; };
class H_tweed_ihps_tasc_scrim_rail         : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "Scrim";        side = "Headset/Rail"; };
class H_tweed_ihps_scrim_rail              : w28_H_tweed_ihps_aceax { camo = "OCP";  top = "Scrim";        side = "Rail"; };

class w28_H_tweed_ech_aceax
{
	model = "w28_H_tweed_ech";
};

// OCP - Standard mount
class H_tweed_ech_OCP                         : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_licht                   : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_alt                     : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_b                       : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_b_licht                 : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_b_alt                   : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_ESS                     : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_ESS_2                   : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_b_ESS                   : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top";     headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_b_ESS_2                 : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_ESS_low                 : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Low";     headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_ESS_low_b               : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Low";     headset = "No";  scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC                    : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_b                  : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_ESS                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_ESS_2              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_b_ESS              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top";     headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_b_ESS_2            : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_TASC_b_ESS_3            : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered Alt"; headset = "Yes"; scrim = "No";  mount = "Standard"; };
class H_tweed_ech_OCP_scrim                    : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "No";  scrim = "Yes"; mount = "Standard"; };
class H_tweed_ech_OCP_scrim_ess                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "No";  scrim = "Yes"; mount = "Standard"; };
class H_tweed_ech_OCP_scrim_TASC               : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "Yes"; scrim = "Yes"; mount = "Standard"; };
class H_tweed_ech_OCP_scrim_TASC_ESS           : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "Yes"; scrim = "Yes"; mount = "Standard"; };

// PSQ Mount
class H_tweed_ech_psq_OCP                      : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_licht                : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_alt                  : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_b                    : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_b_licht              : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_b_alt                : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_ESS                  : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_ESS_2                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_b_ESS                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top";     headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_b_ESS_2              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_ESS_low              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Low";     headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_ESS_low_b            : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Low";     headset = "No";  scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC                 : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_b               : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_ESS             : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_ESS_2           : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_b_ESS           : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top";     headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_b_ESS_2         : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_TASC_b_ESS_3         : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered Alt"; headset = "Yes"; scrim = "No";  mount = "PSQ"; };
class H_tweed_ech_psq_OCP_scrim                 : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "No";  scrim = "Yes"; mount = "PSQ"; };
class H_tweed_ech_psq_OCP_scrim_ess             : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "No";  scrim = "Yes"; mount = "PSQ"; };
class H_tweed_ech_psq_OCP_scrim_TASC            : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "Yes"; scrim = "Yes"; mount = "PSQ"; };
class H_tweed_ech_psq_OCP_scrim_TASC_ESS        : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "Yes"; scrim = "Yes"; mount = "PSQ"; };

// Norotos Mount
class H_tweed_ech_nor_OCP                      : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_licht                : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_alt                  : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "No";  ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_b                    : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_b_licht              : w28_H_tweed_ech_aceax { variant = "Style #3"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_b_alt                : w28_H_tweed_ech_aceax { variant = "Style #2"; band = "Yes"; ess = "None";    headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_ESS                  : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_ESS_2                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_b_ESS                : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top";     headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_b_ESS_2              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_ESS_low              : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Low";     headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_ESS_low_b            : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Low";     headset = "No";  scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC                 : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "None";    headset = "Yes"; scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_b               : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "None";    headset = "Yes"; scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_ESS             : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Top";     headset = "Yes"; scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_ESS_2           : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No";  ess = "Covered"; headset = "Yes"; scrim = "No";  mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_b_ESS           : w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Top"; headset = "Yes"; scrim = "No"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_b_ESS_2 			: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered"; headset = "Yes"; scrim = "No"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_TASC_b_ESS_3 			: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "Yes"; ess = "Covered Alt"; headset = "Yes"; scrim = "No"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_scrim 				: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No"; ess = "None"; headset = "No"; scrim = "Yes"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_scrim_ess 			: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No"; ess = "Top"; headset = "No"; scrim = "Yes"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_scrim_TASC 			: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No"; ess = "None"; headset = "Yes"; scrim = "Yes"; mount = "Norotos"; };
class H_tweed_ech_nor_OCP_scrim_TASC_ESS 		: w28_H_tweed_ech_aceax { variant = "Style #1"; band = "No"; ess = "Top"; headset = "Yes"; scrim = "Yes"; mount = "Norotos"; };

// Fleece cap
class w28_H_tweed_fleece_aceax
{
	model = "w28_H_tweed_fleece";
};

class H_tweed_Hat_fleece                    : w28_H_tweed_fleece_aceax { camo = "BLK"; };
class H_tweed_Hat_fleece_od3                  : w28_H_tweed_fleece_aceax { camo = "OD"; };
