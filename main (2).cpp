
#include <iostream>
using namespace std;

//device class

 class Light {
     
      public: 
      
      
          
    void turnOn(){
          cout<<"the lights are on!"<<endl;
          }  
          
    void turnOff(){
          cout<<"the lights are off!"<<endl;
          }
          
          
};

class Appliance {
     public:
         void turnOn() {
                  cout << "Appliance is on." <<endl;
    }

         void turnOff() {
                  cout << "Appliance is off." <<endl;
    }
};


class AutomationController {
    
    public:
        void controllight(Light& light, bool turnOn){
            if(turnOn){
                light.turnOn();
            }
            else{
                light.turnOff();
            }
        }
    
    

          void controlAppliance(Appliance& appliance, bool turnOn) {
              if (turnOn) {
              appliance.turnOn();
             } else {
                    appliance.turnOff();
             }
     }
};


    int main() {
        
    Light livingRoomLight;
    
    Appliance kitchenAppliance;

    AutomationController controller;
    
    // Control the devices
    
    controller.controllight(livingRoomLight, true);
    controller.controlAppliance(kitchenAppliance, true);
    
    
    controller.controllight(livingRoomLight, false);
    controller.controlAppliance(kitchenAppliance, false);
    
    return 0;
    
    }