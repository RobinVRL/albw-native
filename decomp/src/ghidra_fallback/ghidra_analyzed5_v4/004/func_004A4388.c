#include "ghidra_types.h"

extern int func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, int param_6);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_006896BC(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int *DAT_004a4530;
extern uint DAT_004a4534;
extern int *DAT_004a4538;
extern int *DAT_004a453c;
extern int *DAT_004a4540;
extern int *DAT_004a4544;
extern undefined DAT_004a4548;

// USA 004A4388 <- EU 004A4360 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_004a4530 int *
// GLOBAL DAT_004a4534 uint
// GLOBAL DAT_004a4538 int *
// GLOBAL DAT_004a453c int *
// GLOBAL DAT_004a4540 int *
// GLOBAL DAT_004a4544 int *
// GLOBAL DAT_004a4548 undefined

/* WARNING: Variable defined which should be unmapped: objStack_88 */

void func_004A4388(undefined4 param_1,undefined4 *param_2,byte *param_3,undefined1 *param_4,
                  int param_5,int param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(uint *)(albw_frame + 0x10))
  #define local_7c (*(int *)(albw_frame + 0x14))
  #define local_78 ((int *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x60))
  #define local_2c (*(byte * *)(albw_frame + 0x64))
  #define puStack_28 (*(undefined1 * *)(albw_frame + 0x68))
  uVar3 = DAT_004a4534;
  piVar6 = DAT_004a4530;
  local_80 = DAT_004a4534;
  local_7c = param_5 + 0x80;
  uStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  (**(code **)(*DAT_004a4530 + 8))(DAT_004a4530);
  (**(code **)(*piVar6 + 8))(piVar6);
  iVar8 = piVar6[1];
  (**(code **)(local_80 + 8))(&local_80);
  piVar5 = DAT_004a453c;
  piVar4 = DAT_004a4538;
  if (iVar8 != local_7c) {
    param_4 = (undefined1 *)piVar6[1];
    iVar8 = 0;
    do {
      cVar1 = param_4[iVar8];
      if ((cVar1 == '\0') && (*(char *)(local_7c + iVar8) == '\0')) break;
      if ((cVar1 == '\0') ||
         ((*(char *)(local_7c + iVar8) == '\0' || (cVar1 != *(char *)(local_7c + iVar8))))) {
        bVar2 = false;
        goto LAB_004a443c;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x40000);
  }
  bVar2 = true;
LAB_004a443c:
  if (bVar2) {
    if (*DAT_004a4538 < 0) {
      uVar7 = 1;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[3] = 0xffffffff;
      local_78[2] = 0;
      do {
        piVar6 = DAT_004a4540;
        (**(code **)(*DAT_004a4540 + 8))(DAT_004a4540);
        piVar6 = func_006896BC(local_78 + 4,piVar6[1],uVar7,param_4);
        (**(code **)(*piVar6 + 8))(piVar6);
        objStack_88[1] = piVar6[1];
        objStack_88[0] = uVar3;
        param_4 = (undefined1 *)objStack_88;
        func_005826A4(*piVar5,local_78,DAT_004a4544,(int *)objStack_88);
        uVar7 = uVar7 + 1;
        iVar8 = local_78[2] >> 1;
        if (local_78[2] >> 1 < *piVar4) {
          iVar8 = *piVar4;
        }
        *piVar4 = iVar8;
      } while ((int)uVar7 < 0x33);
      *piVar4 = iVar8 << 1;
    }
    *param_2 = &DAT_004a4548;
    param_2[1] = 0;
    param_2[2] = *piVar4;
  }
  else {
    objStack_88[0] = param_5;
    objStack_88[1] = param_6;
    func_00167E44(param_1,param_2,local_2c,(uint)puStack_28,param_5,param_6);
  }
  return;
}

