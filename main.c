#include "image.h"
#include <stdio.h>
#include <malloc.h>

Image* create(int rows, int cols, char type[]);
	int **image = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < cols; i++)
		matriz[i] = (int*)malloc(cols * sizeof(int));

	return image;


Image* load_from_ppm(const char* filename);
	
	return loaded_image;


void write_to_ppm(Image* image, const char* filename);


void rgb_to_gray(Image* image_rgb, Image* image_gray);


int main()
{
	int opcao;
	printf("Selecione o que deseja fazer:\n1 - Carregar uma imagem\n2 - Converter para níveis de cinza\n3 - Gravar imagem\n4 - Fechar o programa", );
	scanf("%d", &opcao);

	while (opcao != 4)
	{
		if (opcao == 1)
			load_from_ppm(/*arquivo*/);
			printf("Selecione o que deseja fazer:\n1 - Carregar uma imagem\n2 - Converter para níveis de cinza\n3 - Gravar imagem\n4 - Fechar o programa", );
			scanf("%d", &opcao);
			
		if (opcao == 2)
			if (filename != NULL)
				printf("ERRO: SEM IMAGEM CARREGADA")
			else
				rgb_to_gray(/*image_rgb, image_gray*/);

			printf("Selecione o que deseja fazer:\n1 - Carregar uma imagem\n2 - Converter para níveis de cinza\n3 - Gravar imagem\n4 - Fechar o programa", );
			scanf("%d", &opcao);

		if (opcao == 3)
			//funcao
			printf("Selecione o que deseja fazer:\n1 - Carregar uma imagem\n2 - Converter para níveis de cinza\n3 - Gravar imagem\n4 - Fechar o programa", );
			scanf("%d", &opcao);
	}

	return 0;
}