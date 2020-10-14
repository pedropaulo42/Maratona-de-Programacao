#include <bits/stdc++.h>

using namespace std;

int main(){
	
	double n1,n2,n3,n4,media;
	
	scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
	
	media=(n1*2+n2*3+n3*4+n4*1)/10;
	
	if(media>=7.0){

		printf("Media: %.1lf\n",media);
		printf("Aluno aprovado.\n");
	}
	if(media<5.0){
		
		printf("Media: %.1lf\n",media);
		printf("Aluno reprovado.\n");
	}
	if(media>=5.0 && media<=6.9){
		
		double nx,mex;
		
		scanf("%lf",&nx);
		mex=(media+nx)/2;
		
        printf("Media: %.1lf\n",media);
		printf("Aluno em exame.\n");
		printf("Nota do exame: %.1lf\n",nx);

		if(mex>=5.0){
			printf("Aluno aprovado.\n");
		}
		else{
			printf("Aluno reprovado\n");
		}

        printf("Media final: %.1lf\n",mex);
	}
	
	return 0;
}