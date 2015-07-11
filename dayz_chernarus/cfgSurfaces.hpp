class CfgSurfaces
{
	class Default {};
	class Water {};

	class CRGrass1: Default
	{
		access = ReadOnly;
		files=cr_trava1_*;
//	pattern="ca\chernarus\data\cr_trava1_*";
		rough=0.11;
		dust=0.1;
		soundEnviron = grass;
		character=CRGrassClutter;
		soundHit = soft_ground;
	};

	class CRGrass2: Default
	{
		access = ReadOnly;
		files=cr_trava2_*;
		rough=0.11;
		dust=0.1;
		soundEnviron = grass;
		character=CRTallGrassClutter;
		soundHit = soft_ground;
	};

	class CRGrassW1: Default
	{
		access = ReadOnly;
		files=cr_travad1_*;
		rough=0.11;
		dust=0.1;
		soundEnviron = grass;
		character=CRGrassWClutter;
		soundHit = soft_ground;
	};

	class CRGrassW2: Default
	{
		access = ReadOnly;
		files=cr_travad2_*;
		rough=0.11;
		dust=0.1;
		soundEnviron = grass;
		character=CRTallGrassWClutter;
		soundHit = soft_ground;
	};

	class CRForest1: Default
	{
		access = ReadOnly;
		files=cr_les1_*;
		rough=0.2;
		dust=0.2;
		soundEnviron = forest;
		character=CRForestMixedClutter;
		soundHit = soft_ground;
	};

	class CRForest2: Default
	{
		access = ReadOnly;
		files=cr_les2_*;
		rough=0.2;
		dust=0.15;
		soundEnviron = forest;
		character=CRForestFirClutter;
		soundHit = soft_ground;
	};

	class CRMudGround: Default
	{
		access = ReadOnly;
		files=cr_pole_*;
		rough=  0.09;
		dust=0.1;
		soundEnviron = dirt;
		character=SparseWeedsClutter;
		soundHit = soft_ground;
	};

	class CRField1: Default
	{
		access = ReadOnly;
		files=cr_oranice_*;
		rough=0.15;
		dust=0.25;
		soundEnviron = dirt;
		character=Empty;
		soundHit = soft_ground;
	};

	class CRField2: Default
	{
		access = ReadOnly;
		files=cr_strniste_*;
		rough=0.13;
		dust=0.3;
		soundEnviron = dirt;
		character=CRStubbleClutter;
		soundHit = soft_ground;
	};

	class CRGrit1: Default
	{
		access = ReadOnly;
		files=cr_sterk_*;
		rough=0.1;
		dust=0.25;
		soundEnviron = gravel;
		character=Empty;
		//character=CRGritClutter;
		soundHit = hard_ground;
	};

	class CRHeather: Default
	{
		access = ReadOnly;
		files=cr_vres_*;
		rough=0.14;
		dust=0.1;
		soundEnviron = forest;
		character=CRHeatherClutter;
		soundHit = soft_ground;
	};

	class CRRock: Default
	{
		access = ReadOnly;
		files=cr_skala_*;
		rough=0.2;
		dust=0.07;
		soundEnviron = rock;
		character=Empty;
		soundHit = hard_ground;
	};

	class CRTarmac: Default
	{
		access = ReadOnly;
		files=cr_asfalt_*;
		rough=0.08;
		dust=0.05;
		soundEnviron = road;
		character=Empty;
		soundHit = hard_ground;
	};

	class CRConcrete: Default
	{
		access = ReadOnly;
		files=cr_beton_*;
		rough=0.08;
		dust=0.05;
		soundEnviron = concrete_ext;
		character=Empty;
		soundHit = concrete;
	};
};

class CfgSurfaceCharacters
{
	class CRGrassClutter
  	{
			probability[]={0.79,0.1,0.1,0.01};
			names[]={GrassCrookedGreen,GrassCrooked,AutumnFlowers,WeedDead};
  	};

  	class CRTallGrassClutter
  	{
			probability[]={0.4,0.2,0.3,0.07,0.02,0.01};
    			names[]={GrassTall,AutumnFlowers,GrassBunch,GrassCrooked,WeedDead,WeedDeadSmall};
  	};

  	class CRGrassWClutter
  	{
			probability[]={0.65,0.17,0.1,0.05,0.03};
			names[]={GrassCrooked,GrassCrookedGreen,AutumnFlowers,WeedDead,WeedDeadSmall};
  	};

  	class CRTallGrassWClutter
  	{
			probability[]={0.3,0.25,0.2,0.2,0.03,0.02};
			names[]={GrassTall,AutumnFlowers,GrassBunch,GrassCrooked,WeedDead,WeedDeadSmall};
  	};

  	class CRForestMixedClutter
  	{
			probability[]={0.2,0.1,0.2,0.001,0.003};
			names[]={GrassCrookedForest,FernAutumn,FernAutumnTall,MushroomsHorcak,MushroomsPrasivka};
  	};

  	class CRForestFirClutter
  	{
			probability[]={0.4,0.1,0.1,0.15,0.05,0.003,0.005,0.008,0.004};
			names[]={BlueBerry,FernAutumn,FernAutumnTall,SmallPicea,RaspBerry,MushroomsHorcak,MushroomsPrasivka,MushroomsBabka,MushroomsMuchomurka};
  	};

  	class CRHeatherClutter
  	{
			probability[]={0.15,0.5,0.3,0.1};
			names[]={BlueBerry,HeatherBrush,GrassCrooked,WeedSedge};
  	};

  	class CRStubbleClutter
  	{
			probability[]={0.975,0.01,0.01,0.005};
			names[]={StubbleClutter,AutumnFlowers,WeedDeadSmall,WeedDead};
  	};
};