#include "ghidra_types.h"

extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_004EBA34(int param_1);
extern int func_0053EDD8(int param_1);
extern float func_0053EE30(int param_1);
extern int func_0053F7CC(int param_1);
extern int *DAT_002ddcb4;
extern float DAT_002ddcb8;

// USA 002DDBA0 <- EU 002DDB7C (Ghidra, non-matching)
// GLOBAL DAT_002ddcb4 int *
// GLOBAL DAT_002ddcb8 float

undefined4 func_002DDBA0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x8b) != '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 0;
    iVar3 = *(int *)(param_1 + 0x4c);
    if (*(short *)(iVar3 + 0x52) == 0x88) {
      iVar3 = func_0053EDD8(iVar3 + 0x3c);
      if (iVar3 == 0) {
        fVar4 = func_0053EE30(*(int *)(param_1 + 0x4c) + 0x3c);
        if (DAT_002ddcb8 <= fVar4) {
          *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x84) = 0xff;
        }
        return 0;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 199) = 1;
      iVar1 = *(int *)(param_1 + 0x2c);
      iVar3 = *(int *)(param_1 + 0x4c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x2c);
      if (*(char *)(iVar1 + 0x84) == '\0') {
        func_0028D580((uint *)(iVar3 + 0x3c),0x88,1,1,6);
        func_0028D580((uint *)(iVar3 + 0x5c),0x88,1,1,6);
        return func_004EBA34(*DAT_002ddcb4);
      }
      if (*(char *)(iVar1 + 0x84) != -1) {
        *(undefined1 *)(iVar1 + 0x84) = 0xff;
        iVar1 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x4c);
      }
    }
    uVar2 = func_0053F7CC(iVar1);
    func_0028D580((uint *)(iVar3 + 0x3c),uVar2,1,1,6);
    func_0028D580((uint *)(iVar3 + 0x5c),uVar2,1,1,6);
  }
  return 0;
}

