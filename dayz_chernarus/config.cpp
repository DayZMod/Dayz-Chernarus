#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2

#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

class CfgPatches
{
	class Dayz_Chernarus
	{
		units[] = {Dayz_Chernarus};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] =
		{
			"Chernarus",
			"Dayz_Plants",
			"Dayz_Structures"
		};
	};
};


class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
	};
	
	class CAWorld : DefaultWorld
	{
		class Grid {};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		
		class Weather : Weather
		{
			class Lighting;
		};
	};
	
	class DefaultLighting;
	class DayZMod;
	class Dayz_Chernarus : DayZMod
	{
		access = ReadOnlyVerified;
		worldId = 0;
		
		worldName = "\dayz_chernarus\chernarus.wrp";
	};
	
	initWorld = "Dayz_Chernarus";
	demoWorld = "Dayz_Chernarus";
};

class CfgWorldList
{
	class Dayz_Chernarus {};
};

class CfgMissions
{
	class Cutscenes
	{
		class ChernarusIntro1
		{
			directory = "ca\chernarus\data\scenes\intro.Chernarus";
		};
	};
};