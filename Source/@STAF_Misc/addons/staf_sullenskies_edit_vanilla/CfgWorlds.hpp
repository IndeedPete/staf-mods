class CfgWorlds
{
	class CAWorld;
	class Altis: CAWorld {
		class SimulWeather
		{
			class DefaultKeyframe;
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					cloudiness = 0;
				};
			};
		};
	};
  class Stratis: CAWorld {
		class SimulWeather
		{
			class DefaultKeyframe;
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
	class Malden: CAWorld {
  	class SimulWeather
  	{
			class DefaultKeyframe;
  		class Overcast
  		{
  			class Weather1: DefaultKeyframe
  			{
  				cloudiness = 0;
  			};
  		};
  	};
	};
};
