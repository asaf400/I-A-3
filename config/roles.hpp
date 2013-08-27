class Rifleman
{
	displayName = "Rifleman";
	vehicle = "B_Soldier_F";
	role = "none";
};

class RiflemanLight
{
	displayName = "Rifleman (Light)";
	vehicle = "B_Soldier_lite_F";
	role = "none";
};

class Medic
{
	displayName = "Medic";
	vehicle = "B_medic_F";
	role = "medic";
	show = "({ (_x getVariable [""role"", ""none""]) == ""medic"" } count playableUnits) < 2";
};

class Marksman
{
	displayName = "Marksman";
	vehicle = "B_sniper_F";
	role = "sniper";
	show = "({ (_x getVariable [""role"", ""none""]) == ""sniper"" } count playableUnits) < 1";
};

class AA
{
	displayName = "AA Specialist";
	vehicle = "B_soldier_AA_F";
	role = "aa";
	show = "({ (_x getVariable [""role"", ""none""]) == ""aa"" } count playableUnits) < 1";
};

class AT
{
	displayName = "AT Specialist";
	vehicle = "B_soldier_AT_F";
	role = "at";
	show = "({ (_x getVariable [""role"", ""none""]) == ""at"" } count playableUnits) < 2";
};

class Engineer
{
	displayName = "Engineer";
	vehicle = "B_engineer_F";
	role = "engineer";
	show = "({ (_x getVariable [""role"", ""none""]) == ""engineer"" } count playableUnits) < 2";
};

class Grenadier
{
	displayName = "Grenadier";
	vehicle = "B_Soldier_GL_F";
	role = "grenadier";
	show = "({ (_x getVariable [""role"", ""none""]) == ""grenadier"" } count playableUnits) < 2";
};

class Autorifleman
{
	displayName = "Automatic Rifleman";
	vehicle = "B_soldier_AR_F";
	role = "autorifleman";
	show = "({ (_x getVariable [""role"", ""none""]) == ""autorifleman"" } count playableUnits) < 2";
};

class AmmoBearer
{
	displayName = "Ammo Bearer";
	vehicle = "B_Soldier_A_F";
	role = "ammo";
	show = "({ (_x getVariable [""role"", ""none""]) == ""ammo"" } count playableUnits) < 1";
};