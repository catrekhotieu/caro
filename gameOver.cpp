#include <iostream>
#include <cmath>
#define BOARDSIZE 4
using namespace std;

int gameOver(int * x){
	int r1 = 0;
	int r2 = 0;
	for(int i = 0; i < BOARDSIZE; i++){
		for(int j = 0; j < BOARDSIZE; j++){
			if(*(x + i * BOARDSIZE + j) == 1){
				r1++;
				r2 = 0;
			} else if(*(x + i * BOARDSIZE + j) == 2){
				r1 = 0;
				r2++;
			}
		}
		if(r1 == 6){
			return 1;
		} else  if(r2 == 6){
			return 2;
		}
	}
	for(int i = 0; i < BOARDSIZE; i++){
		for(int j = 0; j < BOARDSIZE; j++){
			if(*(x + j * BOARDSIZE + i) == 1){
				r1++;
				r2 = 0;
			} else if(*(x + j * BOARDSIZE + i) == 2){
				r1 = 0;
				r2++;
			}
		}
		if(r1 == 6){
			return 1;
		} else if(r2 == 6){
			return 2;
		}
	}
	for(int i = 0; i < BOARDSIZE * BOARDSIZE - 1; i++){
		for(int j = 0; j < BOARDSIZE - abs(i - 3); j++){
			if(*(x + (i + j)*BOARDSIZE + j) == 1){
				r1++;
				r2 = 0;
			} else if(*(x + (i + j)*BOARDSIZE + j) == 2){
				r1 = 0;
				r2++;
			}
		}
		if(r1 == 6){
			return 1;
		} else if(r2 == 6){
			return 2;
		}
	}
	return 0;
}


int main(){
	int * x = new int[BOARDSIZE * BOARDSIZE];
	return 0;
}