class MantarSensor{
  public:
    int tempDownPin=0;
    int tempNormalPin=0;
    int tempUpPin=0;
    int tempSensorPin=0;
    double tempValue=0;
    double minTemp=22.2;
    double maxTemp=26.8;
    MantarSensor(int tsp,int tdp,int tnp,int tup){
        tempSensorPin=tsp;
        tempDownPin=tdp;
        tempNormalPin=tnp;
        tempUpPin=tup;
    }
    void setup(){
      pinMode(tempDownPin,OUTPUT);
      pinMode(tempNormalPin,OUTPUT);
      pinMode(tempUpPin,OUTPUT);
    }
    double temp(){
       tempValue=analogRead(tempSensorPin);
       tempValue=tempValue/6.82;
       tempValue=tempValue-50;
       return tempValue;
    }
    void attach(){
         temp();
         if(tempValue<minTemp) digitalWrite(tempDownPin,HIGH); else  digitalWrite(tempDownPin,LOW);
         if(tempValue>maxTemp) digitalWrite(tempUpPin,HIGH); else  digitalWrite(tempUpPin,LOW);
         if(tempValue>=minTemp&&tempValue<=maxTemp)
          digitalWrite(tempNormalPin,HIGH); 
         else
          digitalWrite(tempNormalPin,LOW);
    }
  private:
};
