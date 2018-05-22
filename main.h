#ifndef MAIN_H
#define MAIN_H
#define DATA_BUFFER_LENGTH 256
typedef struct
{
    unsigned int data[DATA_BUFFER_LENGTH];
    unsigned char dataIndex;
    float filterOut;
    unsigned char isSignalCaptured;
    unsigned char isSignalPresent;
    unsigned char isReady;
    unsigned char minSamplesCounter;
    unsigned int samplesCounter;
    unsigned int sum;
    //пороги измерений (в процентах) от верха и низа первообразной (интеграла)
    unsigned char bottomMeasureLevel;
    unsigned char topMeasureLevel;
    //***
    unsigned char cutLevel;
    float filterCoeff;
    float integralValue;
} Signal;
typedef struct
{
    unsigned char x1,x2;
    unsigned int y1,y2;

} DataToSend;

unsigned char processSample (Signal* signal);
void resetSignalAfterSend(unsigned char channel);

#endif // MAIN_H
