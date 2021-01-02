class RscStandardDisplay;

class RscDisplayMain: RscStandardDisplay {

    class Spotlight {
		class STAF_Join_Training_Server {
            text = "Quick Join Training Server";
            textIsQuote = 0;
            picture = "\staf_pmc_main\icon\STAF_logo_256_wb.paa";
            action = "connectToServer ['136.243.1.219', 2313, 'kalinka']";
            actionText = "Direct Connect to Training Server";
            condition = "true";
        };
        class STAF_Join_Main_Server {
            text = "Quick Join Main Server";
            textIsQuote = 0;
            picture = "\staf_pmc_main\icon\STAF_logo_256_wb.paa";
            action = "connectToServer ['136.243.1.219', 2303, 'kalinka']";
            actionText = "Direct Connect to Main Server";
            condition = "true";
        };
    };
};