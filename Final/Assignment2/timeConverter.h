#include<stdlib.h>

#define SECONDSINDAY 86400
#define SECONDSINHOUR 3600
#define SECONDSINMINUTE 60

typedef struct {
  int inSeconds;
  int outDays;
  int outHours;
  int outMinutes;
  int outSeconds;
}TimeConverter;

void convertTime(TimeConverter *converter){

  converter->outDays = ((converter->inSeconds)/(SECONDSINDAY));
  converter->outSeconds = (converter->inSeconds)%(SECONDSINDAY);

  converter->outHours = ((converter->outSeconds)/(SECONDSINHOUR));
  converter->outSeconds = (converter->outSeconds)%(SECONDSINHOUR);

  converter->outMinutes = (converter->outSeconds)/(SECONDSINMINUTE);

  converter->outSeconds = (converter->outSeconds)%(SECONDSINMINUTE);


}
