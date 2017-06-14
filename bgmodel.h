#ifndef BGMODEL_H
#define BGMODEL_H

#include "em3d.h"
#include "nd_image.h"

struct bgmodel {
	struct em_gaussmix *gm;
	int compcount;
	double thres;
	double lrate;
	int *isforeground;
	int w;
	int h;
};

int bg_allocbgmodel(struct bgmodel *bgm, int w, int h);

int bg_initbgmodel(struct nd_image *img, int imgcnt, struct bgmodel *bgm,
	int compcount, double thres, double lrate);

int bg_updatebgmodel(struct nd_image *img, struct bgmodel *bgm);

#endif
