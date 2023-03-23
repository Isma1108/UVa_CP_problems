#include <bits/stdc++.h>
using namespace std;

const int MAX_gm = 30; //limite de 20 prendas y 20 modelos por prenda
const int MAX_M = 210; //el pressupuesto máximo es de 200

int M, C, price[MAX_gm][MAX_gm]; //Se usa price[g][0] para el número de prendas para el modelo g
int memo[MAX_gm][MAX_M]; //memo[g][b] es la solucion óptima para un modelo g con un dinero restante b

int dp(int g, int b) {
	if (b < 0) return -1e9;
	//En este punto ya hemos llegado al límite de la recursion, y la respuesta
	//para esta rama es el presupuesto total menos el que nos queda (lo que hemos gastado)
	if (g == C) return M - b; 	
	int &ans = memo[g][b];
	if (ans != -1) return ans;
	for (int k = 1; k <= price[g][0]; ++k) {
		ans = max(ans, dp(g+1, b - price[g][k]));
	}
	return ans;
}

int main() {
	int t; scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &M, &C);	
		for (int g = 0; g < C; ++g) {
			scanf("%d", &price[g][0]);
			for (int k = 1; k <= price[g][0]; ++k) {
				scanf("%d", &price[g][k]);
			}
		}
		memset(memo, -1, sizeof(memo));
		if (dp(0, M) < 0) printf("no solution\n");
		else printf("%d\n", dp(0,M));
		//Aunque en este else vuelva a llamar a dp, como que tengo un array de 
		//memoizacion, no hay que hacer calculo repetido
	}

}
