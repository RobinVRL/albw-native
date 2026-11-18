#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_00521058(void);
extern float func_00521298(int param_1);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0058A880(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004f3d78;
extern undefined4 DAT_004f3d7c;
extern int DAT_004f3d80;
extern float DAT_004f3d84;
extern float DAT_004f3d88;
extern float DAT_004f3d8c;
extern float DAT_004f3d90;

// USA 004F3C60 <- EU 004F3C38 (Ghidra, non-matching)
// GLOBAL DAT_004f3d78 int *
// GLOBAL DAT_004f3d7c undefined4
// GLOBAL DAT_004f3d80 int
// GLOBAL DAT_004f3d84 float
// GLOBAL DAT_004f3d88 float
// GLOBAL DAT_004f3d8c float
// GLOBAL DAT_004f3d90 float

undefined4 func_004F3C60(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar2 = func_00588BE4(param_1);
  if ((iVar2 == *DAT_004f3d78) && (iVar2 = func_0058A880(param_1), iVar2 != 0)) {
    local_1c = DAT_004f3d7c;
    local_20 = DAT_004f3d80;
    uVar3 = func_00584C14(*(int *)(param_1 + 0x40c),&local_20);
    func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar3);
  }
  *(undefined4 *)(param_1 + 0x910) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_1 + 0x3d4);
  if (*(char *)(param_1 + 0x91c) != '\0') {
    return func_0066ACA4((undefined4 *)(param_1 + 0x8d4),6);
  }
  if (*(short *)(param_1 + 0x2e) == 2) {
    bVar1 = func_00588BF0(param_1,0);
    if (!bVar1) {
      return 0;
    }
  }
  else {
    fVar5 = DAT_004f3d84;
    iVar2 = func_00521058();
    fVar4 = *(float *)(iVar2 + 4) - (*(float *)(param_1 + 0x908) + fVar5);
    fVar5 = DAT_004f3d88;
    if (*(char *)(param_1 + 0x8d8) != '\0') {
      fVar5 = DAT_004f3d8c;
    }
    if (fVar4 <= fVar5) {
      return 0;
    }
    if (0x3fffffff < (int)ALBW_AS_U32(fVar4)) {
      return 0;
    }
    fVar5 = func_00521298(param_1);
    if (DAT_004f3d90 <= fVar5) {
      return 0;
    }
  }
  return func_0066ACA4((undefined4 *)(param_1 + 0x8d4),1);
}

