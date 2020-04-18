class CfgWorlds
{
	class CAWorld;
	class Tanoa: CAWorld
	{
		class SimulWeather
		{
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					cloudiness = 0;
				};
				class Weather6: DefaultKeyframe
				{
					cloudiness = 0.92;
				};
			};
		};
	};
};
