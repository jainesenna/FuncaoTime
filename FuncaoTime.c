/* strftime example */
#include <stdio.h>      /* puts */
#include <time.h>       /* time_t, struct tm, time, localtime, strftime */

int main ()
{
  time_t rawtime;
  struct tm * timeinfo;
  char buffer [80];

  time (&rawtime);
  timeinfo = localtime (&rawtime);

  strftime (buffer,80,"A hora atual é: %I:%M%p.",timeinfo);
  puts (buffer);
  strftime (buffer,80,"\nA data atual é: %d / %m / %Y", timeinfo); 
  puts (buffer);

  return 0;
}
