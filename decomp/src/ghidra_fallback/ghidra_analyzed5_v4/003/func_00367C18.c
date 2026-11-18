#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0038AAF4(undefined4 *param_1,int *param_2,int param_3);
extern int func_004B948C(int param_1,int param_2);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_00367d1c;
extern int DAT_00367d20;

// USA 00367C18 <- EU 00367BF4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int *
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_00367d1c undefined4
// GLOBAL DAT_00367d20 int

void func_00367C18(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                  int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define piStack_2c (*(int * *)(albw_frame + 0x14))
  #define local_28 ((undefined4 *)(albw_frame + 0x18))
  local_28[1] = param_4;
  local_28[0] = param_3;
  if (((*(byte *)(param_1 + 0xf5) & 1) == 0) && (param_2 != (int *)0x0)) {
    uVar2 = 0;
    do {
      puVar3 = local_28;
      if (uVar2 < 2) {
        puVar3 = local_28 + uVar2;
      }
      puVar5 = (undefined4 *)(param_1 + 0x44);
      if (uVar2 < 2) {
        puVar5 = puVar5 + uVar2;
      }
      uVar2 = uVar2 + 1;
      *puVar5 = *puVar3;
      iVar1 = DAT_00367d20;
    } while ((int)uVar2 < 2);
    iStack_30 = param_1;
    piStack_2c = param_2;
    if (param_6 == 0 || param_7 == 0) {
      uVar2 = 0;
      do {
        piVar6 = param_5;
        if (uVar2 < 0x14) {
          piVar6 = param_5 + uVar2 * 0xb;
        }
        (**(code **)(*piVar6 + 8))(piVar6);
        local_34 = piVar6[1];
        local_38 = iVar1;
        uVar4 = func_005229AC(param_2,&local_38);
        puVar3 = (undefined4 *)(param_1 + 0x4c);
        if (uVar2 < 0x14) {
          puVar3 = puVar3 + uVar2;
        }
        uVar2 = uVar2 + 1;
        *puVar3 = uVar4;
      } while ((int)uVar2 < 0x14);
    }
    else {
      puVar5 = (undefined4 *)func_0010BAB4(0x198);
      puVar3 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = func_0038AAF4(puVar5,param_2,(int)param_5);
        *puVar3 = DAT_00367d1c;
      }
      *(undefined4 **)(param_1 + 0x40) = puVar3;
      func_004B948C(param_7,(int)puVar3);
    }
    *(byte *)(param_1 + 0xf5) = *(byte *)(param_1 + 0xf5) | 1;
  }
  return;
}

