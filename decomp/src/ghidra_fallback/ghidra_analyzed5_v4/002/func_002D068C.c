#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0020695C(undefined4 *param_1,uint param_2);
extern int func_0024DEB4(int param_1);
extern int func_002CA950(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern float func_0051D588(int param_1,float *param_2);
extern int func_00663A98(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002d07b4;
extern int DAT_002d07b8;
extern uint *DAT_002d07bc;
extern int *DAT_002d07c0;
extern int DAT_002d07c4;

// USA 002D068C <- EU 002D0668 (Ghidra, non-matching)
// GLOBAL DAT_002d07b4 undefined4
// GLOBAL DAT_002d07b8 int
// GLOBAL DAT_002d07bc uint *
// GLOBAL DAT_002d07c0 int *
// GLOBAL DAT_002d07c4 int

undefined4 func_002D068C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define aiStack_20 ((int *)(albw_frame + 0x10))
  local_24 = DAT_002d07b4;
  local_28 = DAT_002d07b8;
  func_00150A84(param_1,&local_28,0);
  (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  if (param_1[0xd1] != 0) {
    func_004A1B9C(aiStack_20,param_1[0xd1],DAT_002d07bc);
  }
  iVar2 = param_1[0x131];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x132])) {
    iVar3 = *(int *)(iVar2 + 0x20);
    if ((iVar3 != 0) &&
       ((*(int *)(iVar2 + 0x24) == *(int *)(iVar3 + 0xc) && (0 < *(int *)(iVar3 + 4))))) {
      *(undefined1 *)(iVar3 + 0x280) = 1;
    }
    *(uint *)(iVar2 + 0x3c) = *(uint *)(iVar2 + 0x3c) & 0xfffffffb | 8;
  }
  iVar2 = DAT_002d07c4;
  piVar1 = DAT_002d07c0;
  if ((char)param_1[0x134] == '\0') {
    if (*(char *)((int)param_1 + 0x4d1) != '\0') {
      fVar4 = func_0051D588(*(int *)(*DAT_002d07c0 + 0x18),(float *)(param_1 + 0xf4));
      if ((int)ALBW_AS_U32(fVar4) <= iVar2) {
        func_0020695C(param_1 + 0xf4,1);
      }
      *(undefined1 *)((int)param_1 + 0x4d1) = 0;
    }
  }
  else {
    func_0024DEB4((int)param_1);
    fVar4 = func_0051D588(*(int *)(*piVar1 + 0x18),(float *)(param_1 + 0xf4));
    if ((int)ALBW_AS_U32(fVar4) <= iVar2) {
      func_002CA950(param_1 + 0xf4);
    }
  }
  return func_00663A98(param_1 + 0x108,3);
}

