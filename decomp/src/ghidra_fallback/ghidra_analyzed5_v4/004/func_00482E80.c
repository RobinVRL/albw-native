#include "ghidra_types.h"

extern int func_00167E44(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5, int param_6);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_00483004;
extern int DAT_00483008;
extern int *DAT_0048300c;
extern int *DAT_00483010;
extern int *DAT_00483014;
extern undefined DAT_00483018;

// USA 00482E80 <- EU 00482E58 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// GLOBAL DAT_00483004 int *
// GLOBAL DAT_00483008 int
// GLOBAL DAT_0048300c int *
// GLOBAL DAT_00483010 int *
// GLOBAL DAT_00483014 int *
// GLOBAL DAT_00483018 undefined

void func_00482E80(undefined4 param_1,undefined4 *param_2,byte *param_3,uint param_4,int param_5,
                  int param_6)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(int *)(albw_frame + 0x8))
  #define local_54 (*(int *)(albw_frame + 0xc))
  #define local_50 ((int *)(albw_frame + 0x10))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define puStack_30 (*(undefined4 * *)(albw_frame + 0x30))
  #define pbStack_2c (*(byte * *)(albw_frame + 0x34))
  #define local_28 (*(uint *)(albw_frame + 0x38))
  piVar3 = DAT_00483004;
  local_58 = DAT_00483008;
  local_54 = param_5 + 0x80;
  uStack_34 = param_1;
  puStack_30 = param_2;
  pbStack_2c = param_3;
  local_28 = param_4;
  (**(code **)(*DAT_00483004 + 8))(DAT_00483004);
  (**(code **)(*piVar3 + 8))(piVar3);
  iVar6 = piVar3[1];
  (**(code **)(local_58 + 8))(&local_58);
  piVar5 = DAT_00483010;
  piVar4 = DAT_0048300c;
  if (iVar6 != local_54) {
    iVar6 = 0;
    do {
      cVar1 = *(char *)(piVar3[1] + iVar6);
      if ((cVar1 == '\0') && (*(char *)(local_54 + iVar6) == '\0')) break;
      if ((cVar1 == '\0') ||
         ((*(char *)(local_54 + iVar6) == '\0' || (cVar1 != *(char *)(local_54 + iVar6))))) {
        bVar2 = false;
        goto LAB_00482f38;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x40000);
  }
  bVar2 = true;
LAB_00482f38:
  if (bVar2) {
    if (*DAT_0048300c < 0) {
      local_50[3] = 0xffffffff;
      local_50[0] = 0;
      local_50[1] = 0;
      local_50[2] = 0;
      func_005826A4(*DAT_00483010,local_50,DAT_0048300c + 6,DAT_0048300c + 8);
      if (local_50[0] != 0) {
        *piVar4 = local_50[2] >> 1;
      }
      func_005826A4(*piVar5,local_50,DAT_00483014 + -4,DAT_00483014);
      if (local_50[0] != 0) {
        iVar6 = *piVar4;
        if (*piVar4 <= local_50[2] >> 1) {
          iVar6 = local_50[2] >> 1;
        }
        *piVar4 = iVar6;
      }
    }
    *param_2 = &DAT_00483018;
    param_2[1] = 0;
    param_2[2] = *piVar4;
  }
  else {
    func_00167E44(param_1,param_2,param_3,local_28,param_5,param_6);
  }
  return;
}

