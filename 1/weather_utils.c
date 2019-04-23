//1. Implementar una función que obtenga la menor temperatura mı́nima histórica registrada en la ciudad de Córdoba según los datos del arreglo.

int min_temp_hist(WeatherTable array[]){

unsigned int min_temp=99999999;

for (k_year=0u,k_year<YEARS , k_year++){

       for (k_month=0u, k_month<MONTHS, k_month++) {

           for (k_day=0u, k_day<DAYS, k_day++) {

                if (min_temp>=array[k_year][k_month][k_day].min_temp) {

                    min_temp=array[k_year][k_month][k_day].min_temp;

                }

            }

        }

    }
       return min_temp;
}
//me tengo que meter en cada una de las dimensiones del arreglo


//2. Implementar un procedimiento que registre para cada año entre 1980 y 2016 la mayor temperatura máxima registrada durante ese año.
//Ayuda: El procedimiento debe tomar como parámetro un arreglo que almacenará los resultados obtenidos.


void procedimiento(tclimate(a), int output[YEARS]) {
...
for (unsigned int year = 0; year < YEARS; year++) {


void max_temp_of_year(WeatherTable array, int output[]){
	
   	for (int year = 0; year < YEARS; year++){

		int max_temp = -9999999;

		for (int month = 0; month < MONTHS; month++){

			for (int day = 0; day < DAYS; day++){

				if (max_temp < array[year][month][day]._max_temp){ //yo quiero la parte de max_temp de ese día de ese mes de ese año

					output[year] = array[year+1980][month][day]._max_temp;
				}
			}
		} 
	}
}
...
output[year] = ... // la mayor temperatura máxima del año 'year' + 1980
}


//3. Implementar un procedimiento que registre para cada año entre 1980 y 2016 el mes de ese año en que se registró la mayor cantidad mensual de precipitaciones.

