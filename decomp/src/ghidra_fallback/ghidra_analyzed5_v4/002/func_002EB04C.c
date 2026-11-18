#include "ghidra_types.h"

extern int func_002E8300(int param_1,int param_2);
extern int func_002E8870(int param_1,int *param_2);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00552C88(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00687EA0(undefined4 *param_1);
extern int *DAT_002eb154;
extern int *DAT_002eb158;
extern float DAT_002eb15c;
extern float DAT_002eb160;
extern int *DAT_002eb164;

// USA 002EB04C <- EU 002EB028 (Ghidra, non-matching)
// GLOBAL DAT_002eb154 int *
// GLOBAL DAT_002eb158 int *
// GLOBAL DAT_002eb15c float
// GLOBAL DAT_002eb160 float
// GLOBAL DAT_002eb164 int *

undefined1 func_002EB04C(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_002eb154 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = func_00588BE4((int)puVar1);
  if (*(char *)(param_1 + 0xe0c) == '\0') {
    return 0;
  }
  if (iVar2 != *DAT_002eb158) {
    return 0;
  }
  piVar3 = func_00687EA0(puVar1);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  fVar4 = func_00552C88(piVar3);
  if (*(char *)(param_1 + 0xe2c) == '\x01') {
    if (DAT_002eb15c < fVar4) goto LAB_002eb0cc;
  }
  else if ((*(char *)(param_1 + 0xe2c) == '\0') && (fVar4 < DAT_002eb15c)) {
LAB_002eb0cc:
    local_20 = ALBW_AS_F32(piVar3[0xf4]);
    iStack_1c = piVar3[0xf5];
    iStack_18 = piVar3[0xf6];
    iVar2 = func_0051E6D0(*DAT_002eb164,&local_20,DAT_002eb160);
    if (iVar2 != 0) {
      return 1;
    }
    if (*(char *)(param_1 + 0x8cc) == '\x1a') {
      return 0;
    }
    if (*(char *)(param_1 + 0x8cc) != '\x17') {
      return 0;
    }
    *(undefined1 *)((int)piVar3 + 0x2d7) = 1;
    return 0;
  }
  if (*(char *)(param_1 + 0x8cc) != '\x1a') {
    if (*(char *)(param_1 + 0x8cc) == '\x15') {
      func_002E8300(param_1,(int)piVar3);
    }
    else {
      func_002E8870(param_1,piVar3);
    }
  }
  return 0;
}

