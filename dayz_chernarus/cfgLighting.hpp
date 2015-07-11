class Lighting : DefaultLighting
{
	groundReflection[]={0.06,0.06,0.03}; // dark olive - ground
};
#define LV (-4)
class DayLightingBrightAlmost:DayLightingBrightAlmost
{
	deepNight[]={
		-15,
		{0.05,0.05,0.06},{0.001,0.001,0.002},
		{0.02,0.02,0.05},{0.003,0.003,0.003},
		{0.0001,0.0001,0.0002},{0.0001,0.0001,0.0002},
		0
	};
	fullNight[]={
		-5,
		{0.05,0.05,0.05},{0.02,0.02,0.02},
		{0.04,0.04,0.04},{0.04,0.04,0.04},
		{0.01,0.01,0.02},{0.08,0.06,0.06},
		0
	};
	sunMoon[]={
		-3.75,
		{0.045,0.04,0.04},{0.04,0.04,0.04},
		{0.045,0.04,0.04},{0.04,0.04,0.04},
		{0.04,0.035,0.04},{0.1,0.08,0.09},
		0.5
	};
	earlySun[]={
		-2.5,
		{0.12,0.1,0.1},{0.08,0.06,0.07},
		{0.12,0.1,0.1},{0.08,0.06,0.07},
		{0.08,0.07,0.08},{0.1,0.10,0.12},
		1
	};
	sunrise[]={
		0,
		{{0.7,0.45,0.45},5.16+LV},{{0.07,0.09,0.12},4.0+LV},
		{{0.6,0.47,0.25},4.66+LV},{{0.10,0.09,0.10},4.3+LV},
		{{0.5,0.4,0.4},6.49+LV},{{0.88,0.51,0.24},8.39+LV},
		1
	};
	earlyMorning[]={
		3,
		{{0.65,0.55,0.55},6.04+LV},{{0.08,0.09,0.11},4.5+LV},
		{{0.55,0.47,0.25},5.54+LV},{{0.10,0.09,0.10},5.02+LV},
		{{0.5,0.4,0.4},7.05+LV},{{0.88,0.51,0.24},8.88+LV},
		1
	};
	midMorning[]={
		8,
		{{0.98,0.85,0.8},8.37+LV},{{0.08,0.09,0.11},6.42+LV},
		{{0.87,0.47,0.25},7.87+LV},{{0.09,0.09,0.10},6.89+LV},
		{{0.5,0.4,0.4},8.9+LV},{{0.88,0.51,0.24},10.88+LV},
		1
	};
	morning[]={
		16,
		{{1,1,0.9},13.17+LV},{{0.17,0.18,0.19},10.26+LV},
		{{1,1,0.9},12.67+LV},{{0.17,0.18,0.19},11.71+LV},
		{{0.15,0.15,0.15},12.42+LV},{{0.17,0.17,0.15},14.42+LV},
		1
	};
	noon[]={
		45,
		{{1,1,1},17+LV},{{1,1.3,1.55},13.5+LV},
		{{1,1,1},15+LV},{{0.36,0.37,0.38},13.5+LV},
		{{1,1,1},16+LV},{{1.0,1.0,1},17+LV},
		1
	};
	

};
class DayLightingRainy:DayLightingRainy
{
	deepNight[]={
		-15,
		{0.0034,0.0034,0.004},{0.003,0.003,0.003},
		{0.0034,0.0034,0.004},{0.003,0.003,0.003},
		{0.001,0.001,0.002},{0.001,0.001,0.002},
		0
	};
	fullNight[]={
		-5,
		{0.023,0.023,0.023},{0.02,0.02,0.02},
		{0.023,0.023,0.023},{0.02,0.02,0.02},
		{0.01,0.01,0.02},{0.08,0.06,0.06},
		0
	};
	sunMoon[]={
		-3.75,
		{0.04,0.04,0.05},{0.04,0.04,0.05},
		{0.04,0.04,0.05},{0.04,0.04,0.05},
		{0.04,0.035,0.04},{0.11,0.08,0.09},
		0.5
	};
	earlySun[]={
		-2.5,
		{0.0689,0.0689,0.0804},{0.06,0.06,0.07},
		{0.0689,0.0689,0.0804},{0.06,0.06,0.07},
		{0.08,0.07,0.08},{0.14,0.10,0.12},
		0.5
	};
	#define RainlyLight {1,1,1}
	earlyMorning[]={
		0,
		{RainlyLight,LV+3.95},{RainlyLight,LV+3.0},
		{RainlyLight,LV+3.95},{RainlyLight,LV+3.0},
		{RainlyLight,LV+4},{RainlyLight,LV+5.5},
		1
	};
	morning[]={
		5,
		{RainlyLight,LV+5.7},{RainlyLight,LV+4.5},
		{RainlyLight,LV+5.7},{RainlyLight,LV+4.5},
		{RainlyLight,LV+7},{RainlyLight,LV+8},
		1
	};
	lateMorning[]={
		25,
		{RainlyLight,LV+10.45},{RainlyLight,LV+9.75},
		{RainlyLight,LV+10.45},{RainlyLight,LV+9.75},
		{RainlyLight,LV+12},{RainlyLight,LV+12.75},
		1
	};
	noon[]={
		70,
		{RainlyLight,LV+12.5},{RainlyLight,LV+11},
		{RainlyLight,LV+12},{RainlyLight,LV+11},
		{RainlyLight,LV+13.5},{RainlyLight,LV+14},
		1
	};
};