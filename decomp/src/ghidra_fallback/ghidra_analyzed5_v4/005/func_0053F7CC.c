#include "ghidra_types.h"

extern int func_0052E920(int param_1,int param_2);
extern int func_0052EEA4(int param_1);
extern int func_0053EDD8(int param_1);
extern int *DAT_0053f8e0;
extern int *DAT_0053f8e4;

// USA 0053F7CC <- EU 0053F7A4 (Ghidra, non-matching)
// GLOBAL DAT_0053f8e0 int *
// GLOBAL DAT_0053f8e4 int *

uint func_0053F7CC(int param_1)

{
  ushort uVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xc5) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x604);
    if (((*(uint *)(iVar5 + 0x328) & 0x80) == 0) || (*(char *)(iVar5 + 0x33c) != '\f')) {
      iVar5 = func_0052E920(*(int *)(param_1 + 0x10),0xb2);
      if (iVar5 == 0) {
        bVar3 = func_0052EEA4(*(int *)(param_1 + 0x10));
        if ((bVar3) && (*(int *)(*DAT_0053f8e0 + 0x44) == 0)) {
          sVar2 = *(short *)(*(int *)(param_1 + 0x18) + 0x72);
          if (sVar2 == 0x4f) {
            iVar5 = func_0053EDD8(*(int *)(param_1 + 0x18) + 0x5c);
            if (iVar5 == 0) {
              return 0xfffffffe;
            }
          }
          else if (sVar2 != 0x50) {
            return 0x4f;
          }
          uVar4 = 0x50;
        }
        else {
          uVar4 = (uint)(*(char *)(*DAT_0053f8e4 + 0x18) == '\a' ||
                        *(char *)(*DAT_0053f8e4 + 0x18) == '%');
          if (*(char *)(*(int *)(param_1 + 0x10) + 0x6bd) != '\0' || uVar4 != 0) {
            uVar1 = *(ushort *)(*(int *)(param_1 + 0x18) + 0x72);
            if (uVar1 == 3) {
              iVar5 = func_0053EDD8(*(int *)(param_1 + 0x18) + 0x5c);
              if (iVar5 == 0) {
                return 0xfffffffe;
              }
            }
            else if ((*(char *)(param_1 + 0xc4) != '\0') && (uVar1 < 3)) {
              return 3;
            }
            return 4;
          }
        }
      }
      else {
        uVar4 = 0x59;
      }
    }
    else {
      uVar4 = 99;
    }
  }
  else {
    uVar4 = 0x87;
  }
  return uVar4;
}

