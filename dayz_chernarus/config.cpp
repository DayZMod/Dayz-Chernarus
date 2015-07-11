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
	
	class Dayz_Chernarus : CAWorld
	{
		access = ReadOnlyVerified;
		worldId = 0;

		cutscenes[] = {ChernarusIntro1};

		description = $STR_DN_CHERNARUS;
		
		icon = "";
		
		worldName = "\dayz_chernarus\chernarus.wrp";
		
		pictureMap = "";
		pictureShot = "\ca\chernarus\data\ui_selectisland_chernarus_ca.paa";

		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";

		longitude = 30; // positive is east
		latitude = -45; // positive is south

		class OutsideTerrain
		{
			satellite = "ca\CHERNARUS\data\s_satout_co.paa";
			enableTerrainSynth = true;
			class Layers
			{
				class Layer0
				{
					nopx = "ca\CHERNARUS\data\cr_trava1_detail_nopx.paa";
					texture = "ca\CHERNARUS\data\cr_trava1_detail_co.paa";
				};
			};
		};

		class Grid : Grid
		{
			offsetX = 0;
			offsetY = 0;

			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			
			class Zoom3
			{
				zoomMax = 1e30;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		
		
		startTime = 9:20;
		startDate = 11/10/2008;
		startWeather = 0.25;
		startFog = 0.0;
		forecastWeather = 0.25;
		forecastFog = 0.0;

		centerPosition[] = {7100,7750,300};
		seagullPos[] = {1272.842,150.000,14034.962};

		// landing place - Main airport
		ilsPosition[] ={4887.5,9660};
		ilsDirection[] ={0.5075,0.08,-0.8616};
		ilsTaxiIn[]= {4785.210,10174.290, 5024.903,9759.071, 5027.385,9737.021, 5015.327,9721.136, 4928.958,9670.509, 4906.105,9664.372, 4880.936,9673.650};
		ilsTaxiOff[]= {4671,10038, 4195.500,10862.011, 4201.01,10885.8, 4218.536,10899.822, 4304.679,10950.154, 4324.962,10953.660, 4345.746,10938.886, 4785.210,10174.290};
		//ilsTaxiIn[]= {2495,2725,2495,2850,2520,2870,2545,2850};
		//ilsTaxiOff[]= {2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway=true;

		//secondary landing places
		class SecondaryAirports
		{
			//NEAF
			class ChernarusAirstrip1
			{
				ilsPosition[] ={12461,12585};					
				ilsDirection[] ={0.9396,0.08,-0.3420};
				ilsTaxiIn[]= {12125.9,12669.3, 12435.5,12562.1, 12442,12561, 12447,12564, 12453.3,12575.2, 12454.3,12581, 12451.4,12586};
				ilsTaxiOff[]= {12204.4,12681.9, 11812.1,12824.1, 11804.1,12824.4, 11797.8,12818.8, 11790.9,12801.5, 11790.6,12793.6, 11796.6,12788.6, 12125.9,12669.3};
				drawTaxiway=false;
			};
			
			//Balota
			class ChernarusAirstrip2
			{
				ilsPosition[] ={5223,2220.5};					
				ilsDirection[] ={0.866,0.08,-0.5};
				ilsTaxiIn[]= {5009.9,2374.2, 5240.3,2243.2, 5243.3,2238.4, 5242.7,2232.1, 5235.9,2221.1, 5229.7,2216.6, 5221.5,2217.3};
				ilsTaxiOff[]= {5070,2308, 4640.8,2551.9, 4638.3,2557, 4639.3,2563.3, 4646.5,2573.9, 4651.3,2578.5, 4658.5,2577.9, 5009.9,2374.2};
				drawTaxiway=false;
			};
		};
		
		class ReplaceObjects {};
		
		//sound sources
		class Sounds
		{
			sounds[] = {};
		};
		
		class Animation
		{
			vehicles[] = {};
		}; // default - no film
		
		//LIGHTING
		#include "cfgLighting.hpp"

		class Weather : Weather
		{
			class Lighting : Lighting
			{
				class BrightAlmost : DayLightingBrightAlmost
				{
					overcast = 0;
				};

				class Rainy : DayLightingRainy
				{
					overcast = 1.0;
				};
			};
		};
		
		//CLUTTER DISPLAY
		clutterGrid = 1.0;// was 1.11
		clutterDist = 125;// how far clutters are visible
		noDetailDist = 40;
		fullDetailDist = 15;// where ground detail texture is fully visible (begin fading out)
		midDetailTexture="ca\chernarus\data\cr_trava1_mco.paa";

		minTreesInForestSquare = 3;
		minRocksInRockSquare = 3;
		
		//CLUTTER
		class clutter
		{
			#include "cfgClutter.hpp"
		};

		class Subdivision
		{
			// fractal component of subdivision
			// changes are smaller for smaller rectangles
			class Fractal
			{
				// texture roughness factor
				rougness = 5;
				// max. value for squares containing road
				maxRoad = 0.02;
				// max. value for squares containing track
				maxTrack = 0.50;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.05;
			};
			
			// white noise component of subdivision
			// change size is independent on rectangle size
			class WhiteNoise
			{
				rougness = 2;
				// max. value for squares containing road
				maxRoad = 0.01;
				// max. value for squares containing track
				maxTrack = 0.05;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.0025;
			};

			// do not divide surfaces that are under given limit
			minY = -0.0;
			// do not divide flat surfaces
			minSlope = 0.02;
		};
		
		//AMBIENT
		class Ambient
		{
			#include "cfgAmbient.hpp"
		};
		
		//NOISE
		class Names
		{
			#include "Chernarus.hpp"
		};
		
		//Armory-class definition.
		#include "armory.hpp"
		
		//Used for random safe position finding.
		safePositionAnchor[] = {9122.17, 5178.92};
		safePositionRadius = 8500;
	};
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

#include "cfgSurfaces.hpp"