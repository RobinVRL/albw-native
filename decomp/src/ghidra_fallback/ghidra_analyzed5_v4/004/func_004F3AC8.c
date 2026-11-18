#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern float func_004FB1F8(void);
extern int func_00521078(int param_1);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A880(int param_1);
extern int func_0066ACA4(undefined4 *param_1,undefined1 param_2);
extern int *DAT_004f3bb4;
extern int DAT_004f3bb8;
extern undefined4 DAT_004f3bbc;
extern undefined4 DAT_004f3bc0;
extern float DAT_004f3bc4;

// USA 004F3AC8 <- EU 004F3AA0 (Ghidra, non-matching)
// GLOBAL DAT_004f3bb4 int *
// GLOBAL DAT_004f3bb8 int
// GLOBAL DAT_004f3bbc undefined4
// GLOBAL DAT_004f3bc0 undefined4
// GLOBAL DAT_004f3bc4 float

int func_004F3AC8(int param_1)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar3 = func_00588BE4(param_1);
  if ((iVar3 == *DAT_004f3bb4) && (iVar3 = func_0058A880(param_1), iVar3 != 0)) {
    if (*(char *)(param_1 + 0x91b) == '\0') {
      iStack_18 = DAT_004f3bb8;
      uStack_14 = DAT_004f3bc0;
      uVar4 = func_00584C14(*(int *)(param_1 + 0x40c),&iStack_18);
      func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar4);
    }
    else {
      iStack_18 = DAT_004f3bb8;
      uStack_14 = DAT_004f3bbc;
      uVar4 = func_00584C14(*(int *)(param_1 + 0x40c),&iStack_18);
      func_004CEA18(*(int *)(param_1 + 0x40c),0,uVar4);
    }
  }
  fVar6 = func_004FB1F8();
  fVar1 = DAT_004f3bc4;
  fVar6 = DAT_004f3bc4 + (*(float *)(param_1 + 0x910) - *(float *)(param_1 + 0x908)) * fVar6;
  *(float *)(param_1 + 0x4f0) = fVar6;
  if (fVar6 < fVar1) {
    *(float *)(param_1 + 0x4f0) = fVar1;
  }
  iVar3 = param_1;
  if (*(float *)(param_1 + 0x910) <= *(float *)(param_1 + 0x3d4)) {
    bVar2 = func_00521078(param_1);
    iVar3 = 0;
    if (bVar2) {
      uVar5 = 0;
      if (*(char *)(param_1 + 0x91b) != '\0') {
        uVar5 = 3;
      }
      iVar3 = func_0066ACA4((undefined4 *)(param_1 + 0x8d4),uVar5);
    }
  }
  return iVar3;
}

