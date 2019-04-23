//declaracion de las funciones a exportar

#ifndef _WEATHER_UTILS_H
#define _WEATHER_UTILS_H

#include <stdbool.h>

#include "array_helpers.h"


int minimum_temperature(WeatherTable array);

void max_temp_by_year(WeatherTable array, int output[]);

#endif 

#endif
