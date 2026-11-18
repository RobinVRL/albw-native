#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00568B3C(int param_1);
extern int func_00568B58(int param_1);
extern int *DAT_0012f34c;
extern int DAT_0012f350;
extern int DAT_0012f354;
extern int *DAT_0012f358;
extern undefined4 DAT_0012f380;
extern undefined4 DAT_0012f384;
extern char s_AutoScale_0012f374[];
extern char s_RubyColor_0012f368[];
extern char s_RubyMode_0012f35c[];

// USA 0012F1DC <- EU 0012F1DC (Ghidra, non-matching)
// GLOBAL DAT_0012f34c int *
// GLOBAL DAT_0012f350 int
// GLOBAL DAT_0012f354 int
// GLOBAL DAT_0012f358 int *
// GLOBAL DAT_0012f380 undefined4
// GLOBAL DAT_0012f384 undefined4
// GLOBAL s_AutoScale_0012f374 string
// GLOBAL s_RubyColor_0012f368 string
// GLOBAL s_RubyMode_0012f35c string

void func_0012F1DC(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  iVar2 = DAT_0012f354;
  piVar1 = DAT_0012f34c;
  local_2c = param_1;
  uStack_28 = param_2;
  if (((*(uint *)(DAT_0012f350 + 4) & 1) == 0) && (iVar4 = func_00100174(DAT_0012f358), iVar4 != 0))
  {
    piVar1[1] = (int)s_RubyMode_0012f35c;
    *piVar1 = iVar2;
    piVar1[3] = (int)s_RubyColor_0012f368;
    piVar1[2] = iVar2;
    piVar1[5] = (int)s_AutoScale_0012f374;
    piVar1[4] = iVar2;
  }
  uVar3 = func_00568B3C(local_2c);
  iVar4 = func_00568B58(local_2c);
  iVar8 = 0;
  if (uVar3 != 0) {
    do {
      uVar7 = 0;
      piVar5 = (int *)(iVar4 + iVar8 * 0xc);
      local_34 = *piVar5;
      local_38 = iVar2;
      if (local_34 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = (int)piVar5 + local_34;
      }
      do {
        piVar5 = piVar1 + uVar7 * 2;
        (**(code **)(local_38 + 8))(&local_38);
        (**(code **)(local_38 + 8))(&local_38);
        iVar6 = local_34;
        (**(code **)(*piVar5 + 8))(piVar5);
        if (iVar6 == piVar5[1]) {
code_r0x0012f330:
          if ((1 < uVar7) && (uVar7 == 2)) {
            *(undefined1 *)(local_2c + 0x148) = 1;
          }
          break;
        }
        iVar6 = 0;
        do {
          if (*(char *)(local_34 + iVar6) != *(char *)(piVar5[1] + iVar6)) break;
          if (*(char *)(local_34 + iVar6) == '\0') goto code_r0x0012f330;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x40001);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 3);
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)(uint)uVar3);
  }
  return;
}

