// BWA3 Realism - Core
// (C) 2013 KoffeinFlummi. See LICENSE.


// MP Synchronization
0 spawn {
  while {true} do {
    if (isServer) then {
      BWA3_Date = date;
      BWA3_Wind = wind;
      BWA3_Fog = fogParams;
      BWA3_Overcast = overcast;
      BWA3_Rain = rain;
      publicVariable "BWA3_Date";
      publicVariable "BWA3_Wind";
      publicVariable "BWA3_Fog";
      publicVariable "BWA3_Overcast";
      publicVariable "BWA3_Rain";
    } else {
      sleep 3;
      setDate BWA3_Date;
      setWind (BWA3_Wind + [false]);
      setFog BWA3_Fog;
      setOvercast BWA3_Overcast;
      setRain BWA3_Rain;
    };
    sleep 30;
  }
}