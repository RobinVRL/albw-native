#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CEAF0(int param_1);
extern float DAT_00389530;

// USA 003893E4 <- EU 003893C0 (Ghidra, non-matching)
// GLOBAL DAT_00389530 float

undefined4 func_003893E4(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  uint *puVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_78 ((int *)(albw_frame + 0x8))
  if (*(int *)(param_1 + 0x460) == 0) {
    return 0;
  }
  fVar3 = DAT_00389530;
  if (*(char *)(param_1 + 0x480) != '\0') {
    func_00169A80(*(int **)(param_1 + 0x468),param_2,param_3,param_4);
    param_3 = 0;
    func_00168E9C(*(int **)(param_1 + 0x468),*(int *)(param_1 + 0x460),(int *)0x0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x468) + 0x14);
    param_2 = (uint)*(byte *)(iVar1 + 0x1c);
    if (param_2 == 0) {
      if (*(float *)(iVar1 + 0x10) < fVar3) {
        if (*(float *)(iVar1 + 8) <= fVar3) goto LAB_00389460;
      }
      else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_00389460:
        *(undefined1 *)(param_1 + 0x480) = 0;
      }
    }
  }
  if (*(int **)(param_1 + 0x464) != (int *)0x0) {
    func_00169A80(*(int **)(param_1 + 0x464),param_2,param_3,param_4);
    func_00168E9C(*(int **)(param_1 + 0x464),*(int *)(param_1 + 0x460),(int *)0x0);
    if ((*(char *)(param_1 + 0x481) == '\0') &&
       (iVar1 = *(int *)(*(int *)(param_1 + 0x464) + 0x14), *(char *)(iVar1 + 0x1c) == '\0')) {
      if (*(float *)(iVar1 + 0x10) < fVar3) {
        if (fVar3 < *(float *)(iVar1 + 8)) goto LAB_00389510;
      }
      else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) goto LAB_00389510;
      *(undefined1 *)(param_1 + 0x481) = 1;
      puVar2 = (uint *)func_002C11E8(aiStack_78,1,0,0);
      func_0016898C(*(int *)(param_1 + 0x464),puVar2);
    }
  }
LAB_00389510:
  return func_004CEAF0(*(int *)(param_1 + 0x460));
}

