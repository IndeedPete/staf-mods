class CfgNotifications
{
	class STAF_notification_hatesarma
	{
		title = "Zeus hates Arma"; // Tile displayed as text on black background. Filled by arguments.
		description = "Anything that happens atm is because Arma and/or the AI does not behave!"; // Brief description displayed as structured text. Colored by "color", filled by arguments
		iconPicture = "\staf_framework\img\icon_sigh_white.paa";
		color[] = {1,1,1,1};
		duration = 5; // How many seconds will the notification be displayed
		priority = 7; // Priority; higher number = more important; tasks in queue are selected by priority
	};

	class STAF_notification_healed
	{
		title = "You have been healed"; // Tile displayed as text on black background. Filled by arguments.
		description = "'It's just a flesh wound!'"; // Brief description displayed as structured text. Colored by "color", filled by arguments
		iconPicture = "\staf_framework\img\icon_medical_white.paa";
		color[] = {1,1,1,1};
		duration = 5; // How many seconds will the notification be displayed
		priority = 7; // Priority; higher number = more important; tasks in queue are selected by priority
	};

	class STAF_notification_sombodyhealed
	{
		title = "Somebody called the Medic"; // Tile displayed as text on black background. Filled by arguments.
		description = "Somebody thought you need a Medic!"; // Brief description displayed as structured text. Colored by "color", filled by arguments
		iconPicture = "\staf_framework\img\icon_medical_white.paa";
		color[] = {1,1,1,1};
		duration = 5; // How many seconds will the notification be displayed
		priority = 7; // Priority; higher number = more important; tasks in queue are selected by priority
	};
};
