#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00584C14(int param_1,int *param_2);
extern int *DAT_00250a40;
extern uint *DAT_00250a44;
extern undefined4 *DAT_00250a48;
extern undefined4 DAT_00250a4c;
extern int DAT_00250a50;
extern int DAT_00250a54;

// USA 002508EC <- EU 00250914 (Ghidra, non-matching)
// GLOBAL DAT_00250a40 int *
// GLOBAL DAT_00250a44 uint *
// GLOBAL DAT_00250a48 undefined4 *
// GLOBAL DAT_00250a4c undefined4
// GLOBAL DAT_00250a50 int
// GLOBAL DAT_00250a54 int

undefined1 func_002508EC(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  uVar1 = 0;
  if (*(char *)(param_1 + 0x420) != '\0') {
    if (*(char *)(param_1 + 0x491) == '\0') {
      puVar2 = (undefined4 *)func_0052FBA0(*DAT_00250a40 + 0x3dbbc,*(uint *)(param_1 + 0x470));
      if (((*DAT_00250a44 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_00250a44), iVar3 != 0)) {
        *DAT_00250a48 = DAT_00250a4c;
      }
      if ((puVar2 == (undefined4 *)0x0) ||
         (iVar3 = (**(code **)*puVar2)(puVar2,DAT_00250a48), iVar3 == 0)) {
        puVar2 = (undefined4 *)0x0;
      }
      iVar3 = DAT_00250a50;
      if (puVar2 != (undefined4 *)0x0) {
        if (*(char *)((int)puVar2 + 0x4a2) == '\0') {
          *(undefined1 *)((int)puVar2 + 0x4a2) = 1;
        }
        *(undefined1 *)(param_1 + 0x491) = 1;
        uVar6 = (uint)(*(float *)(param_1 + 0x440) == *(float *)(param_1 + 0x448));
        local_14 = *(undefined4 *)(iVar3 + (uVar6 ^ 1) * 4);
        local_18 = DAT_00250a54;
        uVar4 = func_00584C14(*(int *)(param_1 + 0x480),&local_18);
        func_004CEA18(*(int *)(param_1 + 0x480),0,uVar4);
        if (uVar6 == 0) {
          uVar5 = 3;
        }
        else {
          uVar5 = 2;
        }
        func_003521F0(param_1 + 0x324,uVar5);
      }
    }
    uVar1 = 1;
  }
  return uVar1;
}

