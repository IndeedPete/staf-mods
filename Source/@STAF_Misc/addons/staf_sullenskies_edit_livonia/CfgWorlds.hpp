class CfgWorlds
{
	class CAWorld;
	class Enoch: CAWorld
	{
		class SimulWeather
		{
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0;
					cloudiness = 0;
					diffusivity = 0.001;
					extinction = 3.9;
					seqFileKeyframe = 0;
				};
			};
		};
	};
};
