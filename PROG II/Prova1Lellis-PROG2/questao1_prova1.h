#define PI 3.1415926535

void obrigado(){
	printf("\nOBRIGADO POR UTILIZAR O PROGRAMA\n");
	system("pause");
}

double areaSecTransv(double raio){
	return PI*pow(raio,2);
}
double compriCircMag(double Raio){
	return 2*PI*Raio;
}
double permeMag(double permeMagRel){
	return permeMagRel*4*PI*10e-7;
}
double reluct(double raio, double Raio, double permeMagRel){
	return compriCircMag(Raio)/(permeMag(permeMagRel)*areaSecTransv(raio));
}
double forcMagMotriz(double r, double R, double permeMagRel, double magFlux){
	return reluct(r, R, permeMagRel)*magFlux;
}

