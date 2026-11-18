#include "ghidra_types.h"

extern int func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, int param_6);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_00450954;
extern uint DAT_00450958;
extern int *DAT_0045095c;
extern int DAT_00450960;
extern int *DAT_00450964;
extern int *DAT_00450968;
extern undefined DAT_0045096c;

// USA 004507C8 <- EU 004507A0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00450954 int *
// GLOBAL DAT_00450958 uint
// GLOBAL DAT_0045095c int *
// GLOBAL DAT_00450960 int
// GLOBAL DAT_00450964 int *
// GLOBAL DAT_00450968 int *
// GLOBAL DAT_0045096c undefined

/* WARNING: Variable defined which should be unmapped: objStack_60 */

void func_004507C8(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define local_58 (*(uint *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 ((int *)(albw_frame + 0x10))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x30))
  #define local_2c (*(byte * *)(albw_frame + 0x34))
  #define uStack_28 (*(uint *)(albw_frame + 0x38))
  uVar3 = DAT_00450958;
  piVar8 = DAT_00450954;
  local_58 = DAT_00450958;
  local_54 = param_5 + 0x80;
  uStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  (**(code **)(*DAT_00450954 + 8))(DAT_00450954);
  (**(code **)(*piVar8 + 8))(piVar8);
  iVar9 = piVar8[1];
  (**(code **)(local_58 + 8))(&local_58);
  piVar6 = DAT_00450964;
  iVar5 = DAT_00450960;
  piVar4 = DAT_0045095c;
  if (iVar9 != local_54) {
    iVar9 = 0;
    do {
      cVar1 = *(char *)(piVar8[1] + iVar9);
      if ((cVar1 == '\0') && (*(char *)(local_54 + iVar9) == '\0')) break;
      if ((cVar1 == '\0') ||
         ((*(char *)(local_54 + iVar9) == '\0' || (cVar1 != *(char *)(local_54 + iVar9))))) {
        bVar2 = false;
        goto LAB_00450878;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40000);
  }
  bVar2 = true;
LAB_00450878:
  if (bVar2) {
    if (*DAT_0045095c < 0) {
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      local_50[3] = 0xffffffff;
      iVar9 = 0;
      do {
        piVar8 = (int *)(iVar5 + iVar9 * 8);
        (**(code **)(*piVar8 + 8))(piVar8);
        objStack_60[1] = piVar8[1];
        objStack_60[0] = uVar3;
        func_005826A4(*piVar6,local_50,DAT_00450968,(int *)objStack_60);
        iVar9 = iVar9 + 1;
        iVar7 = local_50[2] >> 1;
        if (local_50[2] >> 1 < *piVar4) {
          iVar7 = *piVar4;
        }
        *piVar4 = iVar7;
      } while (iVar9 < 4);
      *piVar4 = iVar7 << 1;
    }
    *param_2 = &DAT_0045096c;
    param_2[1] = 0;
    param_2[2] = *piVar4;
  }
  else {
    objStack_60[0] = param_5;
    objStack_60[1] = param_6;
    func_00167E44(param_1,param_2,local_2c,uStack_28,param_5,param_6);
  }
  return;
}

