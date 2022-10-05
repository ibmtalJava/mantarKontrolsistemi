class MantarSensor{
  public:
    int tempDownPin=0;
    int tempNormalPin=0;
    int tempUpPin=0;
    int tempSensorPin=0;
    double tempValue=0;
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
       return tempValue;
    }
  private:
};
