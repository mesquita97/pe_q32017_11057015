#include <stdio.h>

float volume (float x, float y, float z)
{
  return x*y*z;
}

float main()
{
  float x,y,z;
  scanf("\n%f""\n%f""\n%f",&x, &y, &z);
  printf("%.2f", volume(x,y,z));
}