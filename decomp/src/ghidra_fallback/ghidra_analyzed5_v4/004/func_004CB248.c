#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004C9AFC(int param_1,float *param_2);
extern int func_004C9B74(int param_1);
extern int func_004CA984(int param_1);
extern int func_004CADD8(undefined4 param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0066A284(undefined4 *param_1,undefined1 param_2);
extern int DAT_004cb328;
extern float DAT_004cb32c;
extern float DAT_004cb330;
extern float DAT_004cb334;
extern char s_SE_Bee_FLY_ATTACK_004cb314[];

// USA 004CB248 <- EU 004CB220 (Ghidra, non-matching)
// GLOBAL DAT_004cb328 int
// GLOBAL DAT_004cb32c float
// GLOBAL DAT_004cb330 float
// GLOBAL DAT_004cb334 float
// GLOBAL s_SE_Bee_FLY_ATTACK_004cb314 string

undefined4 func_004CB248(int param_1)

{
  float fparam_2;
  float fparam_1;
  float fparam_0;
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  local_18 = DAT_004cb328;
  local_14 = s_SE_Bee_FLY_ATTACK_004cb314;
  func_001507D8(param_1,&local_18,0);
  func_004CA984(param_1);
  puVar1 = func_004CADD8(param_1,*(uint *)(param_1 + 0x92c));
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x8e8) = puVar1[0xf4];
    fparam_1 = DAT_004cb330;
    fparam_2 = DAT_004cb32c;
    *(undefined4 *)(param_1 + 0x8ec) = puVar1[0xf5];
    fparam_0 = DAT_004cb334;
    *(undefined4 *)(param_1 + 0x8f0) = puVar1[0xf6];
    func_004D838C((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x8e8),fparam_0,fparam_1,fparam_2);
    return func_004C9AFC(param_1,(float *)(param_1 + 0x8e8));
  }
  puVar1 = (undefined4 *)(param_1 + 0x8bc);
  if (*(int *)(param_1 + 0x934) != 7) {
    return func_0066A284(puVar1,(char)*(int *)(param_1 + 0x934));
  }
  iVar2 = func_004C9B74(param_1);
  if (iVar2 != 0) {
    return func_0066A284(puVar1,7);
  }
  return func_0066A284(puVar1,3);
}

