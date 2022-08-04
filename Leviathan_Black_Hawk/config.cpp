class CfgPatches
{
	class HelicopterModSIB_black_hawk_camo2
	{
		units[] = {"Leviathan_Black_Hawk"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"HelicopterModSIB_black_hawk"};
	};
};
class CfgMods
{
	class HelicopterModSIB_black_hawk_camo2
	{
		dir = "HelicopterSIB\Leviathan_Black_Hawk";
		hideName = 0;
		hidePicture = 0;
		name = "HelicopterModSIB_Leviathan_Black_Hawk";
		credits = "";
		author = "SIBNIC";
		authorID = "";
		version = "version 1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"\MOD\Leviathan_Black_Hawk/4_World"};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"\MOD\Leviathan_Black_Hawk/3_Game"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"\MOD\Leviathan_Black_Hawk/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class SIBblack_hawk_Door_1_1;
	class SIBblack_hawk_Door_1_2;
	class SIBblack_hawk_Door_2_1;
	class SIBblack_hawk_Door_2_2;
	class SIBblack_hawk_Door_1_1_camo2: SIBblack_hawk_Door_1_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\MOD\Leviathan_Black_Hawk\data\11_camo2.paa"};
	};
	class SIBblack_hawk_Door_1_2_camo2: SIBblack_hawk_Door_1_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\MOD\Leviathan_Black_Hawk\data\11_camo2.paa"};
	};
	class SIBblack_hawk_Door_2_1_camo2: SIBblack_hawk_Door_2_1
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\MOD\Leviathan_Black_Hawk\data\11_camo2.paa"};
	};
	class SIBblack_hawk_Door_2_2_camo2: SIBblack_hawk_Door_2_2
	{
		hiddenSelections[] = {"camo2"};
		hiddenSelectionsTextures[] = {"\MOD\Leviathan_Black_Hawk\data\11_camo2.paa"};
	};
	class HeliSIB_black_hawk_base;
	class Leviathan_Black_Hawk: HeliSIB_black_hawk_base
	{
		scope = 2;
		displayName = "UH-60 Camo2";
		hiddenSelections[] = {"camo0","camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"\MOD\Leviathan_Black_Hawk\data\hawk_camo2.paa","\MOD\Leviathan_Black_Hawk\data\8_camo2.paa","\MOD\Leviathan_Black_Hawk\data\11_camo2.paa","\MOD\Leviathan_Black_Hawk\data\28_camo2.paa"};
		class Cargo
		{
			itemsCargoSize[] = {10,100};
			allowOwnedCargoManipulation = 1;
			openable = 0;
		};
	};
};
