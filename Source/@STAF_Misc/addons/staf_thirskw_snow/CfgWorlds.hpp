class CfgWorlds
{
    class DefaultWorld;
    class CAWorld: DefaultWorld
    {
        cutscenes[]={};
    };
    class ThirskW : CAWorld
    {
        class CfgEnvSounds;
        class EnvSounds : CfgEnvSounds
        {
            class Rain
            {
                name = "Snow";
                sound[] = {"A3\sounds_f\ambient\winds\wind-synth-slow",0.0199526,1};
                soundNight[] = {"A3\sounds_f\ambient\winds\wind-synth-slow",0.03,1};
                volume = "(windy factor[0,1])";
            };
        };
        class Rain
        {
            texture = "CUP\Terrains\cup_terrains_weather\data\cup_snowflaker_ca.paa";
            raindrop = "\CUP\Terrains\cup_terrains_weather\cup_snowflaker.p3d";
            speed = 0.5;
            levels[] = {8,2};
        };
        class RainParticles
        {
            rainDropTexture = "CUP\Terrains\cup_terrains_weather\data\cup_snowflaker_ca.paa";
            texDropCount = 1;
            minRainDensity = 0.1;
            maxRainDensity = 9;
            effectRadius = 10;
            windCoef = 20;
            dropSpeed = 1;
            rndSpeed = 0.5;
            rndDir = 0.8;
            dropWidth = 0.03;
            dropHeight = 0.03;
            dropColor[] = {0.91,0.96,0.99,1};
            lumSunFront = 0.1;
            lumSunBack = 0.1;
            refractCoef = 0.5;
            refractSaturation = 0.3;
        };
    };
};
