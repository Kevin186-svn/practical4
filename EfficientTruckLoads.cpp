#include "EfficientTruckLoads.h"

using namespace std;

int EfficientTruckLoads::E_numTrucks(int numCrates, int loadSize){

        int E_C_T_U[10000];

    if(numCrates <= loadSize){
     return 1;
  }


if(E_C_T_U[numCrates] != 0){
return E_C_T_U[numCrates];
}else{


if(numCrates%2 == 0){
E_C_T_U[numCrates] = E_numTrucks(numCrates/2,loadSize) + E_numTrucks(numCrates/2,loadSize);
return E_C_T_U[numCrates];
}else{
E_C_T_U[numCrates] = E_numTrucks(numCrates/2,loadSize) + E_numTrucks((numCrates/2)+1,loadSize);
return E_C_T_U[numCrates];
}
}

 return 0;


}