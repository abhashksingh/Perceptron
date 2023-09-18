#include <stdio.h>
#include <stdlib.h>
#include <time.h>


float train[][2] = {
	{0,0},
	{1,2},
	{2,4},
	{3,6},
	{4,8}
};
#define train_count (sizeof(train)/sizeof(train[0]))

float rand_float(void){
	return (float)rand()/(float)RAND_MAX;
}

float cost(float w)
{
	for(size_t i = 0; i<train_count;++i)
        {
                float x = train[i][0];
                float y = x*w;
                float d = y-train[i][1];
                result+=(d*d);
                printf("actual:%f, expected:%f\n",y,train[i][1]);
        }		
}


int main()
{
	srand(time(0));
	//y = x*w
	float w = rand_float()*10;
	float result = 0.0f;

	result/=train_count;
	printf("%f\n",result);

	return 0;
}
