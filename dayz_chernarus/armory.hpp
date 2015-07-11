//Armory class within CfgWorlds entry to have control over challenges.
class Armory 
{
	positionAdmin[] = {12548.3, 3140.68};
	
	positionStartWater[] = {7584.11, 1206.68};

	positionsViewer[] = 
	{
		{4810.49, 10160.7}, 
		{2637.16, 9777.03}, 
		{6955.78, 2813.33}, 
		{3716.81, 14503.9}
	};

	positionsViewerWater[] = 
	{
		{14105.8, 3510.57}
	};
	
	positionBlacklist[] = 
	{
		{{8150.07, 2267.8}, {8278.83, 2138.24}}, 
		{{11064.1, 2614.1}, {11268.6, 2372.43}}, 
		{{11290.5, 3442.58}, {12687.9, 3023.46}}, 
		{{12881.1, 3822.22}, {14294.3, 2519.14}}
	};
	
	class Challenges 
	{
		class CheckpointRace 
		{
			backUpRoute[] =  
			{
				{4061.4282, 4822.8931}, 
				{3996.0049, 4780.6372}, 
				{4113.9746, 4644.71}, 
				{4246.8066, 4456.9072}, 
				{3694.8262, 3877.9797}, 
				{3544.3376, 3903.6228}, 
				{3319.3535, 3936.9614}
			};
		};
		
		class FiringRange 
		{
			positionsStart[] = 
			{
				{4865.31, 9700.02}, 
				{4636.6, 2553.73}
			};
			directionsStart[] = {330, 118};
			positionsStartWater[] = {{13608.4, 8965.45}};
			directionsStartWater[] = {0};
		};
		
		class FitnessTrack 
		{
			positionStart[] = {{13094.9, 6891.64}};
			directionStart[] = {6.22921};
			
			objectSets[] = {"ca\chernarus\data\scripts\armory\fitTrack1.sqf"};			
			positionAnchor[] = {{13155.857, 7102.4321}};
			
			obstacleSets[] = 
			{
				//Set 1:
				{
					{{13095.3, 6899.61}, 1.10213, 3, 2, 0, ""}, //Start
					{{13107.7, 6950.43}, 30.3792, 1.8, 2, 9, ""}, //Wooden ramp
					{{13134.8, 6978.44}, 51.8825, 1.6, 2, 1, ""}, //Zigzag
					{{13151.6, 7026.52}, -14.7014, 2, 2, 3, ""}, //Hole
					{{13133.874, 7081.7607}, 341.22684, 2, 2, 12, ""}, //Climb over
					{{13131.491, 7148.4648}, 428.06613, 2, 1.5, 6, ""}, //Ladder
					{{13179.75, 7154.959}, 78.664734, 2, 2, 5, ""}, //Climbing
					{{13184.168, 7182.752}, 64.152603, 1.4, 1.5, 4, ""}, //Crawling
					{{13173.689, 7197.874}, -40.986061, 1, 1.2, 12, ""}, //Climb over
					{{13107.476, 7194.292}, 161.73361, 2.5, 2, 11, ""}, //CP
					{{13053.396, 7188.9888}, -17.064301, 3, 2, 6, ""}, //Ladder
					{{13030.552, 7198.6733}, -49.315884, 3, 2, 11, ""}, //CP
					{{13054.509, 7225.1953}, -115.63012, 1.8, 2, 2, ""}, //Duckboard
					{{13091.737, 7224.5942}, -2.7222431, 3, 2, 7, ""}, //Concrete ramp
					{{13138.76, 7234.5645}, 75.707329, 5, 2, 11, ""}, //CP
					{{13291.4, 7289.55}, 0.672324, 2, 2, 8, ""}, //Buoy
					{{13218.485, 7324.5605}, -69.754745, 4, 2, 10, ""} //Finish
				}
			};
			
			positionMachineguns[] = 
			{
				{{13175.715, 7183.2925}}
			};
			directionMachineguns[] = 
			{
				{-264.32907}
			};
			
			positionStartAnimal[] = {{6907.9697, 7809.6191}};
			directionStartAnimal[] = {162.93124};
			
			objectSetsAnimal[] = {"ca\chernarus\data\scripts\armory\fitTrackAnimals1.sqf"};
			positionAnchorAnimal[] = {{6949.9463, 7739.7402}};
			
