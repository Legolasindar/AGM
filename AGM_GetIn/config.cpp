class CfgPatches {
	class AGM_GetIn {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.60;
		requiredAddons[] = {AGM_Core, AGM_Interaction};
		version = "0.92";
		versionStr = "0.92";
		versionAr[] = {0,92,0};
		author[] = {"commy2"};
		authorUrl = "https://github.com/commy2/";
	};
};

class CfgFunctions {
	class AGM_GetIn {
		class AGM_GetIn {
			file = "AGM_GetIn\functions";
			class canGetInDriver;
			class canGetInGunner;
			class canGetInCommander;
			class canGetInPilot;
			class canGetInTurret;
			class canGetInCargo;
			class getInDriver;
			class getInGunner;
			class getInCommander;
			class getInPilot;
			class getInTurret;
			class getInCargo;
		};
	};
};

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class AGM_Actions {
			class AGM_GetIn {
				displayName = "$STR_AGM_GetInVehicle";
				distance = 4;
				condition = "isNull (gunner AGM_Interaction_Target)";
				statement = "player moveInAny AGM_Interaction_Target";
				showDisabled = 0;
				priority = -1.9;
			};
		};
	};
	
	class StaticMortar;
	class Mortar_01_base_F: StaticMortar {
		class AGM_Actions {
			class AGM_GetIn {
				displayName = "$STR_AGM_GetInVehicle";
				distance = 4;
				condition = "isNull (gunner AGM_Interaction_Target)";
				statement = "player moveInAny AGM_Interaction_Target";
				showDisabled = 0;
				priority = -1.9;
			};
		};
	};

	class LandVehicle;
	class Car: LandVehicle {
		class AGM_Actions {
			class AGM_GetInDriver {
				displayName = "$STR_AGM_GetInVehicleAsDriver";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInDriver";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInDriver";
				showDisabled = 0;
				priority = -1.90;
			};
			class AGM_GetInGunner {
				displayName = "$STR_AGM_GetInVehicleAsGunner";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInGunner";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInGunner";
				showDisabled = 0;
				priority = -1.91;
			};
			class AGM_GetInCommander {
				displayName = "$STR_AGM_GetInVehicleAsCommander";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInCommander";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInCommander";
				showDisabled = 0;
				priority = -1.92;
			};
		};
	};

	class Tank: LandVehicle {
		class AGM_Actions {
			class AGM_GetInDriver {
				displayName = "$STR_AGM_GetInVehicleAsDriver";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInDriver";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInDriver";
				showDisabled = 0;
				priority = -1.90;
			};
			class AGM_GetInGunner {
				displayName = "$STR_AGM_GetInVehicleAsGunner";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInGunner";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInGunner";
				showDisabled = 0;
				priority = -1.91;
			};
			class AGM_GetInCommander {
				displayName = "$STR_AGM_GetInVehicleAsCommander";
				distance = 4;
				condition = "[AGM_Interaction_Target] call AGM_GetIn_fnc_canGetInCommander";
				statement = "[AGM_Interaction_Target] call AGM_GetIn_fnc_getInCommander";
				showDisabled = 0;
				priority = -1.92;
			};
		};
	};
};
