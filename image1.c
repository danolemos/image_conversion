typedef struct image Image
{
    unsigned char valor_pixel;
    int rows;
    int cols;
};

Image* create(int rows, int cols, char type[]);
    int **image = (int**)malloc(rows * sizeof(int*));
	for (int i = 0; i < cols; i++)
		matriz[i] = (int*)malloc(cols * sizeof(int));

	return image;


Image* load_from_ppm(const char* filename);
    archive = fopen(filename, "r");
	return loaded_image;


void write_to_ppm(Image* image, const char* filename);
    return;


void rgb_to_gray(Image* image_rgb, Image* image_gray);
    return;