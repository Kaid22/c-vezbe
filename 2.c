#include <stdio.h>

int main()
{
	int n,crvene=0,bele=0;
	printf("Unesite broj tacaka:");
	scanf("%d", &n);
	int tacke[n][2];
	for(int i = 0; i < n; i++){
		printf("\nUnesite koordinate %d. tacku: ", i + 1);
		scanf("%d %d", &tacke[i][0], &tacke[i][1]);
	}
	for(int i=0;i<n;i++){
		if(tacke[i][0]>=1 && tacke[i][0]<=3 && tacke[i][1]>=2 && tacke[i][1]<=20 )
		crvene++;
		else if(tacke[i][0]>=6 && tacke[i][0]<=11 && tacke[i][1]>=2 && tacke[i][1]<=20 )
		crvene++;
		else if(tacke[i][0]>=3 && tacke[i][0]<=6 && tacke[i][1]>=2 && tacke[i][1]<=5 )
		crvene++;
		else if(tacke[i][0]>=3 && tacke[i][0]<=6 && tacke[i][1]>=7 && tacke[i][1]<=20 )
		crvene++;
		else
		bele++;
	}
	printf("Tacki u belu zonu ima %d, a u crvenu %d", bele, crvene);
	return 0;
}

