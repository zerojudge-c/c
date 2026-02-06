#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int n;
	double x1,y1,x2,y2,x3,y3,x4,y4;
	scanf("%d",&n);
	printf("INTERSECTING LINES OUTPUT\n");
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4)&&n>0){
        double D = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
        if (D == 0) {
            double D2 = (x1 - x3) * (y3 - y4) - (y1 - y3) * (x3 - x4);
            if (D2 == 0) {
                printf("LINE\n");
            } else {
                printf("NONE\n");
            }
        } else {
            double Dx = (x1 * y2 - y1 * x2) * (x3 - x4)
                      - (x1 - x2) * (x3 * y4 - y3 * x4);
            double Dy = (x1 * y2 - y1 * x2) * (y3 - y4)
                      - (y1 - y2) * (x3 * y4 - y3 * x4);
            double ix = Dx / D;
            double iy = Dy / D;
            printf("POINT %.2f %.2f\n", ix, iy);
        }
        n--;
	}
	printf("END OF OUTPUT\n");
	return 0;
} 
