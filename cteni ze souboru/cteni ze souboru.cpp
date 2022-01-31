#include <stdio.h>

int main(void) {

	FILE* vstup = fopen("znamky.txt", "r");

	if (vstup = NULL) {
		printf("ERROR:nejde otevrit.");
		return 1;
	}
	while (!feof(vstup)) {
		float prumer = 0;
		char jmeno[20];
		int znamky[8];
		fscanf(vstup, "%s", &jmeno);
		for (int i = 0; i <= 8; i++) {
			fscanf(vstup, "%d", &znamky[i]);
				prumer += znamky[i];
		}
		prumer /= 10;
		printf("%s: %7.2f\n", jmeno, prumer);
	}
}