			obstacleSetsAnimal[] = 
			{
				//Set 1:
				{
					{{6909.2642, 7803.9429}, 161.90512, 3, 2, 0, ""}, //Start
					{{6951.4775, 7766.5244}, -225.43369, 2.5, 2, 3, ""}, //Hole
					{{6981.5288, 7738.8384}, -36.381035, 4, 2, 11, ""}, //CP
					{{6988.8047, 7721.2588}, 101.7481, 2, 2, 9, ""}, //Wooden ramp
					{{6961.0718, 7739.3496}, -32.418125, 3.5, 2, 11, ""}, //CP - Mount
					{{6938.1123, 7748.5244}, -16.642376, 4, 2, 11, ""}, //CP
					{{6952.1445, 7727.5923}, -34.059143, 1.5, 2, 2, ""}, //Duckboard
					{{6985.3442, 7699.7813}, 96.193977, 3.5, 2, 7, ""}, //Concrete ramp
					{{7022.2251, 7704.2026}, 53.143082, 2.5, 2, 10, ""} //Finish
				}
			};
		};
		
		class MobilityRange 
		{
			positionStart[] = 
			{
				//Set 1:
				{12053.274, 3489.2385}
			};
			directionStart[] = 
			{
				//Set 1:
				-4.7294011
			};
			
			//Spawning position and direction for amphibious vehicles (optional).
			positionStartAmphibious[] = 
			{
				//Set 1:
				{12137.764648, 3123.756592}
			};
			directionStartAmphibious[] = {48.471630};
			
			positionStartWater[] = 
			{
				//Set 1:
				{12065.558, 3405.7932}
			};
			directionStartWater[] = {162.681};
			
			objectSets[] = 
			{
				//Set 1:
				"ca\chernarus\data\scripts\armory\mobilityRange1.sqf"
			};
			
			//Use this anchorpoint for object mapping instead of the world's centerpoint.
			positionAnchor[] = 
			{
				//Set 1:
				{12507.518555, 4194.751953}
			};
			
			objectSetsWater[] = 
			{
				"ca\chernarus\data\scripts\armory\mobilityRangeWater1.sqf"
			};			
			
			positionAnchorWater[] = 
			{
				{12252.541, 3171.1011}
			};
			
