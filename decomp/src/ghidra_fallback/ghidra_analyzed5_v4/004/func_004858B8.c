#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014A354(int param_1,int param_2);
extern int func_0014AA1C(int param_1,char *param_2,int param_3);
extern int func_00323BCC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00323BD8(int param_1);
extern int func_004B083C(void);
extern int func_004B3B10(void);
extern int func_0066F2B8(undefined4 *param_1,undefined1 param_2);
extern uint DAT_004859c4;
extern int *DAT_004859c8;
extern int *DAT_004859cc;
extern uint *DAT_004859d0;
extern undefined4 *DAT_004859d4;
extern undefined4 DAT_004859d8;
extern undefined4 DAT_004859dc;
extern int *DAT_004859e0;

// USA 004858B8 <- EU 00485890 (Ghidra, non-matching)
// GLOBAL DAT_004859c4 uint
// GLOBAL DAT_004859c8 int *
// GLOBAL DAT_004859cc int *
// GLOBAL DAT_004859d0 uint *
// GLOBAL DAT_004859d4 undefined4 *
// GLOBAL DAT_004859d8 undefined4
// GLOBAL DAT_004859dc undefined4
// GLOBAL DAT_004859e0 int *

undefined4 func_004858B8(int param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar1 = DAT_004859c4;
  bVar2 = func_004B3B10();
  uVar3 = *(uint *)(*DAT_004859c8 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
  if (bVar2) {
    if ((uVar3 & uVar1) != 0) {
      piVar4 = (int *)func_0014A354(*DAT_004859cc,0);
      if (((*DAT_004859d0 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_004859d0), iVar5 != 0)) {
        *DAT_004859d4 = DAT_004859d8;
      }
      if ((piVar4 == (int *)0x0) ||
         (iVar5 = (**(code **)(*piVar4 + 8))(piVar4,DAT_004859d4), iVar5 == 0)) {
        piVar4 = (int *)0x0;
      }
      if (piVar4 != (int *)0x0) {
        func_00323BCC((int)piVar4,0x78,2,0x1e);
      }
      local_18[0] = '\x02';
      local_14 = DAT_004859dc;
      func_0014AA1C(*DAT_004859e0,local_18,0);
      if (piVar4 != (int *)0x0) {
        func_00323BD8((int)piVar4);
      }
    }
  }
  else if (((uVar3 & 0x800) != 0) && (iVar5 = func_004B083C(), iVar5 != 0)) {
    return func_0066F2B8((undefined4 *)(param_1 + 0x8c),1);
  }
  return 0;
}

