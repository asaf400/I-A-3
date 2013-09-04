/*
	File:	fn_getFuzzyPos.sqf
	Author:	Rarek [AW]

	Description
		|	Gets a random position within a certain radius
		|	of a given position. Created mainly for fuzzy
		|	positions in Side Missions.
		|____________________

	Parameters
		|	0 - ARRAY: Central position
		|	1 - INTEGER: Maximum radius from position
		|____________________

	Returns
		|	ARRAY: Position
		|____________________
*/

private["_pos", "_radius", "_double", "_fuzzyPos"];

_pos = [_this,0,[0,0,0],[[]],[2,3]] call BIS_fnc_param;
_radius = [_this,1,100,[0]] call BIS_fnc_param;
_double = (_radius * 2);

_fuzzyPos =
[
	((_pos select 0) - _radius) + (random _double),
	((_pos select 1) - _radius) + (random _double),
	0
];

_fuzzyPos
