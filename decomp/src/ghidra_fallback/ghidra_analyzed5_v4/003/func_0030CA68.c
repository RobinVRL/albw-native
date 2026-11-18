#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001DE370(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0030C4D0(int *param_1,int param_2);
extern int func_00581B9C(int param_1);
extern int func_00582250(int param_1);
extern uint *DAT_0030cbac;
extern int *DAT_0030cbb0;
extern int *DAT_0030cbb4;
extern undefined4 *DAT_0030cbb8;
extern undefined4 DAT_0030cbbc;

// USA 0030CA68 <- EU 0030CA44 (Ghidra, non-matching)
// GLOBAL DAT_0030cbac uint *
// GLOBAL DAT_0030cbb0 int *
// GLOBAL DAT_0030cbb4 int *
// GLOBAL DAT_0030cbb8 undefined4 *
// GLOBAL DAT_0030cbbc undefined4

undefined4 func_0030CA68(int *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  if (param_4 == 100) {
    iVar5 = *DAT_0030cbb0;
    iVar2 = func_00581B9C(iVar5);
    if (((iVar2 == 1) && (puVar3 = (uint *)func_00582250(iVar5), param_2 < *puVar3)) &&
       (iVar5 = *(int *)(puVar3[2] + param_2 * 4), iVar5 != 0)) {
      piVar1 = *(int **)(iVar5 + 0x28);
      if (param_3 == 0) {
        if (piVar1 != (int *)0x0) {
          iVar5 = *(int *)(iVar5 + 0x20);
        }
        if (piVar1 == (int *)0x0 || iVar5 == 0) {
          return 0;
        }
        iVar5 = *piVar1;
      }
      else {
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        uVar4 = *(uint *)(iVar5 + 0x20) - 1;
        if (*(uint *)(iVar5 + 0x20) <= uVar4) {
          return 0;
        }
        iVar5 = piVar1[uVar4];
      }
      if (iVar5 != 0) {
        local_20 = *(undefined4 *)(iVar5 + 0x18);
        uStack_1c = *(undefined4 *)(iVar5 + 0x1c);
        uStack_18 = *(undefined4 *)(iVar5 + 0x20);
        func_001DE370(*DAT_0030cbb4,&local_20,**(undefined4 **)(*DAT_0030cbb4 + 0x24));
      }
    }
  }
  else {
    piVar1 = func_0030C4D0(param_1,param_4);
    if (((*DAT_0030cbac & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0030cbac), iVar5 != 0)) {
      *DAT_0030cbb8 = DAT_0030cbbc;
    }
    if ((piVar1 == (int *)0x0) || (iVar5 = (**(code **)*piVar1)(piVar1,DAT_0030cbb8), iVar5 == 0)) {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0030cba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      return (**(code **)(*piVar1 + 0x78))(piVar1,param_2 & 0xff);
    }
  }
  return 0;
}

