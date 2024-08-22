#include<iostream>

void vehicleMaintenanceSchedule(void)
{
    float odo_reading=0.0f;
    float maintenance_interval=0.0f;
    std::cout<<"Enter odo-meter reading in KM"<<std::endl;
    std::cin>>odo_reading;
    std::cout<<"Enter maintenance interval in KM"<<std::endl;
    std::cin>>maintenance_interval;
    float remaining_km=0.0f;
    float maintenance_interval_dumy=maintenance_interval;
    while(float(maintenance_interval_dumy)<float(odo_reading))
    {
        maintenance_interval_dumy+=maintenance_interval;
        remaining_km=maintenance_interval_dumy-odo_reading;   
    }
    std::cout<<"Next maintenance schedule after "<<remaining_km<<" km. "<<std::endl;
}
int main(void)
{
    vehicleMaintenanceSchedule();
}