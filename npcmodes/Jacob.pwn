#define RECORDING "Jacbo" //Aqui ponemos el nombre del arvhivo que grabaste, Ejemplo: vendedor
#define RECORDING_TYPE 2  //Aqui va 1 tu NPC es en veh�culo, 2 si es a pie

#include <a_npc>
main(){}

public OnRecordingPlaybackEnd()
{
    StartRecordingPlayback(RECORDING_TYPE, RECORDING); //Aquí lo que hacemos es que cuando se acabe la grabación de tu NPC vuelva a empezar, quítalo si no quieres que esto pase
    return 1;
}

#if RECORDING_TYPE == 1  // Si es en vehiculo se cumple esto
    public OnNPCEnterVehicle(vehicleid, seatid)
    {
        StartRecordingPlayback(RECORDING_TYPE, RECORDING); //Aquí lo que hacemos es que cuando el NPC entre a su vehículo empieze la grabación que existe
        return 1;
    }

    public OnNPCExitVehicle()
    {
        StopRecordingPlayback(); //Aquí lo que hacemos es que cuando el NPC salga del vehículo termine la grabación
        return 1;
    }
#else // Sino es en vehiculo solo se cumple esto
    public OnNPCSpawn()
    {
        StartRecordingPlayback(RECORDING_TYPE, RECORDING); //Aquí lo que hacemos es que cuando el NPC aparezca empieze a hacer su recorrido
        return 1;
    }
#endif
