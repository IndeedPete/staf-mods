class RscStandardDisplay;
class RscPictureKeepAspect;

class RscDisplayLoadMission: RscStandardDisplay
{
    class controls
    {
        class STAF_Logo: RscPictureKeepAspect
        {
            idc = 56897;
            text = "\STAF_FRAMEWORK\STAF_Logo_Desat.paa";
            x = 0.425 * safezoneW + safezoneX;
            y = 0.8 * safezoneH + safezoneY;
            w = 0.15 * safezoneW;
            h = 0.15 * safezoneH;
            colorText[] = {1,1,1,0.5};
        };
    };
};
