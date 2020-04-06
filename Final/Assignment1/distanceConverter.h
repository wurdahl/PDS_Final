typedef struct {
  double inputMeters;
  double resultMiles;
  double resultFeet;
  double resultInches;
}distanceConverter;

void getResults(distanceConverter *distanceConverter){
  //convert all meters to inches
  distanceConverter->resultInches = (distanceConverter->inputMeters)/(.0254);

  //get the amount of miles in the resulting inches
  distanceConverter->resultMiles = floor(distanceConverter->resultInches/63360);
  distanceConverter->resultInches = fmod(distanceConverter->resultInches, 63360);

  //get the number of feet in the resulting inches
  distanceConverter->resultFeet = floor((distanceConverter->resultInches)/12);

  //resultInches is the remaining resultInches
  distanceConverter->resultInches = fmod(distanceConverter->resultInches, 12);

}
