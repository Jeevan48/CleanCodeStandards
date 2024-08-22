#include <iostream>
 
int main(void){
    float const speed[5] = {10.0,20.0,30.0,40.0,50.0};
    unsigned int const time[5] = {2,4,7,2,4};
 
    float maxspeed = 0.0f;
    for(int i=0; i<5; i++){
        if(maxspeed < speed[i]){
            maxspeed = speed[i];
        }
    }
 
    float averageSpeed = 0.0f;
    float sum = 0.0f;
    unsigned int totalTime = 0;
    for(int i=0; i<5; i++){
        sum += speed[i];
        totalTime += time[i];
    }
 
    averageSpeed = sum/float(totalTime);
 
    std::cout<<"Maximum speed is " <<maxspeed <<" Average speed is: "<<averageSpeed<<std::endl;
    return 0;
}