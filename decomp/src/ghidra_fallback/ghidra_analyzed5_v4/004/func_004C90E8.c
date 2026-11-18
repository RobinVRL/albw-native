// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_00539200(int param_1);
extern int DAT_004c918c;
extern float DAT_004c9190;
extern float DAT_004c9194;
extern float DAT_004c9198;
extern float DAT_004c919c;
extern char s_SE_Bee_FLY_004c9180[];

// USA 004C90E8 <- EU 004C90C0 (Ghidra, non-matching)
// GLOBAL DAT_004c918c int
// GLOBAL DAT_004c9190 float
// GLOBAL DAT_004c9194 float
// GLOBAL DAT_004c9198 float
// GLOBAL DAT_004c919c float
// GLOBAL s_SE_Bee_FLY_004c9180 string

undefined4 func_004C90E8(int param_1)

{
  bool bVar1;
  float fparam_0;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  func_0010A464(auStack_78);
  local_14 = s_SE_Bee_FLY_004c9180;
  local_18 = DAT_004c918c;
  func_001507D8(param_1,&local_18,(int)auStack_78);
  bVar1 = func_00539200((int)auStack_78);
  if (bVar1) {
    fVar2 = SQRT(*(float *)(param_1 + 0x3dc) * *(float *)(param_1 + 0x3dc) +
                 *(float *)(param_1 + 0x3e0) * *(float *)(param_1 + 0x3e0) +
                 *(float *)(param_1 + 0x3e4) * *(float *)(param_1 + 0x3e4));
    fparam_0 = DAT_004c9194 + fVar2 * DAT_004c9190;
    fVar2 = fVar2 + DAT_004c9198;
    if (DAT_004c9198 < fparam_0) {
      fparam_0 = DAT_004c9198;
    }
    if (DAT_004c919c < fVar2) {
      fVar2 = DAT_004c919c;
    }
    func_0025B860((int)auStack_78,0,fparam_0,DAT_004c919c);
    func_0025B824((int)auStack_78,fVar2);
  }
  return func_0025B874(auStack_78);
}

