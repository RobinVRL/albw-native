#include "ghidra_types.h"

extern int func_00293DC0(int param_1,int param_2,int param_3);
extern int func_00587FCC(int param_1,int *param_2);
extern int func_00588154(int param_1,uint param_2);
extern int *DAT_00294d38;
extern int DAT_00294d3c;

// USA 00294C64 <- EU 00294C8C (Ghidra, non-matching)
// GLOBAL DAT_00294d38 int *
// GLOBAL DAT_00294d3c int

void func_00294C64(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  piVar2 = DAT_00294d38;
  if (*(int *)(param_1 + 400) != -1) {
    local_14 = func_00588154(*DAT_00294d38,*(int *)(param_1 + 400));
    local_18 = DAT_00294d3c;
    iVar1 = func_00587FCC(*piVar2,&local_18);
    if ((iVar1 != -1) && (*(char *)(param_1 + 0x1a4) != '\0')) {
      func_00293DC0(param_1,iVar1,0);
    }
    piVar2 = *(int **)(param_1 + 400);
    piVar3 = *(int **)(param_1 + 0x194);
    if (piVar2 != piVar3) {
      param_4 = *(int **)(param_1 + 0x198);
    }
    if (piVar2 != piVar3 && piVar3 != param_4) {
      *(uint *)(param_1 + 0x1a0) =
           *(uint *)(param_1 + 0x1a0) | 1 << (*(ushort *)(param_1 + 0x19c) & 0xff);
      *(short *)(param_1 + 0x19e) = *(short *)(param_1 + 0x19e) + 1;
    }
    *(int **)(param_1 + 0x18c) = piVar2;
    *(undefined1 *)(param_1 + 0x1a6) = 1;
    return;
  }
  return;
}

