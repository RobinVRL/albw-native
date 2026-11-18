#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int *DAT_00222a78;
extern int DAT_00222a7c;

// USA 002228F8 <- EU 002228F8 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 byte
// GLOBAL DAT_00222a78 int *
// GLOBAL DAT_00222a7c int

/* WARNING: Variable defined which should be unmapped: objStack_30 */

void func_002228F8(int param_1,int param_2,uint param_3,int param_4,int param_5,byte param_6,
                  float fparam_0)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  iVar4 = *(int *)(*(int *)(param_1 + 0x10) + 0x2d0);
  if (iVar4 != 0) {
    objStack_30[0] = 0;
    objStack_30[1] = 0;
    piVar1 = func_0014DF18(iVar4,1,param_2,param_3,0,0);
    *(int **)(param_1 + 0x18) = piVar1;
    piVar1 = DAT_00222a78;
    uVar5 = DAT_00222a7c + 8;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(iVar4 + 0x1c8 + param_2 * 4);
    if (param_4 != 0) {
      puVar2 = (undefined4 *)func_0010BAB4(0xa8);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x1c) = 0;
      }
      else {
        (**(code **)(*piVar1 + 8))(piVar1);
        objStack_30[1] = piVar1[1];
        objStack_30[0] = uVar5;
        puVar2 = func_0016A2FC(puVar2,param_4,objStack_30,1);
        *(undefined4 **)(param_1 + 0x1c) = puVar2;
      }
    }
    if (param_5 != 0) {
      puVar2 = (undefined4 *)func_0010BAB4(0xa8);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      else {
        (**(code **)(*piVar1 + 8))(piVar1);
        objStack_30[1] = piVar1[1];
        objStack_30[0] = uVar5;
        puVar2 = func_0016A2FC(puVar2,param_5,objStack_30,1);
        *(undefined4 **)(param_1 + 0x20) = puVar2;
      }
    }
    bVar6 = *(char *)(param_1 + 0x24) != '\0';
    iVar4 = 0;
    if (bVar6) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
    if ((bVar6 && iVar4 != 0) && (iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0x40c), iVar3 != 0)) {
      *(uint *)(iVar4 + 0x164) = *(uint *)(iVar4 + 0x164) | 0x40000000;
      *(undefined4 *)(iVar4 + 0x74) = *(undefined4 *)(iVar3 + 0x74);
      *(undefined4 *)(iVar4 + 0x78) = *(undefined4 *)(iVar3 + 0x78);
      *(undefined4 *)(iVar4 + 0x7c) = *(undefined4 *)(iVar3 + 0x7c);
    }
    func_004FC1CC(*(int *)(param_1 + 0x10),*(int *)(param_1 + 0x18),param_6,fparam_0);
    *(undefined1 *)(param_1 + 0x25) = 1;
  }
  return;
}

