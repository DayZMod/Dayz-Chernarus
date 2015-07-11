//AUTUMN
	class GrassTall: DefaultClutter
	{
		model=ca\plants2\clutter\c_GrassTall.p3d;
		affectedByWind = 0.4;
		swLighting = true;
		scaleMin = 0.7;
		scaleMax = 1.0;
	};
	class StubbleClutter: DefaultClutter
	{
		model=ca\plants2\clutter\c_stubble.p3d;
		affectedByWind = 0.1;
		swLighting = true;
		scaleMin = 0.9;
		scaleMax = 1.1;
	};
	class AutumnFlowers: DefaultClutter
	{
		model=ca\plants2\clutter\c_autumn_flowers.p3d;
		affectedByWind = 0.4;
		swLighting = true;
		scaleMin = 0.7;
		scaleMax = 1.0;
	};
	class GrassBunch: DefaultClutter
	{
		model=ca\plants2\clutter\c_GrassBunch.p3d;
		affectedByWind = 0.35;
		swLighting = true;
		scaleMin = 0.6;
		scaleMax = 1.0;
	};

	class GrassCrooked: DefaultClutter
	{
		model=ca\plants2\clutter\c_GrassCrooked.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.7;
		scaleMax = 1.4;
	};

	class GrassCrookedGreen: DefaultClutter
	{
		model=ca\plants2\clutter\c_GrassCrookedGreen.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.9;
		scaleMax = 1.3;
	};

	class GrassCrookedForest: DefaultClutter
	{
		model=ca\plants2\clutter\c_GrassCrookedForest.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.8;
		scaleMax = 1.4;
	};

	class WeedDead: DefaultClutter
	{
		model=ca\plants2\clutter\c_WeedDead.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.75;
		scaleMax = 1.1;
	};
	
	class WeedDeadSmall: DefaultClutter
	{
		model=ca\plants2\clutter\c_WeedDead2.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.75;
		scaleMax = 0.9;
	};

/*
	class PlantsAutumnForest: DefaultClutter
	{
		model=ca\plants2\clutter\c_leaves.p3d;
		affectedByWind = 0;
		swLighting = true;
		scaleMin = 0.75;
		scaleMax = 0.9;
	};
*/

	class HeatherBrush: DefaultClutter
	{
		model=ca\plants2\clutter\c_caluna.p3d;
		affectedByWind = 0.15;
		swLighting = true;
		scaleMin = 0.9;
		scaleMax = 1.8;
		surfaceColor[] = {0.53,0.5,0.37,1};
	};

	class WeedSedge: DefaultClutter
	{
		model=ca\plants2\clutter\c_weed3.p3d;
		affectedByWind = 0.20;
		swLighting = true;
		scaleMin = 0.5;
		scaleMax = 0.85;
	};

	class WeedTall: DefaultClutter
	{
		model=ca\plants2\clutter\c_weed2.p3d;
		affectedByWind = 0.3;
		swLighting = true;
		scaleMin = 0.8;
		scaleMax = 1.1;
	};

	class BlueBerry: DefaultClutter
	{
		model=ca\plants2\clutter\c_BlueBerry.p3d;
		affectedByWind = 0.05;
		swLighting = true;
		scaleMin = 0.85;
		scaleMax = 1.3;
	};

	class RaspBerry: DefaultClutter
	{
		model=ca\plants2\clutter\c_raspBerry.p3d;
		affectedByWind = 0;//0.3
		swLighting = true;
		scaleMin = 0.8;
		scaleMax = 1.2;
	};

	class FernAutumn: DefaultClutter
	{
		model=ca\plants2\clutter\c_fern.p3d;
		affectedByWind = 0.1;
		scaleMin = 0.6;
		scaleMax = 1.2;
	};

	class FernAutumnTall: DefaultClutter
	{
		model=ca\plants2\clutter\c_fernTall.p3d;
		affectedByWind = 0.15;
		scaleMin = 0.75;
		scaleMax = 1.0;
	};

	class SmallPicea: DefaultClutter
	{
		model=ca\plants2\clutter\c_picea.p3d;
		affectedByWind = 0.05;
		scaleMin = 0.75;
		scaleMax = 1.25;
	};
	
	class PlantWideLeaf: DefaultClutter
	{
		model=ca\plants2\clutter\c_WideLeafPlant.p3d;
		affectedByWind = 0.1;
		scaleMin = 1.0;
		scaleMax = 1.0;
	};
//END OF AUTUMN

//MUSHROOMS
	class MushroomsHorcak: DefaultClutter
	{
		model=ca\plants2\clutter\c_MushroomHorcak.p3d;
		affectedByWind = 0;
		scaleMin = 0.85;
		scaleMax = 1.25;
	};

	class MushroomsPrasivka: MushroomsHorcak
	{
		model=ca\plants2\clutter\c_MushroomPrasivky.p3d;
	};

	class MushroomsBabka: MushroomsHorcak
	{
		model=ca\plants2\clutter\c_MushroomBabka.p3d;
	};

	class MushroomsMuchomurka: MushroomsHorcak
	{
		model=ca\plants2\clutter\c_MushroomMuchomurka.p3d;
	};
//END OF MUSHROOMS