#include <stdio.h>

int main()
{
	int x = 0, y = 0;
	char n;
	
	for(int i = 0; i < 6; i++)
	{
		scanf("%c", &n);
/*deslocar uma casa para cima ________ +1, coordenada Y*/

		if(n == 'W'){
			y++;
		}
/*deslocar uma casa para baixo ________ -1, coordenada Y*/

		else if(n == 'S'){
			y--;
		}
/*deslocar para a esquerda ________ -1, coordenada X*/
		else if(n == 'A'){
			x--;
		}
/*deslocar para a esquerda ________ +1, coordenada X*/
		else if(n == 'D'){
			x++;
		}
	}
	printf("%d %d\n", x, y);
	return 0;
}