#include "ghidra_types.h"

extern int func_0045F6B0(int param_1,int param_2,undefined1 param_3);
extern int func_0045F6F8(int param_1,int param_2);
extern int func_0051B220(int param_1);
extern int func_005228A4(int param_1,int param_2);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int *DAT_00423f3c;
extern int *DAT_00423f40;
extern int *DAT_00423f44;

// USA 00423E30 <- EU 00423E10 (Ghidra, non-matching)
// GLOBAL DAT_00423f3c int *
// GLOBAL DAT_00423f40 int *
// GLOBAL DAT_00423f44 int *

undefined4 func_00423E30(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = DAT_00423f3c;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar6 = *(int *)(*DAT_00423f3c + 0xe8);
  iVar2 = func_005228A4(*DAT_00423f40,iVar5);
  if (iVar2 != 0) {
    iVar2 = *DAT_00423f44 + 0x10 + (uint)*(byte *)(iVar5 + 0x70) * 400;
    uVar3 = *(uint *)(iVar2 + 0x11c);
    if ((uVar3 & 0x4000) != 0) {
      if (iVar6 == 0) {
        return 0;
      }
      uVar4 = *(uint *)(iVar2 + 0x10);
      if (*(char *)(param_1 + 0xf6) == '\0') {
        if ((uVar4 & 8) == 0) {
          if ((uVar3 & 8) == 0) {
            if ((uVar4 & 1) == 0) {
              uVar3 = uVar3 & 1;
              goto joined_r0x00423eb8;
            }
            goto LAB_00423ee4;
          }
          goto LAB_00423ec8;
        }
      }
      else if ((uVar4 & 0x10) == 0) {
        if ((uVar3 & 0x10) == 0) {
          if ((uVar4 & 2) == 0) {
            uVar3 = uVar3 & 2;
joined_r0x00423eb8:
            if (uVar3 == 0) {
              return func_0045F6B0(iVar6,0,0);
            }
            return func_0045F6B0(iVar6,2,0);
          }
LAB_00423ee4:
          return func_0045F6F8(iVar6,2);
        }
LAB_00423ec8:
        return func_0045F6B0(iVar6,1,0);
      }
      return func_0045F6F8(iVar6,1);
    }
  }
  func_0051B220(*piVar1);
  return func_0066BFFC((undefined4 *)(param_1 + 0x38),'\x05');
}

