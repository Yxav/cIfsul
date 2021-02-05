#define PI 3.1415926535

void programaQuit(){
	printf("\nPROGRAMA CALCULA A INDUTANCIA ENCERRADO\n");
	system("pause");
}

double inductCalc(double r, double R, double permeMagRel, int n_espiras){
	return (permeMag(permeMagRel)*areaSecTransv(r)*pow(n_espiras,2))/compriCircMag(R);
}

