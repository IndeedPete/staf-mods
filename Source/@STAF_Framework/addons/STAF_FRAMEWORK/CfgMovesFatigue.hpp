class CfgMovesFatigue
{
		/* make sway recovery faster when changing stances, offset by weight */
		aimPrecisionSpeedCoef = 20;  //default 5
		/* disable sprinting for this amount of secs when stamina runs out */
		staminaCooldown = 5;         //default 10
		/* "amount" of stamina, how fast it drains (higher = slower) */
		staminaDuration = 120;        //default 60
		/* restore stamina from 0 to full in this amount of secs (Total Stamina - Inventory Load)*/
		staminaRestoration = 25;     //default 30
		/* when terrain gradient prevents sprinting (hill icon),
		 * add this value to stamina gain */
		terrainDrainSprint = -0.75;   //default -1
		/* when terrain gradient forces you to walk (steep hill),
		 * add this value to stamina gain (warning: too low negative values
		 * actually restore stamina due to the character walking) */
		terrainDrainRun = -0.90;      //default -1
		/* when terrain gradient disable sprint, animation speed is multiplied by this value */
		terrainSpeedCoef = 0.9;
};
