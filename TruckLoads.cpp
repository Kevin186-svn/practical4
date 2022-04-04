#include "TruckLoads.h"

int TruckLoads::numTrucks(int numCrates, int loadSize){

    int N_C_T_U[10000];

    if(numCrates <= loadSize){
     return 1;
  }


if(N_C_T_U[numCrates] != 0){
return N_C_T_U[numCrates];
}else{


if(numCrates%2 == 0){
N_C_T_U[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks(numCrates/2,loadSize);
return N_C_T_U[numCrates];
}else{
N_C_T_U[numCrates] = numTrucks(numCrates/2,loadSize) + numTrucks((numCrates/2)+1,loadSize);
return N_C_T_U[numCrates];
}
}

 return 0;

}