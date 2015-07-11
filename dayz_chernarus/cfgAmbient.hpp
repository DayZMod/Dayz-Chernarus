/*
Layer cost and species probability use expressions.
Variables which can be used inside of expressions:
rain: rain intensity.
night: 1 during night, 0 during day.
hills: 0 at 150 ASL, 1 at 400 ASL.
windy: 0 at 0 m/s, 1 at 20 m/s.
trees: tree density.
sea: distance to sea.
houses: house density.
meadow: meadow character.
forest: 1 in the forest.
Any values are continuous/interpolated in the range of 0 to 1.
Values they are independent unless notes otherwise
(meaning meadow and forest can be 1 at the same time).
You can observe these values in real-time using:
diag_toggle "ambient"
*/

			class Mammals
			{
				radius = 200;
				cost = "(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";
				class Species
				{
					class Rabbit
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};

			class BigBirds
			{
				radius = 300;
				cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";
				class Species
				{
					class Hawk
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};

			class Birds
			{
				radius = 170;
				cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";
				class Species
				{
					class Crow
					{
						probability = 0.2;
						cost = 1;
					};
				};
			};

			class BigInsects
			{
				radius = 20;
				cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability = 0.6 - (meadow * 0.5) + (forest * 0.4);
						cost = 1;
					};
					class ButterFly
					{
						probability = 0.4 + (meadow * 0.5) - (forest * 0.4);
						cost = 1;
					};
				};
			};

		  	class BigInsectsAquatic
		  	{
		  		radius = 20;
			  	cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
			  	class Species
			  	{
			  		class DragonFly
			  		{
			  			probability = 1;
			  			cost = 1;
			  		};
			  	};
			};

			class SmallInsects
			{
				radius = 3;
				cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class HouseFly
					{
						probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost = 1;
					};
					class HoneyBee
					{
						probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
						cost = 1;
					};
					class Mosquito
					{
						probability = "(1 - deadBody) * (0.2 * forest)";
						cost = 1;
					};
				};
			};

			class NightInsects
			{
				radius = 3;
				cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class Mosquito
					{
						probability = 1;
						cost = 1;
					};
				};
			};
//The wind is blowing various particles around:
			class WindClutter
			{
				radius = 10;
				cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1 //Dark green grass.
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindGrass2 //Dry grass.
					{
						probability = "0.4 - 0.2 * hills - 0.2 * trees";
						cost = 1;
					};
					class FxWindRock1 //Dust.
					{
						probability="0.4 * hills";
						cost = 1;
					};
					class FxCrWindLeaf1 //Green leaf.
					{
						probability = "0.2 * trees";
						cost = 1;
					};
					class FxCrWindLeaf2 //Dry leaf.
					{
						probability = "0.1 * trees + 0.2";
						cost = 1;
					};
					class FxCrWindLeaf3 //Green leaf with a dry spot.
					{
						probability = "0.1 * trees";
						cost = 1;
					};
				};
			};

			class NoWindClutter
			{
				radius = 15;
				cost = 8;
				class Species
				{
					class FxWindPollen1
					{
						probability = 1;
						cost = 1;
					};

					class FxCrWindLeaf1 //Green leaf.
		      			{
		        			probability = "0.2 * trees";
		        			cost = 1;
		      			};

		      			class FxCrWindLeaf2 //Dry leaf.
		      			{
		        			probability = "0.1 * trees + 0.2";
		        			cost = 1;
		      			};

		      			class FxCrWindLeaf3 //Green leaf with a dry spot.
		      			{
		        			probability = "0.1 * trees";
		        			cost = 1;
		      			};
				};
			};
