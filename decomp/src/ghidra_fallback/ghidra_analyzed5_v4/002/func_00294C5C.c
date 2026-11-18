#include "ghidra_types.h"

extern int func_00293DC0(int param_1,int param_2,int param_3);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_00294d38;
extern int DAT_00294d3c;

// USA 00294C5C <- EU 00294C84 (Ghidra, non-matching)
// GLOBAL DAT_00294d38 int *
// GLOBAL DAT_00294d3c int

void func_00294C5C(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar1 = DAT_00294d38;
  iVar2 = *(int *)(param_1 + 0x4c);
  if (*(int *)(iVar2 + 400) != -1) {
    uStack_14 = func_00588154(*DAT_00294d38,*(int *)(iVar2 + 400));
    iStack_18 = DAT_00294d3c;
    iVar3 = func_00587FCC(*piVar1,&iStack_18);
    if ((iVar3 != -1) && (*(char *)(iVar2 + 0x1a4) != '\0')) {
      func_00293DC0(iVar2,iVar3,0);
    }
    iVar3 = *(int *)(iVar2 + 400);
    iVar4 = *(int *)(iVar2 + 0x194);
    if (iVar3 != iVar4) {
      param_4 = *(int *)(iVar2 + 0x198);
    }
    if (iVar3 != iVar4 && iVar4 != param_4) {
      *(uint *)(iVar2 + 0x1a0) = *(uint *)(iVar2 + 0x1a0) | 1 << (*(ushort *)(iVar2 + 0x19c) & 0xff)
      ;
      *(short *)(iVar2 + 0x19e) = *(short *)(iVar2 + 0x19e) + 1;
    }
    *(int *)(iVar2 + 0x18c) = iVar3;
    *(undefined1 *)(iVar2 + 0x1a6) = 1;
    return;
  }
  return;
}

