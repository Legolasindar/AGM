// by commy2

private ["_unit", "_message"];

_unit = _this select 0;

if (_unit == player) exitWith {};

enableCamShake true;
addCamShake [4, 0.5, 5];

//_message = format ["%1 tapped you on your shoulder.", name _unit];
_message = localize "STR_AGM_Interaction_YouWereTapped";

[_message] call AGM_Core_fnc_displayTextStructured;