			obstacleSets[] = 
			{
				//Set 1.
				{
					//Single concrete ramp
					//CP
					//Small saddles
					//Small alternating saddles
					//Large alternating saddles
					//Large saddles
					//Mount
					//CP
					
					#define OBSTACLES_SHARED1 \
						{{12008.258789, 3762.574219}, -37.721397, 2.5, 4, 3, ""}, \
						{{11949.089844, 3883.307617}, 57.102104, 5, 4, 4, ""}, \
						{{12053.229492, 3983.802002}, -117.695000, 3, 3.5, 1, ""}, \
						{{12062.163086, 3988.890137}, -117.695000, 3, 3.5, 2, ""}, \
						{{12146.471680, 4079.565430}, 176.643997, 3, 3.5, 6, ""}, \
						{{12144.678711, 4096.781738}, -3.301100, 3, 3.5, 5, ""}, \
						{{12100.988281, 4277.938965}, -22.383801, 3.5, 5, 8, ""}, \
						{{12028.927734, 4405.191406}, -38.371552, 5, 4, 4, ""}
						
					//WP - Obstacles
					//WP - Obstacles
						
					#define OBSTACLES_AMPHIB \
						{{12009.158203, 4467.854004}, 32.583187, 18, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, \
						{{12039.715820, 4535.721680}, 26.435600, 28, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}
						
					//WP
					//Double concrete ramp
					//WP
					//WP - Obstacles
					//WP - Obstacles
						
					#define OBSTACLES_NOT_AMPHIB \
						{{11963.396484, 4505.314453}, -37.115398, 5, 4, 7, ""}, \
						{{11782.432617, 4562.258301}, -58.603565, 2.5, 4, 3, $STR_LIB_CHAL_MOB_RANGE_HINT_3}, \
						{{11919.377930, 4601.378418}, -143.117798, 3, 4, 7, ""}, \
						{{12064.138672, 4622.480469}, -55.045273, 10, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, \
						{{12133.921875, 4579.635254}, 135.320999, 22, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}
						
					//CP
					//WP - Barrels
					//Slalom
					//Slalom
					//Slalom
					//Slalom
					//WP
					//WP - Hill climb
					//Single concrete ramp
					//CP
					//CP
					//Double concrete ramp with dirt
					//WP
					//Finish
						
					#define OBSTACLES_SHARED2 \
						{{12211.571289, 4496.297852}, -258.859985, 5, 4, 4, ""}, \
						{{12354.505859, 4478.395020}, -247.526001, 5, 4, 7, $STR_LIB_CHAL_MOB_RANGE_OBSTACLE_10_DESC}, \
						{{12401.291016, 4458.673340}, 8.252370, 7, 3, 11, ""}, \
						{{12415.421875, 4455.722656}, 15.383254, 7, 3, 11, ""}, \
						{{12437.532227, 4450.039063}, 14.747339, 4, 3, 11, ""}, \
						{{12446.020508, 4448.101563}, 10.462667, 4, 3, 11, ""}, \
						{{12485.617188, 4448.541016}, 2.291430, 5, 4, 7, ""}, \
						{{12331.248047, 4560.785645}, -49.727299, 6, 6, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_4}, \
						{{12574.256836, 4578.188965}, 237.391663, 2.5, 4, 3, ""}, \
						{{12610.941406, 4960.625977}, -305.597137, 5, 4, 4, ""}, \
						{{12781.824219, 4813.133789}, -308.815002, 5, 4, 4, ""}, \
						{{13170.416016, 5301.261230}, 34.898548, 2.5, 4, 8, ""}, \
						{{13260.370117, 5428.167480}, -115.369003, 5, 4, 7, ""}, \
						{{13376.249023, 5429.760254}, 90.000000, 6, 3, 9, ""}
					
					//Not amphibious:
					{
						{{12071.941406, 3591.153809}, -7.029818, 5, 4, 0, ""}, //Start
						OBSTACLES_SHARED1, 
						OBSTACLES_NOT_AMPHIB, 
						OBSTACLES_SHARED2
					}, 
					//Amphibious:
					{
						{{12182.211914, 3170.909180}, 26.195101, 6, 4, 0, ""}, //Start
						{{12071.941406, 3591.153809}, -7.029818, 5, 4, 4, ""}, //CP
						OBSTACLES_SHARED1, 
						OBSTACLES_AMPHIB, 
						OBSTACLES_SHARED2
					}
				}
			};
			
			obstacleSetsWater[] = 
			{
				{
					{{12017.643, 3285.3701}, 42.0182, 13, 4, 0, ""}, //Start
					{{11844.2, 3127.8335}, 44.397202, 5, 4, 3, ""}, //Ramp
					{{11748.247, 2909.9089}, -45.487801, 6.5, 4, 7, ""}, //WP
					{{11917.333, 2951.0886}, -0.640769, 12, 3, 11, ""}, //Slalom
					{{11943.64, 2951.2964}, -0.640769, 12, 3, 11, ""}, //Slalom
					{{12204.303, 2975.0591}, 88.178703, 9, 5, 8, ""}, //Mount
					{{12345.825, 3151.7322}, 20.117426, 13, 4, 4, ""}, //CP
					{{12091.559, 3426.7244}, 29.193241, 5, 4, 7, ""}, //WP
					{{12329.788, 3418.3071}, 78.953087, 13, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, //WP - Obstacles
					{{12414.953, 3428.5474}, 85.593979, 13, 4, 7, $STR_LIB_CHAL_MOB_RANGE_HINT_1}, //WP - Obstacles
					{{12705.73, 3360.4412}, 115.49004, 13, 4, 10, ""}, //Chicane
					{{12729.66, 3350.2236}, 69.315651, 10, 4, 10, ""}, //Chicane
					{{12746.576, 3379.1472}, 77.903793, 10, 4, 10, ""}, //Chicane
					{{12777.471, 3362.8718}, 118.09767, 13, 4, 10, ""}, //Chicane
					{{12786.696, 3027.8013}, -0.524382, 13, 5, 9, ""} //Finish
				}
			};
			
			//Spawning position and rolling direction for rolling barrels.
			positionRollingBarrels[] = 
			{
				//Set 1:
				{12306.832031, 4513.466309}
			};
			directionRollingBarrels[] = 
			{
				//Set 1:
				-168.906998
			};
			positionTriggerRollingBarrels[] = 
			{
				{12268.510742, 4488.474121}
			};
			radiusTriggerRollingBarrels[] = 
			{
				10
			};
			
			//Spawning position, direction and waypoints for oncoming traffic.
			positionOncomingTraffic[] = 
			{
				//Set 1:
				{12805.262695, 4989.407227}
			};
			directionOncomingTraffic[] = 
			{
				//Set 1:
				-154.203003
			};
			waypointsOncomingTraffic[] = 
			{
				//Set 1:
				{
					{12773.318359, 4812.576660}, 
					{12609.413086, 4945.445313}, 
					{12835.347656, 4456.587402}
				}
			};
			positionTriggerOncomingTraffic[] = 
			{
				{12606.836, 4676.2334}
			};
			radiusTriggerOncomingTraffic[] = 
			{
				10
			};
		};
		
		class KillHouse 
		{
			class Small 
			{
				positionStart[] = 
				{
					{4654.4678, 9694.4609}
				};
				
				directionStart[] = {-79.056442};
				
				positionEnd[] = 
				{
					{4691.7197, 9608.625}
				};
				
				objectSet[] = 
				{
					"ca\chernarus\data\scripts\armory\killHouse1.sqf"	
				};
				
				positionAnchor[] = 
				{
					{4625.3901, 9641.4678}
				};
				
				waypoints[] = 
				{
					{
						{4608.231, 9703.4072}, 
						{4596.4604, 9643.498},
						{4600.5435, 9602.4609},
						{4591.1992, 9587.1279},
						{4608.5366, 9571.207},
						{4629.6582, 9593.2695},
						{4671.4351, 9587.5625}
					}
				};
				
				class Targets 
				{
					class Set1 
					{
						class T1 
						{
							position[] = {4620.9429, 9693.7598};
							direction = -117.92614;
							upTime = 4; //How long does the target stay up?
							positionMove[] = {}; //Where will the target move to?
							moveTime = 0; //How long will it take to move?
							type = 0; //0: static / 1: moving
							side = 0; //0: enemy / 1: civilian / 2: 50% chance for either
							size = 0; //0: small / 1: large (vehicle)
							spawn = 0; //0: always spawn / 1: 50% chance spawn
							positionTrigger[] = {4632.4722, 9699.4434};
							radiusTrigger = 10;
						};
						class T2: T1 
						{
							position[] = {4612.7695, 9695.6191};
							direction = -76.021889;
							upTime = 6;
							positionMove[] = {4613.4756, 9698.9004};
							moveTime = 2;
							type = 1;
							positionTrigger[] = {4625.1377, 9700.4189};
						};
						class T3: T2 
						{
							position[] = {4614.1777, 9710.0957};
							direction = -80.856003;
							upTime = 7;
							positionMove[] = {4613.729, 9707.1094};
							moveTime = 1.5;
							spawn = 1;
							positionTrigger[] = {4625.1621, 9700.6416};
						};
						class T4: T1 
						{
							position[] = {4601.6787, 9707.3594, 3};
							direction = -80.856003;
							upTime = 3;
							side = 2;
							spawn = 1;
							positionTrigger[] = {4611.9077, 9703.5137};
						};
						class T5: T1 
						{
							position[] = {4601.0737, 9705.7461, 3};
							direction = -81.122002;
							upTime = 5;
							side = 0;
							spawn = 0;
							positionTrigger[] = {4611.8682, 9703.1426};
						};
						class T6: T1 
						{
							position[] = {4600.2271, 9710.6846};
							direction = -80.703217;
							upTime = 7;
							positionMove[] = {4603.5566, 9710.0645};
							moveTime = 4;
							type = 1;
							side = 0;
							spawn = 0;
							positionTrigger[] = {4611.9619, 9703.8135};
						};
						class T7: T1 
						{
							position[] = {4593.1826, 9682.5615};
							direction = -127.04917;
							upTime = 4;
							side = 0;
							spawn = 0;
							positionTrigger[] = {4603.6445, 9688.6123};
						};
						class T7A: T7 
						{
							position[] = {4593.1499, 9681.6797, -0.3};
							direction = -127.04917;
							side = 1;
							spawn = 1;
							positionTrigger[] = {};
						};
						class T7B: T7A 
						{
							position[] = {4592.7827, 9683.8184, -0.3};
							direction = -106.35532;
							spawn = 0;
						};
						class T8: T1 
						{
							position[] = {4608.2852, 9676.6445};
							direction = -210.795;
							upTime = 5;
							side = 2;
							spawn = 1;
							positionTrigger[] = {4602.8545, 9682.7793};
						};
						class T9: T1 
						{
							position[] = {4610.6719, 9666.2549};
							direction = -226.66701;
							upTime = 6;
							side = 0;
							positionTrigger[] = {4600.9424, 9670.1621};
						};
						class T10: T1 
						{
							position[] = {4590.0952, 9659.6133};
							direction = -168.72701;
							upTime = 7;
							positionMove[] = {4595.6519, 9658.3271};
							moveTime = 2;
							type = 1;
							positionTrigger[] = {4599.3311, 9661.5996};
						};
						class T11: T1 
						{
							position[] = {4605.167, 9623.7344};
							direction = -218.34399;
							upTime = 5;
							side = 0;
							positionTrigger[] = {4595.8613, 9632.6357};
						};
						class T11A: T1 
						{
							position[] = {4605.7964, 9637.1299};
							direction = -256.12601;
							side = 1;
							positionTrigger[] = {};
						};
						class T11B: T11A 
						{
							position[] = {4605.7534, 9635.9785};
							direction = -243.239;
							spawn = 1;
						};
						class T11C: T11A 
						{
							position[] = {4604.8179, 9635.0693};
							direction = -220.679;
						};
						class T12: T1 
						{
							position[] = {4612.5649, 9623.3428};
							direction = -247.592;
							upTime = 4;
							side = 0;
							spawn = 1;
							positionTrigger[] = {4595.8286, 9631.4658};
						};
						class T13: T1 
						{
							position[] = {4586.4741, 9609.6787};
							direction = -98.005402;
							upTime = 7;
							side = 0;
							spawn = 0;
							positionTrigger[] = {4595.2437, 9620.2979};
						};
						class T14: T1 
						{
							position[] = {4586.9951, 9599.7705};
							direction = -148.175;
							upTime = 6;
							side = 2;
							positionTrigger[] = {4595.728, 9615.2852};
						};
						class T15: T1 
						{
							position[] = {4590.3306, 9602.8252};
							direction = -173.98399;
							upTime = 7;
							spawn = 1;
							positionTrigger[] = {4594.5332, 9615.332};
						};
						class T16: T1 
						{
							position[] = {4612.9937, 9606.2295};
							direction = -252.048;
							upTime = 5;
							positionTrigger[] = {4600.9434, 9602.3809};
						};
						class T16A: T1 
						{
							position[] = {4612.4976, 9606.7646, -0.3};
							direction = -252.048;
							side = 1;
							positionTrigger[] = {};
						};
						class T17: T1 
						{
							position[] = {4614.686, 9603.248, 1.5};
							direction = -266.95499;
							upTime = 6;
							positionTrigger[] = {4601.562, 9602.8555};
						};
						class T18: T1 
						{
							position[] = {4602.3301, 9585.2148};
							direction = -146.23741;
							upTime = 7;
							positionMove[] = {4599.7959, 9586.9766};
							moveTime = 1.5;
							type = 1;
							spawn = 1;
							positionTrigger[] = {4598.8652, 9589.5791};
						};
						class T19: T1 
						{
							position[] = {4590.4727, 9585.4863};
							direction = -231.5184;
							upTime = 3;
							positionTrigger[] = {4588.7134, 9586.4414};
							radiusTrigger = 5;
						};
						class T20: T19 
						{
							position[] = {4591.5962, 9586.0928};
							direction = -237.21899;
							positionTrigger[] = {4588.9009, 9586.4268};
						};
						class T21: T1 
						{
							position[] = {4626.6802, 9556.542};
							direction = -234.642;
							upTime = 6;
							spawn = 1;
							positionTrigger[] = {4607.0532, 9567.1982};
						};
						class T22: T1 
						{
							position[] = {4649.1938, 9592.8936};
							direction = -260.00345;
							upTime = 5;
							positionTrigger[] = {4638.2681, 9590.9561};
						};
						class T22A: T1 
						{
							position[] = {4637.7427, 9591.8916};
							direction = -275.89499;
							side = 1;
							spawn = 1;
							positionTrigger[] = {};
						};
						class T22B: T22A 
						{
							position[] = {4637.3188, 9590.4063};
							direction = -231.06799;
							spawn = 0;
						};
						class T22C: T22A 
						{
							position[] = {4654.0508, 9594.4717};
							direction = -277.05099;
						};
						class T23: T1 
						{
							position[] = {4647.9956, 9587.1533};
							direction = -245.41141;
							upTime = 6;
							positionTrigger[] = {4638.1709, 9590.3828};
						};
						class T24: T1 
						{
							position[] = {4668.7539, 9576.7441};
							direction = -218.422;
							upTime = 7;
							positionMove[] = {4660.8491, 9571.123};
							moveTime = 3;
							type = 1;
							spawn = 1;
							side = 2;
							positionTrigger[] = {4651.2554, 9582.7705};
						};
						class T25: T1 
						{
							position[] = {4675.3857, 9607.918};
							direction = -343.50839;
							upTime = 4;
							spawn = 1;
							positionTrigger[] = {4672.2241, 9592.7725};
						};
						class T26: T1 
						{
							position[] = {4683.1265, 9597.6211};
							direction = -304.14001;
							upTime = 5;
							positionTrigger[] = {4673.458, 9592.7041};
						};
					};
				};				
			};
			
			class Large 
			{
				positionStart[] = 
				{
					{2094.5635, 5142.5972}	
				};
				
				directionStart[] = {90.350838};
				
				positionEnd[] = 
				{
					{1734.3617, 5093.208}
				};
				
				objectSet[] = 
				{
					"ca\chernarus\data\scripts\armory\killHouseLarge1.sqf"	
				};
				
				positionAnchor[] = 
				{
					{2011.8751, 5144.0381}	
				};
				
				waypoints[] = 
				{
					{
						{2195.27, 5161.6958}, 
						{2244.8481, 5138.2964}, 
						{2299.7942, 5202.5}, 
						{2271.1743, 5242.9517}, 
						{2304.7458, 5299.4326}, 
						{1918.2601, 5294.5986}
					}	
				};
				
				class Targets 
				{
					class Set1 
					{
						class T1 
						{
							position[] = {2226.8413, 5169.0322};
							direction = 428.31;
							upTime = 7;
							positionMove[] = {};
							moveTime = 0;
							type = 0;
							side = 0;
							size = 0;
							spawn = 0;
							positionTrigger[] = {2188.9995, 5158.9868};
							radiusTrigger = 20;
						};
						class T1A: T1 
						{
							position[] = {2223.2769, 5171.0435};
							direction = 420.02899;
							upTime = 6;
							size = 1;
							positionTrigger[] = {2188.9995, 5158.9868};
						};
						class T2: T1  
						{
							position[] = {2208.262, 5142.2236};
							direction = 546.34003;
							upTime = 8;
							spawn = 1;
							positionTrigger[] = {2215.6838, 5150.1226};
						};
						class T2A: T2   
						{
							position[] = {2211.5251, 5142.73};
							direction = 521.09698;
							upTime = 6;
							spawn = 0;
						};
						class T2B: T2   
						{
							position[] = {2215.9478, 5141.4092};
							direction = 498.88101;
							upTime = 8;
							spawn = 0;
						};
						class T3: T1  
						{
							position[] = {2218.5713, 5138.3052};
							direction = 498.88101;
							upTime = 8;
							positionMove[] = {2221.688, 5141.6279};
							moveTime = 1.5;
							type = 1;
							spawn = 1;
							positionTrigger[] = {2217.4465, 5148.7866};
						};
						class T4: T1 
						{
							position[] = {2244.8047, 5145.1563};
							direction = 481.229;
							upTime = 6;
							positionMove[] = {2241.02, 5137.9346};
							moveTime = 2.5;
							type = 1;
							size = 1;
							positionTrigger[] = {2235.9231, 5139.9766};
						};
						class T5: T1  
						{
							position[] = {2258.1746, 5143.3408, 1.2};
							direction = 457.784;
							upTime = 8;
							spawn = 1;
							positionTrigger[] = {2243.6765, 5137.9731};
						};
						class T5A: T5  
						{
							position[] = {2257.6216, 5141.0684, 7.3};
							direction = 463.099;
							upTime = 10;
							spawn = 0;
						};
						class T5B: T5  
						{
							position[] = {2253.7783, 5137.688, 1.2};
							direction = 475.08499;
							upTime = 9;
							spawn = 0;
						};
						class T5C: T5  
						{
							position[] = {2250.6636, 5133.6606, 4.3};
							direction = 486.94901;
							upTime = 9;
						};
						class T6: T1  
						{
							position[] = {2247.8303, 5159.9116};
							direction = 387.54001;
							upTime = 7;
							positionMove[] = {2255.2764, 5156.4995};
							moveTime = 1.5;
							type = 1;
							positionTrigger[] = {2255.2754, 5154.5259};
						};
						class T7: T1  
						{
							position[] = {2270.3635, 5184.7295};
							direction = 396.12601;
							upTime = 7;
							positionMove[] = {2274.0508, 5182.8071};
							moveTime = 2;
							type = 1;
							positionTrigger[] = {2274.4119, 5177.0522};
						};
						class T7A: T7  
						{
							position[] = {2283.3057, 5177.0264};
							direction = 396.12601;
							upTime = 8;
							positionMove[] = {2280.2883, 5179.2065};
							moveTime = 2.5;
							spawn = 1;
						};
						class T8: T1  
						{
							position[] = {2315.9009, 5216.2563};
							direction = 423.24899;
							upTime = 8;
							positionTrigger[] = {2299.8647, 5210.855};
						};
						class T8A: T8  
						{
							position[] = {2315.416, 5220.4526};
							direction = 376.95401;
							upTime = 6;
							spawn = 1;
						};
						class T8B: T8  
						{
							position[] = {2318.1077, 5215.7241};
							direction = 417.93799;
							upTime = 8;
							spawn = 1;
							size = 1;
						};
						class T9: T1  
						{
							position[] = {2266.4702, 5246.2949};
							direction = 302.31699;
							upTime = 6;
							side = 2;
							spawn = 1;
							positionTrigger[] = {2272.9048, 5240.4487};
						};
						class T9A: T9  
						{
							position[] = {2269.1465, 5249.915};
							direction = 338.72601;
							upTime = 7;
							side = 2;
						};
						class T10: T1 
						{
							position[] = {2270.2703, 5330.6396};
							direction = 339.58099;
							upTime = 9;
							side = 0;
							positionTrigger[] = {2294.4507, 5304.9795};
						};
						class T10A: T10 
						{
							position[] = {2275.553, 5333.9268};
							direction = 376.44101;
							upTime = 8;
							spawn = 1;
						};
						class T10B: T10 
						{
							position[] = {2271.6179, 5335.0049};
							direction = 365.83801;
							upTime = 8;
							spawn = 1;
						};
						class T10C: T10 
						{
							position[] = {2274.4653, 5331.9912};
							direction = 0.75610501;
							side = 1;
							spawn = 1;
							positionTrigger[] = {};
						};
						class T10D: T10C 
						{
							position[] = {2272.2012, 5331.9907};
							direction = -16.8946;
						};
						class T10E: T10C 
						{
							position[] = {2273.0637, 5333.4448};
							direction = 15.0818;
							spawn = 0;
						};
						class T10F: T10C 
						{
							position[] = {2270.7458, 5332.8525};
							direction = 1.92643;
							spawn = 0;
						};
						class T11: T1 
						{
							position[] = {2076.0632, 5287.8486};
							direction = 288.08801;
							upTime = 8;
							side = 0;
							size = 1;
							positionTrigger[] = {2142.9211, 5294.2007};
							radiusTrigger = 40;
						};
						class T12: T1 
						{
							position[] = {2018.5386, 5276.1211};
							direction = 229.045;
							upTime = 10;
							positionTrigger[] = {2031.0946, 5288.0054};
							radiusTrigger = 40;
						};
						class T12A: T12 
						{
							position[] = {2016.6198, 5277.5928};
							direction = 248.49001;
							upTime = 12;
							spawn = 1;
						};
						class T12B: T12 
						{
							position[] = {2009.9294, 5279.4917};
							direction = 255.209;
							upTime = 8;
							spawn = 1;
						};
						class T12C: T12 
						{
							position[] = {2016.699, 5271.4497};
							direction = 255.084;
							upTime = 8;
						};
						class T13: T1  
						{
							position[] = {1830.04, 5269.207};
							direction = 281.05399;
							upTime = 10;
							positionMove[] = {1858.2943, 5299.5117};
							moveTime = 4;
							size = 1;
							type = 1;
							positionTrigger[] = {1927.3126, 5294.998};
							radiusTrigger = 40;
						};
						class T14: T1 
						{
							position[] = {1860.3124, 5193.4917};
							direction = 230.02901;
							upTime = 13;
							positionTrigger[] = {1875.4718, 5208.27};
							radiusTrigger = 40;
						};
						class T14A: T14 
						{
							position[] = {1871.8903, 5186.6885};
							direction = 200.36;
							upTime = 11;
							spawn = 1;
						};
						class T14B: T14 
						{
							position[] = {1856.7703, 5182.9658};
							direction = 256.34201;
							upTime = 20;
						};
						class T15: T1 
						{
							position[] = {1806.0093, 5091.1582};
							direction = 200.036;
							upTime = 8;
							positionTrigger[] = {1827.7303, 5117.9858};
							radiusTrigger = 40;
						};
						class T15A: T15 
						{
							position[] = {1806.5607, 5089.4609};
							direction = 192.134;
							side = 1;
							spawn = 1;
							positionTrigger[] = {};
						};
						class T15B: T15A 
						{
							position[] = {1804.3556, 5089.9697};
							direction = 223.993;
							spawn = 0;
						};
					};
				};
			};
			
			class Water 
			{
				positionStart[] = 
				{
					{13265.838, 9374.1641}
				};
				
				directionStart[] = {-32.258839};
				
				positionEnd[] = 
				{
					{13354.544, 10221.939}	
				};
				
				objectSet[] = 
				{
					"ca\chernarus\data\scripts\armory\killHouseWater1.sqf"	
				};
				
				positionAnchor[] = 
				{
					{13302.855, 9781.7188}	
				};
				
				waypoints[] = 
				{
					{
						{13085.451, 9598.6748}, 
						{13240.175, 9773.7432}, 
						{13063.014, 9773.8574}, 
						{13268.607, 9898.6172}
					}	
				};
				
				class Targets 
				{
					class Set1 
					{
						class T1 
						{
							position[] = {13029.741, 9654.7334};
							direction = 345.354;
							upTime = 7;
							positionMove[] = {};
							moveTime = 0;
							type = 0;
							side = 0;
							size = 0;
							spawn = 0;
							positionTrigger[] = {13084.285, 9608.9238};
							radiusTrigger = 60;
						};
						class T1A: T1 
						{
							position[] = {13034.882, 9655.124};
							direction = 346.13501;
							upTime = 8;
							spawn = 1;
						};
						class T1B: T1 
						{
							position[] = {13039.108, 9668.6719};
							direction = 351.30099;
							upTime = 7;
						};
						class T1C: T1 
						{
							position[] = {13043.661, 9668.4229};
							direction = 353.41501;
							upTime = 8;
							spawn = 1;
						};
						class T1D: T1 
						{
							position[] = {13048.369, 9671.8223};
							direction = 345.703;
							upTime = 10;
						};
						class T2: T1  
						{
							position[] = {13106.535, 9706.5938};
							direction = 325.72601;
							upTime = 8;
							positionMove[] = {13112.85, 9695.0293};
							moveTime = 2;
							type = 1;
							positionTrigger[] = {13142.364, 9664.8818};
						};
						class T2A: T2  
						{
							position[] = {13110.547, 9710.2383};
							direction = 328.88699;
							upTime = 10;
							positionMove[] = {13114.491, 9697.7656};
							moveTime = 2;
						};
						class T3: T2  
						{
							position[] = {13131.029, 9721.3584};
							direction = 323.09799;
							upTime = 12;
							positionMove[] = {13140.128, 9726.1631};
							moveTime = 3;
							positionTrigger[] = {13173.505, 9681.6992};
						};
						class T3A: T3 
						{
							position[] = {13135.725, 9721.3281};
							direction = 333.76599;
							upTime = 8;
							positionMove[] = {};
							type = 0;
							spawn = 1;
							side = 2;
						};
						class T4: T1 
						{
							position[] = {13196.515, 9752.7578};
							direction = 307.53299;
							side = 1;
							positionTrigger[] = {};
						};
						class T4A: T4 
						{
							position[] = {13197.004, 9754.2998};
							direction = 273.802;
							spawn = 1;
						};
						class T5: T1 
						{
							position[] = {13010.213, 9753.834, 5.8};
							direction = 274.867;
							upTime = 7;
							size = 1;
							positionTrigger[] = {13055.928, 9773.7979};
						};
						class T5A: T5 
						{
							position[] = {13010.476, 9756.2344, 5.8};
							direction = 276.54901;
							upTime = 9;
							size = 0;
							spawn = 1;
						};
						class T5B: T5 
						{
							position[] = {13011.08, 9758.2725, 5.8};
							direction = 276.36099;
							upTime = 10;
							size = 0;
						};
						class T6: T1 
						{
							position[] = {13012.962, 9790.1895, 5.8};
							direction = 262.59799;
							upTime = 10;
							spawn = 1;
							side = 2;
							positionTrigger[] = {13032.003, 9798.2129};
						};
						class T6A: T6 
						{
							position[] = {13012.846, 9791.9258, 5.8};
							direction = 295.81699;
						};
						class T7: T1 
						{
							position[] = {13144.436, 9847.6553, 5.8};
							direction = 399.08899;
							upTime = 10;
							side = 2;
							positionTrigger[] = {13139.76, 9813.2627};
						};
						class T7A: T7 
						{
							position[] = {13146.296, 9851.3662, 6.6};
							direction = 357.755;
							upTime = 11;
							side = 0;
						};
						class T7B: T7 
						{
							position[] = {13145.411, 9853.25, 6.6};
							direction = 403.987;
							upTime = 12;
							side = 0;
							spawn = 1;
						};
						class T8: T2  
						{
							position[] = {13174.454, 9903.9199, -0.4};
							direction = 335.30701;
							upTime = 15;
							positionMove[] = {13221.301, 9922.5146, -0.4};
							moveTime = 5;
							size = 1;
							positionTrigger[] = {13238.863, 9865.9746};
						};
						class T9: T1 
						{
							position[] = {13257.326, 9932.3936};
							direction = 338.875;
							upTime = 14;
							positionTrigger[] = {13284.843, 9896.292};
						};
						class T9A: T9 
						{
							position[] = {13258.572, 9932.8262};
							direction = 343.983;
							upTime = 13;
							spawn = 1;
						};
						class T9B: T9 
						{
							position[] = {13261.592, 9936.5566};
							direction = 351.336;
							upTime = 8;
						};
						class T10: T1 
						{
							position[] = {13266.578, 9981.5879};
							direction = 294.11401;
							upTime = 8;
							positionTrigger[] = {13303.959, 9983.041};
						};
						class T10A: T10 
						{
							position[] = {13263.899, 9978.0605};
							direction = 273.371;
							upTime = 9;
							spawn = 1;
						};
						class T10B: T10 
						{
							position[] = {13263.899, 9978.0605};
							direction = 273.371;
							side = 1;
							positionTrigger[] = {};
						};
						class T10C: T10B 
						{
							position[] = {13264.358, 9983.0459};
							direction = 287.21701;
						};
						class T10D: T10B 
						{
							position[] = {13264.964, 9984.71};
							direction = 309.30899;
							spawn = 1;
						};
						class T11: T1 
						{
							position[] = {13280.712, 10047.67};
							direction = 306.05499;
							upTime = 8;
							spawn = 1;
							positionTrigger[] = {13324.923, 10049.91};
						};
						class T11A: T11 
						{
							position[] = {13281.423, 10048.793};
							direction = 329.55099;
							upTime = 9;
						};
						class T12: T2  
						{
							position[] = {13307.406, 10159.895, -0.4};
							direction = 354.34601;
							upTime = 10;
							positionMove[] = {13310.531, 10121.082, -0.4};
							moveTime = 3;
							size = 1;
							spawn = 1;
							positionTrigger[] = {13332.518, 10108.107};
						};
						class T13: T1 
						{
							position[] = {13267.241, 9802.0703, -0.4};
							direction = 391.664;
							upTime = 7;
							spawn = 1;
							size = 1;
							positionTrigger[] = {13248.573, 9752.04};
						};
						class T13A: T13 
						{
							position[] = {13278.413, 9793.0264, -0.4};
							direction = 416.29401;
							upTime = 9;
						};
					};
				};
			};
		};
	};
};