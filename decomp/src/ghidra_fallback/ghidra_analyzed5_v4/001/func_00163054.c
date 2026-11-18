#include "ghidra_types.h"

extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_0028AEF8(undefined4 *param_1,int param_2);
extern int func_004F500C();
extern int func_0052FBA0(int param_1,uint param_2);
extern float fRam00163128;
extern float fRam0016312c;
extern int *piRam00163124;

// USA 00163054 <- EU 00163058 (Ghidra, non-matching)
// GLOBAL UNK_00163124 int *
// GLOBAL UNK_00163128 float
// GLOBAL UNK_0016312c float

void func_00163054(int *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  #define fStack_14 (*(float *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  func_004F500C(param_1,param_2,param_3,param_4);
  if (*(short *)((int)param_1 + 0x2e) == 1 || *(short *)((int)param_1 + 0x2e) == 2) {
    iStack_10 = param_1[0xf6];
    if (*(short *)((int)param_1 + 0x2e) == 1) {
      fStack_18 = ALBW_AS_F32(param_1[0xf4]) + fRam00163128;
    }
    else {
      fStack_18 = ALBW_AS_F32(param_1[0xf4]) - fRam00163128;
    }
    fStack_14 = ALBW_AS_F32(param_1[0xf5]) + fRam0016312c;
    iVar3 = func_0028AEF8(&fStack_18,(int)param_1);
    param_1[0x23e] = iVar3;
  }
  else {
    uVar2 = func_0028AEF8(param_1 + 0xf4,(int)param_1);
    piVar1 = piRam00163124;
    param_1[0x23e] = uVar2;
    iVar3 = func_0052FBA0(*piVar1 + 0x3dbbc,uVar2);
    if (iVar3 != 0) {
      iVar5 = param_1[0x240];
      iVar6 = *(int *)(*(int *)(param_1[0x103] + 0x24) + 0x14);
      iVar4 = *(int *)(iVar3 + 0x478);
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      func_001151EC((undefined4 *)(iVar4 + 0x80),(undefined4 *)(iVar6 + iVar5 * 0x30));
      *(int *)(iVar3 + 0x3d0) = param_1[0xf4];
      *(int *)(iVar3 + 0x3d4) = param_1[0xf5];
      *(int *)(iVar3 + 0x3d8) = param_1[0xf6];
      *(int *)(iVar3 + 1000) = param_1[0xfa];
      return;
    }
  }
  return;
}

