#include<stdlib.h>
#include<math.h>
#include<stdio.h>

void makeInterestTable(double principal, int yearStart, int yearEnd, int rateStart, int rateEnd){

  double currentPrincipal;

  //title for year label row
  printf("%40s\n","Years" );

  //title for interest rate labels
  printf("%15s", "Interest Rate");

  for(int i = yearStart; i<=yearEnd;i++){

    printf("%15d",i );

  }

  //line differentiating between labels abd values
  printf("\n");

  for(int i = yearStart; i<=yearEnd+1;i++){

    printf("_______________");

  }

  //enter for the first line to be on the next row
  printf("\n");

  for(int rate = rateStart; rate<=rateEnd; rate++){

    double dailyRate = 1+((double)rate/100)/360;

    //label for interest rate
    printf("%13d%%|", rate);

    for(int year = yearStart; year<=yearEnd; year++){

      currentPrincipal=principal*pow(dailyRate,(double)year*360);
      printf("%15.2lf", currentPrincipal);

    }

    printf("\n");

  }

}
