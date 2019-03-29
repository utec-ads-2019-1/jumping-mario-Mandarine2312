#include <iostream>
#include <string>

using namespace std;

void countHighsLows(int* highs, int *lows, int startWall, int numOfWalls){
    int nextWall;

    for(int k = 0; k<numOfWalls-1; k++){
        cin >> nextWall;

        if(nextWall > startWall){
            (*highs)++;
        }else if(nextWall < startWall){
            (*lows)++;
        }

        startWall = nextWall;
    }
}

int main() {
    int num, numOfWalls, startWall, highs, lows, caseCounter=1;

    cin >> num;

    for(int i = 0; i < num; i++){
        highs = 0;
        lows = 0;
        cin >> numOfWalls;
        cin >> startWall;


        countHighsLows(&highs, &lows, startWall, numOfWalls);

        cout << "Case " << caseCounter << ": " << highs << " " << lows << endl;

        caseCounter++;
    }

	return EXIT_SUCCESS;
}

